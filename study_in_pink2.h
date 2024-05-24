/*
* Ho Chi Minh City University of Technology
* Faculty of Computer Science and Engineering
* Initial code for Assignment 1
* Programming Fundamentals Spring 2023
* Author: Vu Van Tien dit me HCMUT
* Date: 02.02.2023
*/

//The library here is concretely set, students are not allowed to include any other libraries.
#ifndef _H_STUDY_IN_PINK_2_H_
#define _H_STUDY_IN_PINK_2_H_
#include "main.h"

////////////////////////////////////////////////////////////////////////
/// STUDENT'S ANSWER BEGINS HERE
/// Complete the following functions
/// DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////


// Forward declaration
class MovingObject;

class Position;

class Configuration;

class Map;

class Sherlock;

class Watson;

class Criminal;

class Robot;

class RobotS;

class RobotW;

class RobotSW;

class RobotC;

class ArrayMovingObject;

class StudyPinkProgram;

class BaseItem;

class BaseBag;

class SherlockBag;

class WatsonBag;

class TestStudyInPink;

//Extra function for Config
string getSubString(string input, int start, int end);
int getintValue(string input, int start);
int countPosition(string input);
void initArray(Position *&position, int numPosition);
void extractArray(Position *position, string input, int numPosition);
void getPosition(int &r, int &c, string input);
//calculate Manhattan distance of 2 Position
int calculateDistance(const Position &pos1, const Position &pos2);
int reduceNum(int num);
enum ItemType {
  MAGIC_BOOK,
  ENERGY_DRINK,
  FIRST_AID,
  EXCEMPTION_CARD,
  PASSING_CARD
};
enum ElementType {
  PATH,
  WALL,
  FAKE_WALL
};
enum RobotType {
  C = 0,
  S,
  W,
  SW,
  ALL = 9999
};
// addition
enum MovingObjectType {
  SHERLOCK,
  WATSON,
  CRIMINAL,
  ROBOT
};

class MapElement {
  friend class TestStudyInPink;

 protected:
  ElementType type;
 public:
  MapElement(ElementType in_type);
  virtual ~MapElement() {};
  virtual ElementType getType() const;
};

class Path : public MapElement {
  friend class TestStudyInPink;

 public:
  Path() : MapElement(PATH) {};
  ~Path() override {};
};

class Wall : public MapElement {
  friend class TestStudyInPink;

 public:
  Wall() : MapElement(WALL) {};
  ~Wall() override {};
};

class FakeWall : public MapElement {
  friend class TestStudyInPink;

 private:
  int req_exp;
 public:
  FakeWall(int in_req_exp);
  int getReqExp() const;
  ~FakeWall() override {};
};

class Map {
  friend class TestStudyInPink;

 private:
  int num_rows, num_cols;
  // addition
  MapElement ***map;
 public:
  Map(int num_rows, int num_cols, int num_walls, Position *array_walls, int num_fake_walls, Position *array_fake_walls);
  ~Map();
  int getNumRows() const;
  int getNumCols() const;
  ElementType getElementType(int i, int j) const;
  bool isValid(const Position &pos, MovingObject *mv_obj) const;
};

class Position {
  friend class TestStudyInPink;

 private:
  int r, c;
 public:
  static const Position npos;
  Position(int r = 0, int c = 0);
  Position(const string &str_pos);
  ~Position(){};
  int getRow() const;
  int getCol() const;
  void setRow(int r);
  void setCol(int c);
  string str() const;
  bool isEqual(int in_r, int in_c) const;
  bool isEqual(Position pos) const;
};

class MovingObject {
  friend class TestStudyInPink;

 protected:
  int index;
  Position pos;
  Map *map;
  string name;
 public:
  MovingObject(int index, const Position pos, Map *map, const string &name = "");
  virtual ~MovingObject() {};
  virtual Position getNextPosition() = 0;
  Position getCurrentPosition() const;
  virtual void move() = 0;
  virtual string str() const = 0;
  // addition
  virtual MovingObjectType getObjectType() const = 0;
};

class Character : public MovingObject {
  friend class TestStudyInPink;

 public:
  bool usedCard;
  Character(int index, const Position pos, Map *map, const string &name = "");
  // addition
  virtual void move();
  virtual Position getNextPosition() = 0;
  virtual int getHP() const { return -1; }
  virtual int getEXP() const { return -1; }
  virtual void setHP(int hp) {};
  virtual void setEXP(int exp) {};
  virtual string str() const = 0;
  virtual MovingObjectType getObjectType() const = 0;
  virtual BaseBag *getBag() const { return nullptr; };
  BaseItem *preFight(Robot *robot);
  void postFight();
  virtual bool meet(RobotS *robotS) { return false; }
  virtual bool meet(RobotW *robotW) { return false; }
  virtual bool meet(RobotSW *robotSW) { return false; }
  virtual bool meet(RobotC *robotC) { return false; }
  virtual ~Character() {};
};

class Sherlock : public Character {
  friend class TestStudyInPink;

 private:
  int hp, exp;
  // addition
  string moving_rule;
  int index_moving_rule;
  BaseBag *bag;
 public:
  Sherlock(int index, const string &moving_rule, const Position &init_pos, Map *map, int init_hp, int init_exp);
  Position getNextPosition() override;
  string str() const override;
  // addition
  MovingObjectType getObjectType() const override;
  BaseBag *getBag() const override;
  int getHP() const override;
  int getEXP() const override;
  void setHP(int hp) override;
  void setEXP(int exp) override;
  void setPos(Position pos);
  bool meet(RobotS *robotS) override;
  bool meet(RobotW *robotW) override;
  bool meet(RobotSW *robotSW) override;
  bool meet(RobotC *robotC) override;
  bool meet(Watson *watson);
  ~Sherlock() override;
};

class Watson : public Character {
  friend class TestStudyInPink;

 private:
  // TODO
  int hp, exp;
  // addition
  string moving_rule;
  int index_moving_rule;
  BaseBag *bag;
 public:
  Watson(int index, const string &moving_rule, const Position &init_pos, Map *map, int init_hp, int init_exp);
  Position getNextPosition() override;
  string str() const override;
  // addition
  MovingObjectType getObjectType() const override;
  BaseBag *getBag() const override;
  int getHP() const override;
  int getEXP() const override;
  void setHP(int hp) override;
  void setEXP(int exp) override;
  bool meet(RobotS *robotS) override;
  bool meet(RobotW *robotW) override;
  bool meet(RobotSW *robotSW) override;
  bool meet(RobotC *robotC) override;
  bool meet(Sherlock *sherlock);
  ~Watson() override;
};

class Criminal : public Character {
  friend class TestStudyInPink;

 private:
  // TODO
  Sherlock *sherlock;
  Watson *watson;
  // addition
  int count;
  Position prev_pos;
 public:
  Criminal(int index, const Position &init_pos, Map *map, Sherlock *sherlock, Watson *watson);
  void move() override;
  string str() const override;
  // addition
  MovingObjectType getObjectType() const override;
  int getCount() const;
  Position getPrevPosition() const;
  Position getNextPosition() override;
  ~Criminal() override {};
};

class ArrayMovingObject {
  friend class TestStudyInPink;

 private:
  MovingObject **arr_mv_objs;
  int count;
  int capacity;
 public:
  ArrayMovingObject(int capacity);
  ~ArrayMovingObject();
  bool isFull() const;
  bool add(MovingObject *mv_obj);
  string str() const;
  // addition
  MovingObject *get(int index) const;
  int size() const;
  bool checkMeet(int index);
  bool handleCheckMeet(Sherlock *sherlock, int index, int *meeting, int countMeet);
  bool handleCheckMeet(Watson *watson, int index, int *meeting, int countMeet);
  bool handleCheckMeet(Criminal *criminal, int index, int *meeting, int countMeet);
  bool handleCheckMeet(Robot *robot, int index, int *meeting, int countMeet);
  bool fightRobot(Character *character, Robot *robot);
};

class Configuration {
  friend class TestStudyInPink;

  friend class StudyPinkProgram;

 private:
  int map_num_rows;
  int map_num_cols;
  int max_num_moving_objects;
  int num_walls;
  Position *arr_walls;
  int num_fake_walls;
  Position *arr_fake_walls;
  string sherlock_moving_rule;
  Position sherlock_init_pos;
  int sherlock_init_hp;
  int sherlock_init_exp;
  string watson_moving_rule;
  Position watson_init_pos;
  int watson_init_hp;
  int watson_init_exp;
  Position criminal_init_pos;
  int num_steps;
 public:
  Configuration(const string &filepath);
  ~Configuration();
  string str() const;
};

// Robot, BaseItem, BaseBag,...
class Robot : public MovingObject {
  friend class TestStudyInPink;

 protected:
  RobotType robot_type;
  BaseItem *item;
  Criminal *criminal;
 public:
  Robot(int index,
        const Position &pos,
        Map *map,
        Criminal *criminal,
        const string &name = "");
  virtual ~Robot();
  MovingObjectType getObjectType() const override;
  virtual Position getNextPosition() = 0;
  virtual void move() override {
    Position temp = getNextPosition();
    if (!temp.isEqual(Position::npos)) pos = temp;
  };
  virtual string str() const override;
  virtual RobotType getType() const;
  // addition
  static Robot *create(int index, Map *map, Criminal *criminal, Sherlock *sherlock, Watson *watson);
  virtual int getDistance() const { return INT_MAX; };
  int getDistance(Character *obj) const;
  BaseItem *getItem();
};

class RobotC : public Robot {
  friend class TestStudyInPink;

 private:
 public:
  RobotC(int index,
         const Position &init_pos,
         Map *map,
         Criminal *criminal);
  ~RobotC() override = default;
  Position getNextPosition();
  // addition
  Position criminalCaught() {
    return criminal->getCurrentPosition();
  }
};

class RobotS : public Robot {
  friend class TestStudyInPink;

 private:
  Sherlock *sherlock;
 public:
  RobotS(int index,
         const Position &init_pos,
         Map *map,
         Criminal *criminal,
         Sherlock *sherlock);
  ~RobotS() override = default;
  Position getNextPosition() override;
  int getDistance() const override;
  // addition
};

class RobotW : public Robot {
  friend class TestStudyInPink;

 private:
  Watson *watson;
 public:
  RobotW(int index,
         const Position &init_pos,
         Map *map,
         Criminal *criminal,
         Watson *watson);
  ~RobotW() override = default;
  Position getNextPosition() override;
  int getDistance() const;
  // addition
};

class RobotSW : public Robot {
  friend class TestStudyInPink;

 private:
  Sherlock *sherlock;
  Watson *watson;
 public:
  RobotSW(int index,
          const Position &init_pos,
          Map *map,
          Criminal *criminal,
          Sherlock *sherlock,
          Watson *watson);
  ~RobotSW() override = default;
  Position getNextPosition() override;
  int getDistance() const override;
};

class BaseItem {
  friend class TestStudyInPink;

 public:
  BaseItem() = default;
  virtual ~BaseItem() = default;
  virtual bool canUse(Character *obj, Robot *robot) = 0;
  virtual void use(Character *obj, Robot *robot) = 0;
  virtual ItemType getType() const = 0;
  virtual string str() const = 0;
};

class MagicBook : public BaseItem {
  friend class TestStudyInPink;

 public:
  MagicBook() = default;
  ~MagicBook() override = default;
  bool canUse(Character *obj, Robot *robot) override;
  void use(Character *obj, Robot *robot) override;
  ItemType getType() const override;
  string str() const override;
};

class EnergyDrink : public BaseItem {
  friend class TestStudyInPink;

 public:
  EnergyDrink() = default;
  ~EnergyDrink() override = default;
  bool canUse(Character *obj, Robot *robot) override;
  void use(Character *obj, Robot *robot) override;
  ItemType getType() const override;
  string str() const override;
};

class FirstAid : public BaseItem {
  friend class TestStudyInPink;

 public :
  FirstAid() = default;
  ~FirstAid() override = default;
  bool canUse(Character *obj, Robot *robot) override;
  void use(Character *obj, Robot *robot) override;
  ItemType getType() const override;
  string str() const override;
};

class ExcemptionCard : public BaseItem {
  friend class TestStudyInPink;

 public:
  ExcemptionCard() = default;
  ~ExcemptionCard() override = default;
  bool canUse(Character *obj, Robot *robot) override;
  void use(Character *obj, Robot *robot) override;
  ItemType getType() const override;
  string str() const override;
};

class PassingCard : public BaseItem {
  friend class TestStudyInPink;

 private:
  string challenge;
 public:
  PassingCard(int i, int j);
  PassingCard(const PassingCard *other) {
    challenge = other->challenge;
  };
  ~PassingCard() override = default;
  bool canUse(Character *obj, Robot *robot) override;
  void use(Character *obj, Robot *robot) override;
  // addition
  ItemType getType() const override;
  string str() const override;
  RobotType getRobotType() const;
};

class BaseBag {
  friend class TestStudyInPink;

 protected:
  // addition
  class Node {
   public:
    BaseItem *item;
    Node *next;
   public:
    Node(BaseItem *item) {
      this->item = item;
      this->next = nullptr;
    }
  };

 protected:
  Character *obj;
  // addition
  int size;
  int capacity;
  Node *head;
 public:
  virtual bool insert(BaseItem *item);
  virtual BaseItem *get();
  virtual BaseItem *get(ItemType itemType);
  virtual string str() const;

  // addition
  BaseBag(int capacity);
  virtual ~BaseBag() {
    //destructor xóa các Node (Lưu ý phải xóa cả item_type trong Node đó)
    while (size > 0) {
      Node *temp = head;
      head = this->head->next;
      if (temp->item)
        delete temp->item;
      delete temp;
      size--;
    }
  };
  bool isFull() const;
  int havePassingCard;
  int haveExcemptionCard;
  Robot *robot_check;
  virtual bool tradingConditionCheck() { return false; };
  void setRobotCheck(Robot *robot);
  void resetRobotCheck() { robot_check = nullptr; }
  bool swapWithHead(Node *node);
};

// addition
class SherlockBag : public BaseBag {
  friend class TestStudyInPink;

 private:
  Sherlock *sherlock;
 public:
  SherlockBag(Sherlock *character);
  bool tradingConditionCheck() override {
    if (havePassingCard) return true;
    else return false;
  }
  ~SherlockBag() override {};
};

// addition
class WatsonBag : public BaseBag {
  friend class TestStudyInPink;

 private:
  Watson *watson;
 public:
  WatsonBag(Watson *character);
  bool tradingConditionCheck() override {
    if (havePassingCard) return true;
    else return false;
  }
  ~WatsonBag() override {};
};

class StudyPinkProgram {
  friend class TestStudyInPink;

 private:
  // Sample attributes
  Configuration *config;
  Sherlock *sherlock;
  Watson *watson;
  Criminal *criminal;
  Map *map;
  ArrayMovingObject *arr_mv_objs;
  // addition
  bool stopChecker;
  string outputFile;
 public:
  StudyPinkProgram(const string &config_file_path);
  ~StudyPinkProgram();
  bool isStop() const;
  void printMap(ofstream &OUTPUT) const;
  void printResult() const {
    if (sherlock->getCurrentPosition().isEqual(criminal->getCurrentPosition())) {
      cout << "Sherlock caught the criminal" << endl;
    }
    else if (watson->getCurrentPosition().isEqual(criminal->getCurrentPosition())) {
      cout << "Watson caught the criminal" << endl;
    }
    else {
      cout << "The criminal escaped" << endl;
    }
  }

  void printStep(int si) const {
    cout << "Step: " << setw(4) << setfill('0') << si
         << "--"
         << sherlock->str() << "--|--" << watson->str() << "--|--" << criminal->str() << endl;
  }
  void run(bool verbose);
  // addition
  void run(bool verbose, ofstream &OUTPUT);
  void printInfo(int si, int i, ofstream &OUTPUT) {
    OUTPUT << endl
           << "*************AFTER MOVE*************" << endl;
    OUTPUT
        << "ROUND : " << si << " - TURN : " << i << endl;
    stringstream ss(arr_mv_objs->str());
    string lineArr = "";
    getline(ss, lineArr, 'C');
    OUTPUT << lineArr << "]" << endl;
    getline(ss, lineArr, ']');
    OUTPUT << "\tC" << lineArr << "]" << endl;
    while (getline(ss, lineArr, ']')) {
      if (lineArr.length() > 0)
        OUTPUT << "\t" << lineArr.substr(1) << "]" << endl;
    }
    OUTPUT << "Sherlock HP_" << sherlock->getHP() << " EXP_" << sherlock->getEXP() << endl
           << "Watson HP_" << watson->getHP() << " EXP_" << watson->getEXP() << endl
           << "SherlockBag : " << sherlock->getBag()->str() << endl
           << "WatsonBag : " << watson->getBag()->str() << endl;
  }
};


////////////////////////////////////////////////
/// END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* _H_STUDY_IN_PINK_2_H_ */

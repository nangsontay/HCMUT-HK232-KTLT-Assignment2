#include "study_in_pink2.h"

////////////////////////////////////////////////////////////////////////
/// STUDENT'S ANSWER BEGINS HERE
/// Complete the following functions
/// DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////
// Chỉnh lại di chuyển của RobotC (gợi ý: thực hiện hàm getPrevPosition cho Criminal)
// Mô tả về các meet thay đổi (đã được confirm 90%)
// File study_in_pink2.h những phần trước "addition" là gốc của đề (không thay đổi)
// Chỉnh tên thuộc tính hp và exp của Sherlock và Watson
// Position có nạp chồng 2 hàm isEqual
// isStop kiểm tra vị trí Sherlock, Watson với Criminal và hp của Sherlock, Watson
// Hàm run chú ý chỉnh từ hàm run() gốc (vị trí gọi printResult và printStep)
// NOTE:
// chú ý các phần addition nên sửa đổi để tránh đạo code
// nộp Bkel cần xóa đổi lại 2 hàm printResult và printStep gốc, xóa thuộc tính outputFile


/*
 * CLASS: Sherlock kế thừa class Character
 */
const Position Position::npos = Position(-1, -1);

Sherlock::Sherlock(int index, const string &moving_rule, const Position &init_pos, Map *map, int init_hp, int init_exp)
    : Character(index, init_pos, map, "Sherlock") {
  hp = init_hp;
  exp = init_exp;
  this->moving_rule = moving_rule;
  index_moving_rule = 0; //First start of rule
  bag = new SherlockBag(this);
}
Position Sherlock::getNextPosition() {
  if (exp <= 0) return Position::npos;
  int i = pos.getRow(), j = pos.getCol();
  Position next_pos = Position::npos;
  switch (moving_rule[index_moving_rule]) {
    case 'U':
      if (map->isValid(Position(i - 1, j), this)) next_pos = Position(i - 1, j);
      break;
    case 'R':
      if (map->isValid(Position(i, j + 1), this)) next_pos = Position(i, j + 1);
      break;
    case 'D':
      if (map->isValid(Position(i + 1, j), this)) next_pos = Position(i + 1, j);
      break;
    case 'L':
      if (map->isValid(Position(i, j - 1), this)) next_pos = Position(i, j - 1);
      break;
  }
  if (index_moving_rule == moving_rule.length() - 1) index_moving_rule = 0;
  else ++index_moving_rule;
  return next_pos;
}

/*
 * CLASS: Watson kế thừa class Character
 */

Watson::Watson(int index, const string &moving_rule, const Position &init_pos, Map *map, int init_hp, int init_exp)
    : Character(index, init_pos, map, "Watson") {
  hp = init_hp;
  exp = init_exp;
  this->moving_rule = moving_rule;
  index_moving_rule = 0; //First start of rule
  bag = new WatsonBag(this);
}
void Character::move() {
  Position temp = getNextPosition();
  if (!temp.isEqual(Position::npos)) pos = temp;
}

Position Watson::getNextPosition() {
  if (exp <= 0) return Position::npos;
  int i = pos.getRow(), j = pos.getCol();
  Position next_pos = Position::npos;
  switch (moving_rule[index_moving_rule]) {
    case 'U':
      if (map->isValid(Position(i - 1, j), this)) next_pos = Position(i - 1, j);
      break;
    case 'R':
      if (map->isValid(Position(i, j + 1), this)) next_pos = Position(i, j + 1);
      break;
    case 'D':
      if (map->isValid(Position(i + 1, j), this)) next_pos = Position(i + 1, j);
      break;
    case 'L':
      if (map->isValid(Position(i, j - 1), this)) next_pos = Position(i, j - 1);
      break;
  }
  if (index_moving_rule == moving_rule.length() - 1) index_moving_rule = 0;
  else ++index_moving_rule;
  return next_pos;
}
/*
 * CLASS: Map
 */
Map::Map(int num_rows, int num_cols, int num_walls, Position *array_walls, int num_fake_walls,
         Position *array_fake_walls) {
  this->num_rows = num_rows;
  this->num_cols = num_cols;
  //Initialize map as a 2D array of Path
  map = new MapElement **[num_rows];
  for (int i = 0; i < num_rows; i++) {
    map[i] = new MapElement *[num_cols];
    for (int j = 0; j < num_cols; j++) {
      map[i][j] = new Path();
    }
  }
  //Set FakeWall
  for (int i = 0; i < num_fake_walls; ++i) {
    int r = array_fake_walls[i].getRow(), c = array_fake_walls[i].getCol();
    if (r < 0 || r >= num_rows || c < 0 || c >= num_cols) continue;
    delete map[r][c];
    map[r][c] = new FakeWall((r * 257 + c * 139 + 89) % 900 + 1);
  }
  //Set Wall
  for (int i = 0; i < num_walls; ++i) {
    int r = array_walls[i].getRow(), c = array_walls[i].getCol();
    if (r < 0 || r >= num_rows || c < 0 || c >= num_cols) continue;
    delete map[r][c];
    map[r][c] = new Wall();
  }
}
Map::~Map() {
  for (int i = 0; i < num_rows; ++i) {
    for (int j = 0; j < num_cols; ++j) {
      delete map[i][j];
    }
    delete[] map[i];
  }
  delete[] map;
}

bool Map::isValid(const Position &pos, MovingObject *mv_obj) const {
  int i = pos.getRow(), j = pos.getCol(), exp = 0;
  if (i < 0 || i >= num_rows || j < 0 || j >= num_cols) return false; //Ngoài phạm vi map hay không?
  MovingObjectType object = mv_obj->getObjectType();
  if (object > 3 || object < 0) return false; //Kiểm tra object có hợp lệ hay không?
  if (map[i][j]->getType() == WALL) return false; //Kiểm tra có phải là tường hay không?
  if (object == WATSON) exp = (dynamic_cast<Watson *>(mv_obj)->getEXP());
  if (map[i][j]->getType() == FAKE_WALL) {
    switch (object) {
      case WATSON:
        if (exp <= (dynamic_cast<FakeWall *>(map[i][j])->getReqExp())) return false;
      default:
        return true;
    }
  }
  return true;
}
/*
 * CLASS: Criminal kế thừa class Character
 */

Criminal::Criminal(int index, const Position &init_pos, Map *map, Sherlock *sherlock, Watson *watson)
    : Character(index, init_pos, map, "Criminal") {
  count = 0;
  this->sherlock = sherlock;
  this->watson = watson;
  prev_pos = Position::npos;
}

Position Criminal::getNextPosition() {
  Position nextPos[4], temp;
  int countPos = -1;
  for (int i = 0; i < 4; ++i) {
    switch (i) {
      case 0:
        temp = Position(pos.getRow() - 1, pos.getCol());
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 1:
        temp = Position(pos.getRow(), pos.getCol() - 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 2:
        temp = Position(pos.getRow() + 1, pos.getCol());
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 3:
        temp = Position(pos.getRow(), pos.getCol() + 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
    }

  }
  prev_pos = pos;
  if (countPos == -1) return Position::npos;
  if (countPos == 0) return nextPos[0];
  else {
    int maxDistance = 0;
    for (int i = 0; i <= countPos; ++i) {
      int distance = calculateDistance(nextPos[i], watson->getCurrentPosition()) +
          calculateDistance(nextPos[i], sherlock->getCurrentPosition());
      if (distance > maxDistance) {
        maxDistance = distance;
        temp = nextPos[i];
      }
    }
  }
  return temp;
}

//bool Criminal::isCreatedRobotNext() const {
//  return count % 3 == 0;
//}

/*
 * CLASS: Robot kế thừa class MovingObject
 */

Robot::Robot(int index, const Position &pos, Map *map, Criminal *criminal, const string &name)
    : MovingObject(index, pos, map, name), criminal(criminal) //! khác
{
  //tính toán loại item
  int p = reduceNum(pos.getRow() * pos.getCol());
  switch (p) {
    case 0:
    case 1: {
      item = new MagicBook();
      break;
    }
    case 2:
    case 3: {
      item = new EnergyDrink();
      break;
    }
    case 4:
    case 5: {
      item = new FirstAid();
      break;
    }
    case 6:
    case 7: {
      item = new ExcemptionCard();
      break;
    }
    case 8:
    case 9: {
      item = new PassingCard(pos.getRow(), pos.getCol());
      break;
    }
  }
}

Robot *Robot::create(int index, Map *map, Criminal *criminal, Sherlock *sherlock, Watson *watson) {
  // trả về đối tượng class kế thừa từ Robot phù hợp
  if (criminal->getCount() == 2) return new RobotC(index, criminal->getCurrentPosition(), map, criminal);
  int distanceToWatson = calculateDistance(criminal->getCurrentPosition(), watson->getCurrentPosition());
  int distanceToSherlock = calculateDistance(criminal->getCurrentPosition(), sherlock->getCurrentPosition());
  if (distanceToWatson < distanceToSherlock) {
    return new RobotW(index, criminal->getCurrentPosition(), map, criminal, watson);
  }
  else if (distanceToWatson > distanceToSherlock) {
    return new RobotS(index, criminal->getCurrentPosition(), map, criminal, sherlock);
  }
  else return new RobotSW(index, criminal->getCurrentPosition(), map, criminal, sherlock, watson);
}
/*
 *CLASS: RobotC kế thừa class Robot
 */
RobotC::RobotC(int index, const Position &init_pos, Map *map, Criminal *criminal)
    : Robot(index, init_pos, map, criminal, "RobotC") {
  robot_type = C;
}

Position RobotC::getNextPosition() {
  return criminal->getPrevPosition();
}

/*
 *CLASS: RobotW kế thừa class Robot
 */

RobotW::RobotW(int index, const Position &init_pos, Map *map, Criminal *criminal, Watson *watson)
    : Robot(index, init_pos, map, criminal, "RobotW") {
  this->watson = watson;
  robot_type = W;
}

Position RobotW::getNextPosition() {
  Position nextPos[4], temp;
  int countPos = -1;
  for (int i = 0; i < 4; ++i) {
    switch (i) {
      case 0:
        temp = Position(pos.getRow() - 1, pos.getCol());
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 1:
        temp = Position(pos.getRow(), pos.getCol() + 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 2:
        temp = Position(pos.getRow() + 1, pos.getCol());
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 3:
        temp = Position(pos.getRow(), pos.getCol() - 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
    }
  }
  if (countPos == -1) return Position::npos;
  if (countPos == 0) return nextPos[0];
  else {
    int minDistance = 32768;
    for (int i = 0; i <= countPos; ++i) {
      int distance = calculateDistance(nextPos[i], watson->getCurrentPosition());
      if (distance < minDistance) {
        minDistance = distance;
        temp = nextPos[i];
      }
    }
  }
  return temp;
}
Robot::~Robot() {
  delete item;
}
int RobotW::getDistance() const {
  return calculateDistance(pos, watson->getCurrentPosition());
}

/*
 *CLASS: RobotS kế thừa class Robot
 */
RobotS::RobotS(int index, const Position &init_pos, Map *map, Criminal *criminal,
               Sherlock *sherlock)
    : Robot(index, init_pos, map, criminal, "RobotS") {
  this->sherlock = sherlock;
  robot_type = S;
}

Position RobotS::getNextPosition() {
  Position nextPos[4], temp;
  int countPos = -1;
  for (int i = 0; i < 4; ++i) {
    switch (i) {
      case 0:
        temp = Position(pos.getRow() - 1, pos.getCol());
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 1:
        temp = Position(pos.getRow(), pos.getCol() + 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 2:
        temp = Position(pos.getRow() + 1, pos.getCol());
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 3:
        temp = Position(pos.getRow(), pos.getCol() - 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
    }
  }
  if (countPos == -1) return Position::npos;
  if (countPos == 0) return nextPos[0];
  else {
    int minDistance = 32768;
    for (int i = 0; i <= countPos; ++i) {
      int distance = calculateDistance(nextPos[i], sherlock->getCurrentPosition());
      if (distance < minDistance) {
        minDistance = distance;
        temp = nextPos[i];
      }
    }
  }
  return temp;
}

int RobotS::getDistance() const {
  return calculateDistance(pos, sherlock->getCurrentPosition());
}

/*
 *CLASS: RobotSW kế thừa class Robot
 */

RobotSW::RobotSW(int index, const Position &init_pos, Map *map, Criminal *criminal,
                 Sherlock *sherlock, Watson *watson)
    : Robot(index, init_pos, map, criminal, "RobotSW") {
  this->sherlock = sherlock;
  this->watson = watson;
  robot_type = SW;
}

// implement các phương thức getNextPosition, move, str, getType, getDistance
Position RobotSW::getNextPosition() {
  Position nextPos[8], temp;
  int countPos = -1;
  for (int i = 0; i < 8; ++i) {
    switch (i) {
      case 0:
        temp = Position(pos.getRow() - 2, pos.getCol());
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 1:
        temp = Position(pos.getRow() - 1, pos.getCol() + 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 2:
        temp = Position(pos.getRow(), pos.getCol() + 2);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 3:
        temp = Position(pos.getRow() + 1, pos.getCol() + 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 4:
        temp = Position(pos.getRow() + 2, pos.getCol());
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 5:
        temp = Position(pos.getRow() + 1, pos.getCol() - 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 6:
        temp = Position(pos.getRow(), pos.getCol() - 2);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
      case 7:
        temp = Position(pos.getRow() - 1, pos.getCol() - 1);
        if (map->isValid(temp, this)) {
          nextPos[countPos + 1] = temp;
          ++countPos;
        }
        break;
    }
  }
  if (countPos == -1) return Position::npos;
  if (countPos == 0) return nextPos[0];
  else {
    int minDistance = 32768;
    for (int i = 0; i <= countPos; ++i) {
      int distance = calculateDistance(nextPos[i], watson->getCurrentPosition()) +
          calculateDistance(nextPos[i], sherlock->getCurrentPosition());
      if (distance < minDistance) {
        minDistance = distance;
        temp = nextPos[i];
      }
    }
  }
  return temp;
}

int RobotSW::getDistance() const {
  //get tổng khoảng cách đến Sherlock và Watson
  return calculateDistance(pos, sherlock->getCurrentPosition()) +
      calculateDistance(pos, watson->getCurrentPosition());
}

/*
 *CLASS: ArrayMovingObject
 */

ArrayMovingObject::ArrayMovingObject(int capacity) {
  // constructor
  this->capacity = capacity;
  count = 0;
  arr_mv_objs = new MovingObject *[capacity];
  for (int i = 0; i < capacity; ++i) {
    arr_mv_objs[i] = nullptr;
  }
}

ArrayMovingObject::~ArrayMovingObject() {
  // destructor
  if (count < 3) {
    delete[] arr_mv_objs;
    return;
  }
  for (int i = 3; i < capacity; ++i) {
    if (arr_mv_objs[i] != nullptr) delete arr_mv_objs[i];
  }
  delete[] arr_mv_objs;
}

bool ArrayMovingObject::isFull() const {
  // kiểm tra số lượng đối tượng đã đầy hay chưa
  return count == capacity;
}

bool ArrayMovingObject::add(MovingObject *mv_obj) {
  //thêm đối tượng mới vào cuối mảng đối tượng
  if (isFull()) return false;
  arr_mv_objs[count] = mv_obj;
  std::cout << arr_mv_objs[count]->str();
  ++count;
  return true;
}

MovingObject *ArrayMovingObject::get(int index) const {
  // trả về đối tượng có index tương ứng
  if (index < 0 || index >= count) return nullptr;
  else return arr_mv_objs[index];
}

int ArrayMovingObject::size() const {
  // trả về số lượng đối tượng trong mảng
  return count;
}

string ArrayMovingObject::str() const {
  // trả về chuỗi biểu diễn mảng
  string result = "ArrayMovingObject[count=" + to_string(count) + ";capacity=" + to_string(capacity);
  if (count == 0) return result + "]";
  else result += ";";
  for (int i = 0; i < count - 1; ++i) {
    if (arr_mv_objs[i] != nullptr)
      result += arr_mv_objs[i]->str() + ";";
  }
  result += arr_mv_objs[count - 1]->str() + "]";
  return result;
}

/*
 *CLASS: Configuration
 */
//Redefine getPos as getPosition for Position object


Configuration::Configuration(const string &filepath) {
  // constructor
  ifstream inputFile(filepath);
  string input;
  if (!inputFile.is_open()) {
    cout << "File not found" << endl;
    return;
  }
  //Allocate arr_walls
  while (getline(inputFile, input)) {
    int eq = input.find("=");
    string key = getSubString(input, 0, eq - 1);
    if (key == "MAP_NUM_ROWS") {
      map_num_rows = getintValue(input, eq + 1);
    }
    else if (key == "MAP_NUM_COLS") {
      map_num_cols = getintValue(input, eq + 1);
    }
    else if (key == "MAX_NUM_MOVING_OBJECTS") {
      max_num_moving_objects = getintValue(input, eq + 1);
    }
    else if (key == "ARRAY_WALLS") {
      int start = input.find("[") + 1;
      int end = input.find("]") - 1;
      string tmpstr = getSubString(input, start, end);
      if (tmpstr.length() == 0) {
        num_walls = 0;
        continue;
      }
      num_walls = countPosition(tmpstr);
      initArray(arr_walls, num_walls);
      extractArray(arr_walls, tmpstr, num_walls);
    }
    else if (key == "ARRAY_FAKE_WALLS") {
      int start = input.find("[") + 1;
      int end = input.find("]") - 1;
      string tmpstr = getSubString(input, start, end);
      if (tmpstr.length() == 0) {
        num_fake_walls = 0;
        continue;
      }
      num_fake_walls = countPosition(tmpstr);
      initArray(arr_fake_walls, num_fake_walls);
      extractArray(arr_fake_walls, tmpstr, num_fake_walls);

    }
    else if (key == "SHERLOCK_MOVING_RULE") {
      sherlock_moving_rule = getSubString(input, eq + 1, input.length());
      size_t pos;
      while ((pos = sherlock_moving_rule.find('\r')) != std::string::npos) {
        sherlock_moving_rule.erase(pos, 1);
      }
    }
    else if (key == "SHERLOCK_INIT_POS") {
      sherlock_init_pos = Position(getSubString(input, eq + 1, input.length()));
    }
    else if (key == "SHERLOCK_INIT_HP") {
      sherlock_init_hp = getintValue(input, eq + 1);
    }
    else if (key == "SHERLOCK_INIT_EXP") {
      sherlock_init_exp = getintValue(input, eq + 1);
    }
    else if (key == "WATSON_MOVING_RULE") {
      watson_moving_rule = getSubString(input, eq + 1, input.length());
      size_t pos;
      while ((pos = watson_moving_rule.find('\r')) != std::string::npos) {
        watson_moving_rule.erase(pos, 1);
      }
    }
    else if (key == "WATSON_INIT_POS") {
      watson_init_pos = Position(getSubString(input, eq + 1, input.length()));
    }
    else if (key == "WATSON_INIT_HP") {
      watson_init_hp = getintValue(input, eq + 1);
    }
    else if (key == "WATSON_INIT_EXP") {
      watson_init_exp = getintValue(input, eq + 1);
    }
    else if (key == "CRIMINAL_INIT_POS") {
      criminal_init_pos = Position(getSubString(input, eq + 1, input.length()));
    }
    else if (key == "NUM_STEPS") {
      num_steps = getintValue(input, eq + 1);
    }
  }
  inputFile.close();
}

Configuration::~Configuration() {
  if (num_walls) delete[] arr_walls;
  if (num_fake_walls) delete[] arr_fake_walls;
}

string Configuration::str() const {
  string arraywall = "[";
  if (num_walls) {
    for (int i = 0; i < num_walls - 1; i++) {
      arraywall += arr_walls[i].str() + ";";
    }
    arraywall += arr_walls[num_walls - 1].str() + "]";
  }
  else arraywall = "[]";
  string arrayfakewall = "[";
  if (num_fake_walls) {
    for (int i = 0; i < num_fake_walls - 1; i++) {
      arrayfakewall += arr_fake_walls[i].str() + ";";
    }
    arrayfakewall += arr_fake_walls[num_fake_walls - 1].str() + "]";
  }
  else arrayfakewall = "[]";
  string result = "Configuration[\nMAP_NUM_ROWS=" + to_string(map_num_rows) + "\nMAP_NUM_COLS=" +
      to_string(map_num_cols) + "\nMAX_NUM_MOVING_OBJECTS=" + to_string(max_num_moving_objects) +
      "\nNUM_WALLS=" + to_string(num_walls) + "\nARRAY_WALLS=" + arraywall + "\nNUM_FAKE_WALLS=" +
      to_string(num_fake_walls) +
      "\nARRAY_FAKE_WALLS=" + arrayfakewall + "\nSHERLOCK_MOVING_RULE=" + sherlock_moving_rule +
      "\nSHERLOCK_INIT_POS=" + sherlock_init_pos.str() +
      "\nSHERLOCK_INIT_HP=" + to_string(sherlock_init_hp) + "\nSHERLOCK_INIT_EXP=" +
      to_string(sherlock_init_exp) + "\nWATSON_MOVING_RULE=" + watson_moving_rule + "\nWATSON_INIT_POS=" +
      watson_init_pos.str() + "\nWATSON_INIT_HP=" + to_string(watson_init_hp) + "\nWATSON_INIT_EXP=" +
      to_string(watson_init_exp) + "\nCRIMINAL_INIT_POS=" + criminal_init_pos.str() + "\nNUM_STEPS=" +
      to_string(num_steps) + "\n]";
  return result;
}
// *CLASS: MagicBook
ItemType MagicBook::getType() const {
  return ItemType::MAGIC_BOOK;
}

string MagicBook::str() const {
  //trả về chuỗi biểu diễn (1 dòng)
  return "MagicBook";
}

bool MagicBook::canUse(Character *obj, Robot *robot) {
  //Sau khi đấm Robot, exp
  if (((obj)->getEXP()) <= 350 && robot == nullptr && obj->getObjectType() < CRIMINAL
      && obj->getObjectType() >= SHERLOCK)
    return true;
  else return false;
}

void MagicBook::use(Character *obj, Robot *robot) {
  //Increase exp by 25%
  //cout << "Use magicbook. EXP before use:" << obj->getEXP() << endl;
  int exp = obj->getEXP();
  exp += ceil((double) exp * 0.25);
  obj->setEXP(exp);
  //cout << "EXP after use:" << obj->getEXP() << endl;

}

// *CLASS: EnergyDrink
ItemType EnergyDrink::getType() const {
  return ItemType::ENERGY_DRINK;
}

string EnergyDrink::str() const {
  return "EnergyDrink";
}

bool EnergyDrink::canUse(Character *obj, Robot *robot) {
  // *Sau khi đấm Robot, hp
  int hp = obj->getHP();
  if (hp <= 100 && robot == nullptr && obj->getObjectType() < CRIMINAL && obj->getObjectType() >= SHERLOCK)
    return true;
  return false;
}

void EnergyDrink::use(Character *obj, Robot *robot) {
  int hp = obj->getHP();
  hp += ceil((double) hp * 0.2);
  obj->setHP(hp);

}

// *CLASS: FirstAid
ItemType FirstAid::getType() const {
  return ItemType::FIRST_AID;

}

string FirstAid::str() const {
  // trả về chuỗi biểu diễn (1 dòng)
  return "FirstAid";
}

bool FirstAid::canUse(Character *obj, Robot *robot) {
  // điều kiện sử dụng
  // *Sau khi đấm Robot, exp || hp
  int objhp = obj->getHP();
  int objexp = obj->getEXP();
  //cout << (objhp) << " " << objexp << endl;
  //if (robot != nullptr) cout << "Error robot lỏ\n";
  if ((((obj->getEXP()) <= 350) || ((obj->getHP()) <= 100)) && robot == nullptr && obj->getObjectType() < CRIMINAL
      && obj->getObjectType() >= SHERLOCK) {
    //cout << "can use first aid\n";
    return true;
  }
  return false;
}

void FirstAid::use(Character *obj, Robot *robot) {
  int hp = obj->getHP();
  hp += ceil((double) hp * 0.5);
  obj->setHP(hp);

}

// *CLASS: ExcemptionCard
ItemType ExcemptionCard::getType() const {
  return ItemType::EXCEMPTION_CARD;
}

string ExcemptionCard::str() const {
  // trả về chuỗi biểu diễn (1 dòng)
  return "ExcemptionCard";
}

bool ExcemptionCard::canUse(Character *obj, Robot *robot) {
  // điều kiện sử dụng
  // *Trước khi đấm Robot, Sherlock, hp lẻ
//  if (obj->getObjectType() != SHERLOCK) {
//    cout << "NOT SHERLOCK USE\n";
//    return false;
//  }
  int hp = obj->getHP();
  if ((hp % 2 != 0) && (robot != nullptr) && (obj->getObjectType() == SHERLOCK)) {
    //cout << "ExCard can use\n";
    return true;
  }
  else return false;
}

void ExcemptionCard::use(Character *obj, Robot *robot) {
  //sinh viên hiện thực theo tư duy code của mình (hàm có thể rỗng)
  if (obj->getObjectType() == SHERLOCK) obj->usedCard = true;

}
// *CLASS: PassingCard
PassingCard::PassingCard(int i, int j) {
  // constructor gán giá trị cho thuộc tính challenge (i,j là tọa độ)
  int t = (i * 11 + j) % 4;
  switch (t) {
    case 0:
      challenge = "RobotS";
      break;
    case 1:
      challenge = "RobotC";
      break;
    case 2:
      challenge = "RobotSW";
      break;
    case 3:
      challenge = "all";
      break;
  }
}

ItemType PassingCard::getType() const {
  // get (1 dòng)
  return ItemType::PASSING_CARD;
}

string PassingCard::str() const {
  // trả về chuỗi biểu diễn (1 dòng)
  return "PassingCard";
}

bool PassingCard::canUse(Character *obj, Robot *robot) {
  // điều kiện sử dụng
  // *Trước khi đấm Robot, Watson, hp chẵn

  if ((((obj->getHP()) % 2) == 0) && robot != nullptr && obj->getObjectType() == WATSON)
    return true;
  return false;
}
RobotType PassingCard::getRobotType() const {
  if (challenge == "RobotS") return S;
  if (challenge == "RobotC") return C;
  if (challenge == "RobotSW") return SW;
  return ALL;
}
void PassingCard::use(Character *obj, Robot *robot) {
  //tương tự ExcemptionCard khi thuộc tính challenge thích hợp, ngược lại sẽ trừ exp
  if ((this->getRobotType() != robot->getType()) && this->getRobotType() != ALL) {
    int exp = obj->getEXP();
    exp -= 50;
    obj->setEXP(exp);
  }
  obj->usedCard = true;

}
// *CLASS: BaseBag
BaseBag::BaseBag(int capacity) {
  //constructor gán giá trị cho CÁC THUỘC TÍNH
  this->capacity = capacity;
  this->size = 0;
  this->head = nullptr;
  havePassingCard = 0;
  haveExcemptionCard = 0;
  // // resetRobotCheck();
}

//void BaseBag::setRobotCheck(Robot *robot) {
//  robot_check = robot;
//}

bool BaseBag::insert(BaseItem *item) {
  // thêm Node chứa item_type vào đầu Linked List
  if (isFull()) return false;
  if (!item) return false;
  if (head == nullptr) {
    head = new Node(item);
    size++;
    if (item->getType() == ItemType::PASSING_CARD) ++havePassingCard;
    if (item->getType() == ItemType::EXCEMPTION_CARD) ++haveExcemptionCard;
    //cout << "So exCard: " << haveExcemptionCard << endl;
    return true;
  }
  Node *nextHead = head;
  head = new Node(item);
  head->next = nextHead;
  size++;
  if (item->getType() == ItemType::PASSING_CARD) ++havePassingCard;
  if (item->getType() == ItemType::EXCEMPTION_CARD) ++haveExcemptionCard;
  //cout << "Inserted " << head->item->str() << endl;
  //cout << "So exCard: " << haveExcemptionCard << endl;
  return true;
}

BaseItem *BaseBag::get(ItemType itemType) {
  // Tìm và trả về item_type tương ứng với itemType
  Node *node = head;
  while (node != nullptr) {
    if (node->item->getType() == itemType) {
      if (swapWithHead(node)) {
        BaseItem *item = head->item;
        head = head->next;
        --size;
        if (itemType == ItemType::PASSING_CARD) --havePassingCard;
        if (itemType == ItemType::EXCEMPTION_CARD) --haveExcemptionCard;
        // resetRobotCheck();
        return item;
      }
      else return nullptr;
    }
    node = node->next;
  }
  return nullptr;
}

string BaseBag::str() const {
  // *"Bag[count=<thuộc tính size>;<danh sách tên các item_type cách nhau bởi dấu ,>]"
  string itemList;
  Node *checkPrint = head;
  for (int i = 1; i <= size; i++) {
    itemList += checkPrint->item->str();
    if (i < size) {
      itemList += ",";
      checkPrint = checkPrint->next;
    }
  }
  return "Bag[count=" + to_string(size) + ";" + itemList + "]";
}

// *CLASS: SherlockBag
SherlockBag::SherlockBag(Sherlock *character)
    : BaseBag(13) {
  this->sherlock = character;
  this->obj = sherlock;
}

BaseItem *BaseBag::get() {
  // tìm và trả về item_type SHERLOCK CÓ THỂ SỬ DỤNG gấn đầu túi nhất, đảo lên đầu và xóa khỏi Linked List (cập nhật head)
  BaseItem *item = nullptr;
  Node *node = head;
  while (node != nullptr) {
    if (node->item->canUse(obj, nullptr)) {
      if (swapWithHead(node)) {
        item = head->item;
        head = head->next;
        --size;
        return item;
      }
      else return nullptr;
    }
    node = node->next;
  }
  return nullptr;
}

// *CLASS: WatsonBag
WatsonBag::WatsonBag(Watson *character)
    : BaseBag(15) {
  this->watson = character;
  this->obj = watson;
}
//Extra function
bool BaseBag::isFull() const {
  return size == capacity;
}

bool BaseBag::swapWithHead(BaseBag::Node *node) {
  Node *prevNode = head;
  if (node == head) return true;
  while (prevNode->next != node) {
    if (prevNode->next == nullptr) return false;
    else {
      prevNode = prevNode->next;
    }
  }
  BaseItem *temp = node->item;
  node->item = head->item;
  head->item = temp;
  return true;
}

// *------------------------------------------------------------------

//Start the new code part
StudyPinkProgram::StudyPinkProgram(const string &config_file_path) {
  config = new Configuration(config_file_path);
  map = new Map(config->map_num_rows,
                config->map_num_cols,
                config->num_walls,
                config->arr_walls,
                config->num_fake_walls,
                config->arr_fake_walls);
  arr_mv_objs = new ArrayMovingObject(config->max_num_moving_objects);
  sherlock = new Sherlock(1,
                          config->sherlock_moving_rule,
                          config->sherlock_init_pos,
                          map,
                          config->sherlock_init_hp,
                          config->sherlock_init_exp);
  watson = new Watson(2,
                      config->watson_moving_rule,
                      config->watson_init_pos,
                      map,
                      config->watson_init_hp,
                      config->watson_init_exp);
  criminal = new Criminal(0, config->criminal_init_pos, map, sherlock, watson);
  arr_mv_objs->add(criminal);
  arr_mv_objs->add(sherlock);
  arr_mv_objs->add(watson);
}
StudyPinkProgram::~StudyPinkProgram() {
  delete map;
  delete config;
  delete arr_mv_objs;
  delete criminal;
  delete sherlock;
  delete watson;
}

bool StudyPinkProgram::isStop() const {
  if (stopChecker || ((sherlock->getHP()) == 1) || (watson->getHP()) == 1) {
    return true;
  }
  return false;
}

void StudyPinkProgram::run(bool verbose) {
  for (int istep = 0; istep < config->num_steps; ++istep) {
    for (int i = 0; i < arr_mv_objs->size(); ++i) {
      MovingObject *robot = nullptr;
      robot = Robot::create(arr_mv_objs->size(), map, criminal, sherlock, watson);
      arr_mv_objs->get(i)->move();
      stopChecker = arr_mv_objs->checkMeet(i);
      if (isStop()) {
        return;
      }
      if (criminal->getCount() % 3 == 0 && criminal->getCount() > 0) {
        arr_mv_objs->add(robot);
      }
      else delete robot;
      if (verbose) {
        printStep(istep);
      }
    }
  }
}
// *------------------------------------------------------------------
// *
// *------------------------------------------------------------------
// !-----------------------------------
// ! Lưu ý về việc xét thông số khi tăng giảm
// ! Các thay đổi thông số là dựa trên thông số hiện tại
// ! Các thông số không phải số nguyên THỰC HIỆN LÀM TRÒN LÊN -> NHÂN VẬT CHỈ HI SINH KHI INIT hp = 0
// !-----------------------------------
// *CLASS: ArrayMovingObject
bool ArrayMovingObject::fightRobot(Character *character, Robot *robot) {
  //Xử lý khi nhân vật gặp Robot
  //Trả về true nếu nhân vật chiến thắng, ngược lại trả về false
  bool result = false;
  if (character->getObjectType() == SHERLOCK && robot->getType() == C)
    result = character->meet(dynamic_cast<RobotC *>(robot));
  else
    switch (robot->getType()) {
      case C:
        character->meet(dynamic_cast<RobotC *>(robot));
        break;
      case S:
        character->meet(dynamic_cast<RobotS *>(robot));
        break;
      case W:
        character->meet(dynamic_cast<RobotW *>(robot));
        break;
      case SW:
        character->meet(dynamic_cast<RobotSW *>(robot));
        break;

    }
  return result;
}
bool ArrayMovingObject::handleCheckMeet(Sherlock *sherlock, int index, int *meeting, int countMeet) {
  bool result = 0;
  for (int i = 0; i < countMeet; ++i) {
    if (arr_mv_objs[meeting[i]]->getCurrentPosition().isEqual(sherlock->getCurrentPosition())) {
      switch (arr_mv_objs[meeting[i]]->getObjectType()) {
        case ROBOT: {
          Robot *robot = dynamic_cast<Robot *>(arr_mv_objs[meeting[i]]);
          result = fightRobot(sherlock, robot);
          break;
        }
        case WATSON: {
          Watson *watson = dynamic_cast<Watson *>(arr_mv_objs[meeting[i]]);
          sherlock->meet(watson);
          break;
        }
        case CRIMINAL: {
          result = true;
        }
      }
    }
    if (result) return true;
  }
  return false;
}
bool ArrayMovingObject::handleCheckMeet(Watson *watson, int index, int *meeting, int countMeet) {
  bool result = 0;
  for (int i = 0; i < countMeet; ++i) {
    if (arr_mv_objs[meeting[i]]->getCurrentPosition().isEqual(watson->getCurrentPosition())) {
      switch (arr_mv_objs[meeting[i]]->getObjectType()) {
        case ROBOT: {
          Robot *robot = dynamic_cast<Robot *>(arr_mv_objs[meeting[i]]);
          fightRobot(watson, robot);
          break;
        }
        case SHERLOCK: {
          Sherlock *sherlock = dynamic_cast<Sherlock *>(arr_mv_objs[meeting[i]]);
          watson->meet(sherlock);
          break;
        }
        case CRIMINAL: {
          result = true;
        }
      }
    }
    if (result) return true;
  }
  return false;
}
bool ArrayMovingObject::handleCheckMeet(Criminal *criminal, int index, int *meeting, int countMeet) {
  bool result = false;
  for (int i = 0; i < countMeet; ++i) {
    if (arr_mv_objs[meeting[i]]->getCurrentPosition().isEqual(criminal->getCurrentPosition())) {
      switch (arr_mv_objs[meeting[i]]->getObjectType()) {
        case SHERLOCK:
          result = true;
          break;
        case WATSON:
          result = true;
          break;
      }
    }
    if (result) return true;
  }
  return false;
}
bool ArrayMovingObject::handleCheckMeet(Robot *robot, int index, int *meeting, int countMeet) {
  bool result = false;
  for (int i = 0; i < countMeet; ++i) {
    if (arr_mv_objs[meeting[i]]->getCurrentPosition().isEqual(robot->getCurrentPosition())) {
      switch (arr_mv_objs[meeting[i]]->getObjectType()) {
        case SHERLOCK: {
          Sherlock *sherlock = dynamic_cast<Sherlock *>(arr_mv_objs[meeting[i]]);
          result = fightRobot(sherlock, robot);
          break;
        }
        case WATSON: {
          Watson *watson = dynamic_cast<Watson *>(arr_mv_objs[meeting[i]]);
          fightRobot(watson, robot);
          break;
        }
        case CRIMINAL: {
          result = false;
        }
      }
    }
    if (result) return true;
  }
  return false;
}
bool ArrayMovingObject::checkMeet(int index) {
  if (index < 0 || index >= count) return false;
  bool result = false;
  //Check if there are more than 1 MovingObject standing at the same position with index
  int meeting[count];
  int countMeet = 0;
  for (int i = 0; i < count; ++i) {
    if (index == i) continue;
    if (arr_mv_objs[index]->getCurrentPosition().isEqual(arr_mv_objs[i]->getCurrentPosition())) {
      meeting[countMeet] = i;
      ++countMeet;
    }
  }
  if (countMeet == 0) return false;
  //Debug only: print meeting
  for (int i = 0; i < countMeet; ++i) {
    //cout << "Meeting: " << meeting[i] << endl;
  }
  //cout << "end a time" << endl;
  switch (arr_mv_objs[index]->getObjectType()) {
    //cout << "start switching\n";
    case CRIMINAL: {
      return handleCheckMeet(dynamic_cast<Criminal *>(arr_mv_objs[index]), index, meeting, countMeet);
    }
    case ROBOT: {
      return handleCheckMeet(dynamic_cast<Robot *>(arr_mv_objs[index]), index, meeting, countMeet);
    }
    case SHERLOCK: {
      return handleCheckMeet(dynamic_cast<Sherlock *>(arr_mv_objs[index]), index, meeting, countMeet);
    }
    case WATSON: {
      return handleCheckMeet(dynamic_cast<Watson *>(arr_mv_objs[index]), index, meeting, countMeet);
    }
  }
  return false;
}
// *CLASS: Sherlock
// ! Lưu ý: ExcemptionCard được dùng để BỎ QUA nếu THỬ THÁCH THẤT BẠI -> xem như không thực hiện thử thách -> không gọi get lần 2
// ! Thực hiện get từ bag sau khi insert item_type

bool Sherlock::meet(RobotS *robotS) {
  //get Card for each time meet RobotS
//  this->getBag()->setRobotCheck(robotS);
  BaseItem *itemUse = preFight(robotS);
//  this->getBag()-> resetRobotCheck();
  if (itemUse) itemUse->use(this, robotS);
  //else cout << "No item to use\n";
  // Xử lý khi gặp robot S
  if (exp > 400) {
    bag->insert(robotS->getItem());
    usedCard = false;
    postFight();
    return true;
  }
  else {
    if (!usedCard) exp -= floor((double) exp * 0.1);
    else usedCard = false;
    postFight();
    return false;
  }
}
bool Sherlock::meet(RobotW *robotW) {
  // Xử lý khi gặp robot W
//  this->getBag()->setRobotCheck(robotW);
  BaseItem *itemUse = preFight(robotW);
  if (itemUse) itemUse->use(this, robotW);
  usedCard = false;
  bag->insert(robotW->getItem());
  postFight();
  return true;
}
bool Sherlock::meet(RobotSW *robotSW) {
  //Xử lý khi gặp robot SW
  //Bắt buộc dùng Card kể cả khi có khả năng vượt task
//  this->getBag()->setRobotCheck(robotSW);
  BaseItem *itemUse = preFight(robotSW);
//  this->getBag()-> resetRobotCheck();
  if (itemUse) itemUse->use(this, robotSW);
  if ((exp > 300) && (hp > 335)) {
    bag->insert(robotSW->getItem());
    usedCard = false;
    postFight();
    return true;
  }
  else {
    if (!usedCard) {
      hp -= floor((double) hp * 0.15);
      exp -= floor((double) exp * 0.15);
    }
    else usedCard = false;
    postFight();
    return false;
  }
}

bool Sherlock::meet(RobotC *robotC) {
  // Xử lý khi gặp robot C
//  this->getBag()->setRobotCheck(robotC);
  BaseItem *itemUse = preFight(robotC);
//  this->getBag()-> resetRobotCheck();
  usedCard = false;
  if (exp > 500) {
    setPos(robotC->criminalCaught());
    postFight();
    return true;
  }
  else {
    bag->insert(robotC->getItem());
    postFight();
    return false;
  }
}
void Sherlock::setPos(Position pos) {
  //Set vị trí mới cho nhân vật
  this->pos = pos;
}
bool Sherlock::meet(Watson *watson) {
  // Xử lý trao đổi thẻ ExcemptionCard
  // KHI CẢ 2 ĐỀU CÓ THỂ TRAO ĐỔI && ĐỔI TOÀN BỘ NẾU NHIỀU HƠN 1 (KỂ CẢ KHI ĐỐI PHƯƠNG)
  BaseBag *watsonBag = watson->getBag();
  BaseItem *item = nullptr;
  //Check if it meets the trading condition
  if (!(bag->tradingConditionCheck()) || !(watsonBag->tradingConditionCheck())) return false;
  //Sherlock giving PassingCard to Watson
  while (!(watson->getBag()->isFull())) {
    item = bag->get(PASSING_CARD);
    if (item != nullptr) {
      watsonBag->insert(item);
    }
    else break;
  }
  //Watson giving ExcemptionCard to Sherlock
  while (!(bag->isFull())) {
    item = watsonBag->get(EXCEMPTION_CARD);
    if (item != nullptr) {
      bag->insert(item);
    }
    else break;
  }
  return true;
}

// *CLASS: Watson
// ! Lưu ý: PassingCard được dùng khi GẶP ROBOT để bỏ qua thử thách nếu đúng loại thẻ
// ! Thực hiện get từ bag sau khi insert item_type
bool Watson::meet(RobotS *robotS) {
  //Xử lý trao đổi khi gặp robot S
//  this->getBag()->setRobotCheck(robotS);
  BaseItem *itemUse = preFight(robotS);
  if (itemUse) itemUse->use(this, robotS);
  usedCard = false;
  postFight();
  return true;
}
bool Watson::meet(RobotW *robotW) {
  // Xử lý trao đổi khi gặp robot W
  //get Card for each time meet RobotS
//  this->getBag()->setRobotCheck(robotW);
  BaseItem *itemUse = preFight(robotW);
  if (itemUse) itemUse->use(this, robotW);
  // Xử lý khi gặp robot S
  if (hp > 350 || usedCard) {
    if (bag->insert(robotW->getItem()));
    //cout << "WatsonBag : " << this->getBag()->str() << endl;
    usedCard = false;
    postFight();
    return true;
  }
  else {
    hp -= floor((double) hp * 0.05);
    postFight();
    return false;
  }
}

bool Watson::meet(RobotSW *robotSW) {
  // Xử lý trao đổi khi gặp robot SW
  //get Card for each time meet RobotS
//  this->getBag()->setRobotCheck(robotSW);
  BaseItem *itemUse = preFight(robotSW);
  if (itemUse) itemUse->use(this, robotSW);
  // Xử lý khi gặp robot Sx
  if (((hp > 165) && (exp > 600)) || usedCard) {
    bag->insert(robotSW->getItem());
    usedCard = false;
    postFight();
    return true;
  }
  else {
    hp -= floor((double) hp * 0.15);
    exp -= floor((double) exp * 0.15);
    postFight();
    return false;
  }
}

bool Watson::meet(RobotC *robotC) {
  // Xử lý trao đổi khi gặp robot C
//  this->getBag()->setRobotCheck(robotC);
  BaseItem *itemUse = preFight(robotC);
  if (itemUse) itemUse->use(this, robotC);
  bag->insert(robotC->getItem());
  //cout << "WatsonBag : " << this->getBag()->str() << endl;
  postFight();
  usedCard = false;
  return true;
}
bool Watson::meet(Sherlock *sherlock) {
  // Xử lý trao đổi khi gặp Sherlock
  // KHI CẢ 2 ĐỀU CÓ THỂ TRAO ĐỔI && ĐỔI TOÀN BỘ NẾU NHIỀU HƠN 1 (KỂ CẢ KHI ĐỐI PHƯƠNG)
  BaseBag *sherlockBag = sherlock->getBag();
  BaseItem *item = nullptr;
  //Check if it meets the trading condition
  if (!(bag->tradingConditionCheck()) || !(sherlockBag->tradingConditionCheck())) return false;
  //Watson giving ExcemptionCard to Sherlock
  while (!(sherlock->getBag()->isFull())) {
    item = bag->get(EXCEMPTION_CARD);
    if (item != nullptr) {
      sherlockBag->insert(item);
    }
    else break;
  }
  //Sherlock giving PassingCard to Watson
  while (!(bag->isFull())) {
    item = sherlockBag->get(PASSING_CARD);
    if (item != nullptr) {
      bag->insert(item);
    }
    else break;
  }
  return true;
}
BaseItem *Character::preFight(Robot *robot) {
  BaseItem *item = nullptr;
  switch (this->getObjectType()) {
    case SHERLOCK:
      if (this->getBag()->haveExcemptionCard != 0 && (this->getHP()) % 2 == 1) {
        item = this->getBag()->get(EXCEMPTION_CARD);
      }
      else return nullptr;
      break;
    case WATSON:
      if (this->getBag()->havePassingCard != 0 && (this->getHP()) % 2 == 1)
        item = this->getBag()->get(PASSING_CARD);
      break;
    default:
      return nullptr;
  }
  if (item != nullptr && item->canUse(this, robot)) {
    return item;
  }
//  cout << "get item successfully. " << this->getBag()->str() << endl;
  return nullptr;
}
void Character::postFight() {
  BaseItem *itemUse = this->getBag()->get();
  if (itemUse != nullptr && itemUse->canUse(this, nullptr)) {
    itemUse->canUse(this, nullptr);
    itemUse->use(this, nullptr);
  }
}
/* Implementations of some minor function */
/*
 * CLASS: MapElement
 */
MapElement::MapElement(ElementType in_type) {
  type = in_type;
}

ElementType MapElement::getType() const {
  return type;
}

/*
 * CLASS: FakeWall
 */
FakeWall::FakeWall(int in_req_exp) : MapElement(ElementType::FAKE_WALL) {
  req_exp = in_req_exp;
}

int FakeWall::getReqExp() const {
  return req_exp;
}

/*
 * CLASS: Position
 */

Position::Position(int r, int c) {
  this->r = r;
  this->c = c;
}

Position::Position(const string &str_pos) {
  getPosition(r, c, str_pos);
}

int Position::getRow() const {
  return r;
}

int Position::getCol() const {
  return c;
}

void Position::setRow(int r) {
  this->r = r;
}

void Position::setCol(int c) {
  this->c = c;
}

string Position::str() const {
  return "(" + to_string(r) + "," + to_string(c) + ")";
}

bool Position::isEqual(int r, int c) const {
  return (this->r == r && this->c == c);
}

bool Position::isEqual(Position position) const {
  return (r == position.r && c == position.c);
}

/*
 * CLASS: Map
 */
int Map::getNumRows() const {
  return num_rows;
}

int Map::getNumCols() const {
  return num_cols;
}

ElementType Map::getElementType(int i, int j) const {
  return map[i][j]->getType();
}
/*
 * CLASS: MovingObject
 */
MovingObject::MovingObject(int index, const Position pos, Map *map, const string &name) {
  this->index = index;
  this->pos = pos;
  this->map = map;
  this->name = name;
}
Position MovingObject::getCurrentPosition() const {
  return pos;
}
/*
 * CLASS: Character kế thừa class MovingObject
 */
Character::Character(int index, const Position pos, Map *map, const string &name) : MovingObject(index,
                                                                                                 pos,
                                                                                                 map,
                                                                                                 name) {
  usedCard = false;
}
/*
 * CLASS: Sherlock kế thừa class Character
 */
string Sherlock::str() const {
  //trả về chuỗi "Sherlock[index=<index>;pos=<pos>;moving_rule=<moving_rule>]"
  string str = "Sherlock[index=" + to_string(index) + ";pos=" + pos.str() + ";moving_rule=" + moving_rule;
  return str + "]";
}

MovingObjectType Sherlock::getObjectType() const {
  return SHERLOCK;
}

int Sherlock::getHP() const {
  return this->hp;
}

int Sherlock::getEXP() const {
  return this->exp;
}

void Sherlock::setHP(int hp) {
  this->hp = hp;
  if (hp < 0) this->hp = 0;
  if (hp > 500) this->hp = 500;
}

void Sherlock::setEXP(int exp) {
  this->exp = exp;
  if (exp < 0) this->exp = 0;
  if (exp > 900) this->exp = 900;
}
BaseBag *Sherlock::getBag() const {
  return bag;
}
Sherlock::~Sherlock() {
  delete bag;
}
/*
 * CLASS: Watson kế thừa class Character
 */
string Watson::str() const {
  return "Watson[index=" + to_string(index) + ";pos=" + pos.str() + ";moving_rule=" + moving_rule + "]";
}

MovingObjectType Watson::getObjectType() const {
  return WATSON;
}

int Watson::getHP() const {
  return this->hp;
}

int Watson::getEXP() const {
  return this->exp;
}

void Watson::setHP(int hp) {
  this->hp = hp;
  if (hp < 0) this->hp = 0;
  if (hp > 500) this->hp = 500;
}

void Watson::setEXP(int exp) {
  this->exp = exp;
  if (exp < 0) this->exp = 0;
  if (exp > 900) this->exp = 900;
}
BaseBag *Watson::getBag() const {
  return bag;
}
Watson::~Watson() {
  delete bag;
}
/*
 * CLASS: Criminal kế thừa class Character
 */
int calculateDistance(const Position &pos1, const Position &pos2) {
  //calculate Manhattan distance of 2 Position
  return abs(pos1.getRow() - pos2.getRow()) + abs(pos1.getCol() - pos2.getCol());
}
Position Criminal::getPrevPosition() const {
  return prev_pos;
}
void Criminal::move() {
  prev_pos = pos;
  Position nextPos = getNextPosition();
  if (!nextPos.isEqual(Position::npos)) {
    pos = nextPos;
    ++count;
  }
}
string Criminal::str() const {
  string result = "Criminal[index=" + to_string(index) + ";pos=" + pos.str() + "]";
  return result;
}

MovingObjectType Criminal::getObjectType() const {
  return CRIMINAL;
}

int Criminal::getCount() const {
  return count;
}
/*
 * CLASS: Robot kế thừa class MovingObject
 */

int reduceNum(int num) {
  if (num < 10) return num;
  else {
    while (num > 10) {
      num = num / 10 + num % 10;
    }
    return num;
  }
}
MovingObjectType Robot::getObjectType() const {
  return ROBOT;
}

string Robot::str() const {
  string type;
  switch (robot_type) {
    case C:
      type = "C";
      break;
    case W:
      type = "W";
      break;
    case S:
      type = "S";
      break;
    case SW:
      type = "SW";
      break;
  }
  return ("Robot[pos=" + pos.str() + ";type=" + type + ";dist=" +
      ((robot_type == C ? "" : to_string(this->getDistance()))) + "]");
}

RobotType Robot::getType() const {
  return robot_type;
}

BaseItem *Robot::getItem() {
  return item;
}
int Robot::getDistance(Character *obj) const {
  return calculateDistance(this->getCurrentPosition(), obj->getCurrentPosition());
}
/* Configuration functions */
void getPosition(int &x, int &y, string input) {
  int comma = input.find(",");
  x = stoi(input.substr(1, comma));
  y = stoi(input.substr(comma + 1, input.length() - comma));
}

string getSubString(string input, int start, int end) {
  return input.substr(start, end - start + 1);
}

int getintValue(string input, int start) {
  return stoi(getSubString(input, start, input.length()));
}

void extractArray(Position *position, string input, int numPosition) {
  for (int i = 0; i <= numPosition; i++) {
    int breakpoint = input.find(";");
    string Pos = getSubString(input, 0, breakpoint - 1);
    input = getSubString(input, breakpoint + 1, input.length());
    position[i] = Position(Pos);
    if (breakpoint == -1) break;
  }
}

int countPosition(string input) {
  int count = 0;
  for (int i = 0; i < input.length(); i++) {
    if (input[i] == ';') count++;
  }
  return ++count;
}

//Fix the initArray to support Position object
void initArray(Position *&position, int numPosition) {
  position = new Position[numPosition];
}
/* Minor destructors */

////////////////////////////////////////////////
/// END OF STUDENT'S ANSWER
////////////////////////////////////////////////


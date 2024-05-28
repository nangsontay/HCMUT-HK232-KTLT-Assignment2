#include "../study_in_pink2.h"

// ---------------------------------------------------PATH---------------------------------------------------------

// Khai báo tĩnh (Path path) -> in ra getType()
void tc_1001() {
  OUTPUT << "----- Testcase 01 -----" << endl;
  Path path = Path();
  OUTPUT << path.getType();
}

// Khai báo động Path * path = new Path() -> in ra getType()
void tc_1002() {
  OUTPUT << "----- Testcase 02 -----" << endl;
  Path *path = new Path();
  OUTPUT << path->getType();
  delete path;
}

// Khai báo động sử dụng con trỏ parent MapElement -> in ra getType()
void tc_1003() {
  OUTPUT << "----- Testcase 03 -----" << endl;
  MapElement *path = new Path();
  OUTPUT << path->getType();
  delete path;
}

// ---------------------------------------------------WALL---------------------------------------------------------

// Khai báo tĩnh (Wall wall) -> in ra getType()
void tc_1004() {
  OUTPUT << "----- Testcase 04 -----" << endl;
  Wall wall = Wall();
  OUTPUT << wall.getType();
}

// Khai báo động Wall * wall = new Wall() -> in ra getType()
void tc_1005() {
  OUTPUT << "----- Testcase 05 -----" << endl;
  Wall *wall = new Wall();
  OUTPUT << wall->getType();
  delete wall;
}

// Khai báo động sử dụng con trỏ parent MapElement -> in ra getType()
void tc_1006() {
  OUTPUT << "----- Testcase 06 -----" << endl;
  MapElement *wall = new Wall();
  OUTPUT << wall->getType();
  delete wall;
}

// ---------------------------------------------------FAKEWALL---------------------------------------------------------

// Khai báo tĩnh (FakeWall fakewall) -> in ra getType()
void tc_1007() {
  OUTPUT << "----- Testcase 07 -----" << endl;
  FakeWall fakewall = FakeWall(100);
  OUTPUT << fakewall.getType();
}

// Khai báo tĩnh (FakeWall fakewall) -> in ra getReqExp()
void tc_1008() {
  OUTPUT << "----- Testcase 08 -----" << endl;
  FakeWall fakewall = FakeWall(100);
  OUTPUT << fakewall.getReqExp();
}

// Khai báo động FakeWall * fakewall = new FakeWall()  -> in ra getType()
void tc_1009() {
  OUTPUT << "----- Testcase 09 -----" << endl;
  FakeWall *fakewall = new FakeWall(100);
  OUTPUT << fakewall->getType();
  delete fakewall;
}

// Khai báo động FakeWall * fakewall = new FakeWall()  -> in ra getReqExp()
void tc_1010() {
  OUTPUT << "----- Testcase 10 -----" << endl;
  FakeWall *fakewall = new FakeWall(100);
  OUTPUT << fakewall->getReqExp();
  delete fakewall;
}

// Khai báo động sử dụng con trỏ parent MapElement -> in ra getType()
void tc_1011() {
  OUTPUT << "----- Testcase 11 -----" << endl;
  MapElement *fakewall = new FakeWall(100);
  OUTPUT << fakewall->getType();
  delete fakewall;
}

// ---------------------------------------------------MAP---------------------------------------------------------

//  Không dùng class TestStudyInPink
// Khai báo tĩnh
void tc_1012() {
  OUTPUT << "----- Testcase 12 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(6, 0)};
  Map map = Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// Khai báo tĩnh
void tc_1013() {
  OUTPUT << "----- Testcase 13 -----" << endl;
  int num_walls = 5;
  Position arr_walls[] = {Position(1, 1), Position(2, 2), Position(5, 5), Position(4, 4), Position(3, 3)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(0, 5)};
  Map map = Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// Khai báo thông qua cấp phát động new
// không delete trên con trỏ

// num_rows == num_cols
void tc_1014() {
  OUTPUT << "----- Testcase 14 -----" << endl;
  int num_walls = 2;
  Position arr_walls[] = {Position(2, 3), Position(3, 0)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(2, 4)};
  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows == num_cols
void tc_1015() {
  OUTPUT << "----- Testcase 15 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(2, 4), Position(2, 3), Position(3, 1)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(1, 1)};
  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows > num_cols
void tc_1016() {
  OUTPUT << "----- Testcase 16 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(3, 3)};
  Map *map = new Map(7, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows > num_cols
void tc_1017() {
  OUTPUT << "----- Testcase 17 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(4, 0)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(0, 0)};
  Map *map = new Map(6, 2, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows < num_cols
void tc_1018() {
  OUTPUT << "----- Testcase 18 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(2, 2), Position(2, 1), Position(1, 1)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(0, 0)};
  Map *map = new Map(3, 4, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_rows < num_cols
void tc_1019() {
  OUTPUT << "----- Testcase 19 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};
  Map *map = new Map(4, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_walls == 0
void tc_1020() {
  OUTPUT << "----- Testcase 20 -----" << endl;
  int num_walls = 0;
  Position arr_walls[] = {};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_walls == 1
void tc_1021() {
  OUTPUT << "----- Testcase 21 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(0, 0)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_walls > 1
void tc_1022() {
  OUTPUT << "----- Testcase 22 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(0, 0), Position(1, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_walls > 1
void tc_1023() {
  OUTPUT << "----- Testcase 23 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 9), Position(9, 2), Position(3, 4), Position(4, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_fake_walls == 0
void tc_1024() {
  OUTPUT << "----- Testcase 24 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 0;
  Position arr_fake_walls[] = {};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_fake_walls == 1
void tc_1025() {
  OUTPUT << "----- Testcase 25 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_fake_walls > 1
void tc_1026() {
  OUTPUT << "----- Testcase 26 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(1, 1)};
  int num_fake_walls = 4;
  Position arr_fake_walls[] = {Position(0, 0), Position(2, 3), Position(5, 4), Position(9, 9)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// num_fake_walls > 1
void tc_1027() {
  OUTPUT << "----- Testcase 27 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(0, 0), Position(2, 6)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
}

// delete trên con trỏ

// num_rows == num_cols
void tc_1028() {
  OUTPUT << "----- Testcase 28 -----" << endl;
  int num_walls = 2;
  Position arr_walls[] = {Position(2, 3), Position(3, 0)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(2, 4)};
  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_rows == num_cols
void tc_1029() {
  OUTPUT << "----- Testcase 29 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(2, 4), Position(2, 3), Position(3, 1)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(1, 1)};
  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_rows > num_cols
void tc_1030() {
  OUTPUT << "----- Testcase 30 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(3, 3)};
  Map *map = new Map(7, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_rows > num_cols
void tc_1031() {
  OUTPUT << "----- Testcase 31 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(4, 0)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(0, 0)};
  Map *map = new Map(6, 2, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_rows < num_cols
void tc_1032() {
  OUTPUT << "----- Testcase 32 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(2, 2), Position(2, 1), Position(1, 1)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(0, 0)};
  Map *map = new Map(3, 4, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_rows < num_cols
void tc_1033() {
  OUTPUT << "----- Testcase 33 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};
  Map *map = new Map(4, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_walls == 0
void tc_1034() {
  OUTPUT << "----- Testcase 34 -----" << endl;
  int num_walls = 0;
  Position arr_walls[] = {};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_walls == 1
void tc_1035() {
  OUTPUT << "----- Testcase 35 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(0, 0)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_walls > 1
void tc_1036() {
  OUTPUT << "----- Testcase 36 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(0, 0), Position(1, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_walls > 1
void tc_1037() {
  OUTPUT << "----- Testcase 37 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 9), Position(9, 2), Position(3, 4), Position(4, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_fake_walls == 0
void tc_1038() {
  OUTPUT << "----- Testcase 38 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 0;
  Position arr_fake_walls[] = {};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_fake_walls == 1
void tc_1039() {
  OUTPUT << "----- Testcase 39 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_fake_walls > 1
void tc_1040() {
  OUTPUT << "----- Testcase 40 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(1, 1)};
  int num_fake_walls = 4;
  Position arr_fake_walls[] = {Position(0, 0), Position(2, 3), Position(5, 4), Position(9, 9)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// num_fake_walls > 1
void tc_1041() {
  OUTPUT << "----- Testcase 41 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(0, 0), Position(2, 6)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  delete map;
}

// ---------------------------------------------------POSITION---------------------------------------------------------
// Không dùng class TestStudyInPink

// "Position ( int r =0 , int c =0) dùng cả 2 default param"
void tc_1054() {
  OUTPUT << "----- Testcase 54 -----" << endl;
  Position pos = Position();
  OUTPUT << pos.str();
}

// "Position ( int r =0 , int c =0) dùng 1 default param"
void tc_1055() {
  OUTPUT << "----- Testcase 55 -----" << endl;
  Position pos = Position(1);
  OUTPUT << pos.str();
}

// "Position ( int r =0 , int c =0) truyền cả 2 param"
void tc_1056() {
  OUTPUT << "----- Testcase 56 -----" << endl;
  Position pos = Position(1, 3);
  OUTPUT << pos.str();
}

// Position ( const string & str_pos ) ;
// r = 0, c = 0
void tc_1057() {
  OUTPUT << "----- Testcase 57 -----" << endl;
  Position pos = Position("(0, 0)");
  OUTPUT << pos.str();
}

// r > 0, c > 0
void tc_1058() {
  OUTPUT << "----- Testcase 58 -----" << endl;
  Position pos = Position("(1, 2)");
  OUTPUT << pos.str();
}

// r > 0, c < 0
void tc_1059() {
  OUTPUT << "----- Testcase 59 -----" << endl;
  Position pos = Position("(1, -1)");
  OUTPUT << pos.str();
}

// r < 0, c > 0
void tc_1060() {
  OUTPUT << "----- Testcase 60 -----" << endl;
  Position pos = Position("(-2, 3)");
  OUTPUT << pos.str();
}

// r < 0, c < 0
void tc_1061() {
  OUTPUT << "----- Testcase 61 -----" << endl;
  Position pos = Position("(-2, -4)");
  OUTPUT << pos.str();
}

// int getRow () const ;
void tc_1062() {
  OUTPUT << "----- Testcase 62 -----" << endl;
  Position pos = Position("(3, 5)");
  OUTPUT << pos.getRow();
}

// int getRow () const ;
void tc_1063() {
  OUTPUT << "----- Testcase 63 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.getRow();
}

// int getCol () const
void tc_1064() {
  OUTPUT << "----- Testcase 64 -----" << endl;
  Position pos = Position("(3, 5)");
  OUTPUT << pos.getCol();
}

// int getCol () const
void tc_1065() {
  OUTPUT << "----- Testcase 65 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.getCol();
}

// void setRow (int r)
void tc_1066() {
  OUTPUT << "----- Testcase 66 -----" << endl;
  Position pos = Position("(3, 5)");
  pos.setRow(5);
  OUTPUT << pos.str();
}

// void setRow (int r)
void tc_1067() {
  OUTPUT << "----- Testcase 67 -----" << endl;
  Position pos = Position(2, 4);
  pos.setRow(3);
  OUTPUT << pos.str();
}

// void setCol (int c)
void tc_1068() {
  OUTPUT << "----- Testcase 68 -----" << endl;
  Position pos = Position("(3, 5)");
  pos.setCol(1);
  OUTPUT << pos.str();
}

// void setCol (int c)
void tc_1069() {
  OUTPUT << "----- Testcase 69 -----" << endl;
  Position pos = Position(2, 4);
  pos.setCol(1);
  OUTPUT << pos.str();
}

// bool isEqual (int in_r , int in_c ) const
// trùng nhau
void tc_1070() {
  OUTPUT << "----- Testcase 70 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.isEqual(2, 4);
}

// khác nhau về r
void tc_1071() {
  OUTPUT << "----- Testcase 71 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.isEqual(4, 4);
}

// khác nhau về c
void tc_1072() {
  OUTPUT << "----- Testcase 72 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.isEqual(2, 5);
}

// khác nhau về r và khác nhau về c
void tc_1073() {
  OUTPUT << "----- Testcase 73 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.isEqual(4, 5);
}

// ---------------------------------------------------SHERLOCK---------------------------------------------------------
// Không dùng class TestStudyInPink
// "Constructor + getNextPosition"

// moving rule có bước đi đầu tiên đến ô Path
void tc_1094() {
  OUTPUT << "----- Testcase 94 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(1, 2), map, 100, 250);
  OUTPUT << sherlock->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1095() {
  OUTPUT << "----- Testcase 95 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(2, 1), map, 100, 250);
  OUTPUT << sherlock->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1096() {
  OUTPUT << "----- Testcase 96 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(3, 2), map, 100, 250);
  OUTPUT << sherlock->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1097() {
  OUTPUT << "----- Testcase 97 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(4, 1), map, 100, 250);
  OUTPUT << sherlock->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1098() {
  OUTPUT << "----- Testcase 98 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(1, 4), map, 100, 250);
  OUTPUT << sherlock->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
}

//"Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1099() {
  OUTPUT << "----- Testcase 99 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(1, 2), map, 100, 250);
  sherlock->move();
  OUTPUT << sherlock->str();
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1100() {
  OUTPUT << "----- Testcase 100 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(2, 1), map, 100, 250);
  sherlock->move();
  OUTPUT << sherlock->str();
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1101() {
  OUTPUT << "----- Testcase 101 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(3, 2), map, 100, 250);
  sherlock->move();
  OUTPUT << sherlock->str();
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1102() {
  OUTPUT << "----- Testcase 102 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(4, 1), map, 100, 250);
  sherlock->move();
  OUTPUT << sherlock->str();
  delete map;
  delete sherlock;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1103() {
  OUTPUT << "----- Testcase 103 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(1, 4), map, 100, 250);
  sherlock->move();
  OUTPUT << sherlock->str();
  delete map;
  delete sherlock;
}

// Không dùng class TestStudyInPink
// "Constructor + str"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1109() {
  OUTPUT << "----- Testcase 109 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(1, 2), map, 100, 250);
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1110() {
  OUTPUT << "----- Testcase 110 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(2, 1), map, 100, 250);
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1111() {
  OUTPUT << "----- Testcase 111 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(3, 2), map, 100, 250);
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1112() {
  OUTPUT << "----- Testcase 112 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(4, 1), map, 100, 250);
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1113() {
  OUTPUT << "----- Testcase 113 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(1, 4), map, 100, 250);
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
}

// ---------------------------------------------------WATSON---------------------------------------------------------
// Không dùng class TestStudyInPink
// "Constructor + getNextPosition"

// moving rule có bước đi đầu tiên đến ô Path
void tc_1114() {
  OUTPUT << "----- Testcase 114 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(0, 1), map, 100, 250);
  OUTPUT << watson->getNextPosition().str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1115() {
  OUTPUT << "----- Testcase 115 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
  OUTPUT << watson->getNextPosition().str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và có thể đến được
void tc_1116() {
  OUTPUT << "----- Testcase 116 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "DR", Position(3, 2), map, 100, 500);
  OUTPUT << watson->getNextPosition().str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và không thể đến được
void tc_1117() {
  OUTPUT << "----- Testcase 117 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "DR", Position(0, 2), map, 100, 500);
  OUTPUT << watson->getNextPosition().str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1118() {
  OUTPUT << "----- Testcase 118 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
  OUTPUT << watson->getNextPosition().str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1119() {
  OUTPUT << "----- Testcase 119 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(0, 0), map, 100, 250);
  OUTPUT << watson->getNextPosition().str() << endl;
  delete map;
  delete watson;
}

//"Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1120() {
  OUTPUT << "----- Testcase 120 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(0, 1), map, 100, 250);
  watson->move();
  OUTPUT << watson->str();
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1121() {
  OUTPUT << "----- Testcase 121 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
  watson->move();
  OUTPUT << watson->str();
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và có thể đến được
void tc_1122() {
  OUTPUT << "----- Testcase 122 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "DR", Position(3, 2), map, 100, 500);
  watson->move();
  OUTPUT << watson->str();
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và không thể đến được
void tc_1123() {
  OUTPUT << "----- Testcase 123 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "DR", Position(0, 2), map, 100, 500);
  watson->move();
  OUTPUT << watson->str();
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1124() {
  OUTPUT << "----- Testcase 124 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
  watson->move();
  OUTPUT << watson->str();
  delete map;
  delete watson;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1125() {
  OUTPUT << "----- Testcase 125 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(0, 0), map, 100, 250);
  watson->move();
  OUTPUT << watson->str();
  delete map;
  delete watson;
}

// Không dùng class TestStudyInPink
// "Constructor + str"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1132() {
  OUTPUT << "----- Testcase 132 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(0, 1), map, 100, 250);
  OUTPUT << watson->str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1133() {
  OUTPUT << "----- Testcase 133 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
  OUTPUT << watson->str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và có thể đến được
void tc_1134() {
  OUTPUT << "----- Testcase 134 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "DR", Position(3, 2), map, 100, 500);
  OUTPUT << watson->str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và không thể đến được
void tc_1135() {
  OUTPUT << "----- Testcase 135 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "DR", Position(0, 2), map, 100, 500);
  OUTPUT << watson->str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1136() {
  OUTPUT << "----- Testcase 136 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
  OUTPUT << watson->str() << endl;
  delete map;
  delete watson;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1137() {
  OUTPUT << "----- Testcase 137 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(0, 0), map, 100, 250);
  OUTPUT << watson->str() << endl;
  delete map;
  delete watson;
}

// ---------------------------------------------------CRIMINAL---------------------------------------------------------
// Không dùng class TestStudyInPink
// "Constructor + getNextPosition"

// moving rule có bước đi đầu tiên đến ô Path
void tc_1138() {
  OUTPUT << "----- Testcase 138 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1139() {
  OUTPUT << "----- Testcase 139 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1140() {
  OUTPUT << "----- Testcase 140 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(6, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(6, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1141() {
  OUTPUT << "----- Testcase 141 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1142() {
  OUTPUT << "----- Testcase 142 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
  OUTPUT << criminal->getNextPosition().str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

//"Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1143() {
  OUTPUT << "----- Testcase 143 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  criminal->move();
  OUTPUT << criminal->str();
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1144() {
  OUTPUT << "----- Testcase 144 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  criminal->move();
  OUTPUT << criminal->str();
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1145() {
  OUTPUT << "----- Testcase 145 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(6, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(6, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  criminal->move();
  OUTPUT << criminal->str();
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1146() {
  OUTPUT << "----- Testcase 146 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  criminal->move();
  OUTPUT << criminal->str();
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1147() {
  OUTPUT << "----- Testcase 147 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
  criminal->move();
  OUTPUT << criminal->str();
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// Không dùng class TestStudyInPink
// "Constructor + str"
// moving rule có bước đi đầu tiên đến ô Path
void tc_1153() {
  OUTPUT << "----- Testcase 153 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên đến ô Wall
void tc_1154() {
  OUTPUT << "----- Testcase 154 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1155() {
  OUTPUT << "----- Testcase 155 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(6, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(6, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void tc_1156() {
  OUTPUT << "----- Testcase 156 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(4, 3), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}
// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void tc_1157() {
  OUTPUT << "----- Testcase 157 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void tc_1158() {
  OUTPUT << "----- Testcase 158 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

//------------------------------------Criminal đến (Sherlock+Watson)----------------------------------

// Criminal đến (Sherlock+Watson)
// Không dùng class TestStudyInPink
// "có 1 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó có thể đi đến được"
void tc_1159() {
  OUTPUT << "----- Testcase 159 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(0, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// "có 1 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó không đi đến được"
void tc_1160() {
  OUTPUT << "----- Testcase 160 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// "có 2 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó có thể đi đến được"
void tc_1161() {
  OUTPUT << "----- Testcase 161 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(3, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(3, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// "có 2 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó không thể đi đến được"
void tc_1162() {
  OUTPUT << "----- Testcase 162 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 3), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 3), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

void tc_1297() {
  OUTPUT << "----- Testcase 297 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void tc_1298() {
  OUTPUT << "----- Testcase 298 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(firstAid1);
  sherlockBag->insert(firstAid2);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete firstAid1;
  delete firstAid2;
  delete sherlockBag;
}

void tc_1299() {
  OUTPUT << "----- Testcase 299 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  for (int i = 0; i < 12; i++) {
    BaseItem *firstAid = new FirstAid();
    sherlockBag->insert(firstAid);
  }
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void tc_1300() {
  OUTPUT << "----- Testcase 300 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  for (int i = 0; i < 14; i++) {
    BaseItem *firstAid = new FirstAid();
    sherlockBag->insert(firstAid);
  }
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void tc_1301() {
  OUTPUT << "----- Testcase 301 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  for (int i = 0; i < 20; i++) {
    BaseItem *firstAid = new FirstAid();
    sherlockBag->insert(firstAid);
  }
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void tc_1302() {
  OUTPUT << "----- Testcase 302 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->get();
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void tc_1303() {
  OUTPUT << "----- Testcase 303 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseItem *passingCard1 = new PassingCard("RobotSW");
  BaseItem *passingCard2 = new PassingCard("all");

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(passingCard1);
  sherlockBag->insert(passingCard2);
  sherlockBag->get();
  OUTPUT << sherlockBag->str() << endl; // str

  delete map;
  delete sherlock;
  delete passingCard1;
  delete passingCard2;
  delete sherlockBag;
}

void tc_1304() {
  OUTPUT << "----- Testcase 304 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 120, 300);

  BaseItem *passingCard = new PassingCard("all");
  BaseItem *firstAid = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(passingCard);
  sherlockBag->insert(firstAid);
  sherlockBag->get();
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete passingCard;
  delete firstAid;
  delete sherlockBag;
}

void tc_1305() {
  OUTPUT << "----- Testcase 305 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(firstAid1);
  sherlockBag->insert(firstAid2);
  sherlockBag->get();
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete firstAid1;
  delete firstAid2;
  delete sherlockBag;
}

void tc_1306() {
  OUTPUT << "----- Testcase 306 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->get(FIRST_AID);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void tc_1307() {
  OUTPUT << "----- Testcase 303 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseItem *passingCard1 = new PassingCard("RobotS");
  BaseItem *passingCard2 = new PassingCard("RobotC");

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(passingCard1);
  sherlockBag->insert(passingCard2);
  sherlockBag->get(PASSING_CARD);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete passingCard1;
  delete passingCard2;
  delete sherlockBag;
}

void tc_1308() {
  OUTPUT << "----- Testcase 304 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 120, 300);

  BaseItem *passingCard = new PassingCard("all");
  BaseItem *firstAid = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(passingCard);
  sherlockBag->insert(firstAid);
  sherlockBag->get(FIRST_AID);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete passingCard;
  delete firstAid;
  delete sherlockBag;
}

void tc_1309() {
  OUTPUT << "----- Testcase 305 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(firstAid1);
  sherlockBag->insert(firstAid2);
  sherlockBag->get(FIRST_AID);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete firstAid1;
  delete firstAid2;
  delete sherlockBag;
}

void tc_1323() {
  OUTPUT << "----- Testcase 323 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 150, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
}

void tc_1324() {
  OUTPUT << "----- Testcase 324 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(firstAid1);
  watsonBag->insert(firstAid2);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete firstAid1;
  delete firstAid2;
}

void tc_1325() {
  OUTPUT << "----- Testcase 325 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  for (int i = 0; i < 14; i++) {
    BaseItem *firstAid = new FirstAid();
    watsonBag->insert(firstAid);
  }
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void tc_1326() {
  OUTPUT << "----- Testcase 326 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  for (int i = 0; i < 16; i++) {
    BaseItem *firstAid = new FirstAid();
    watsonBag->insert(firstAid);
  }
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void tc_1327() {
  OUTPUT << "----- Testcase 327 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  for (int i = 0; i < 25; i++) {
    BaseItem *firstAid = new FirstAid();
    watsonBag->insert(firstAid);
  }
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void tc_1328() {
  OUTPUT << "----- Testcase 328 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->get();
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void tc_1329() {
  OUTPUT << "----- Testcase 329 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *excemptionCard1 = new ExcemptionCard();
  BaseItem *excemptionCard2 = new ExcemptionCard();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard1);
  watsonBag->insert(excemptionCard2);
  watsonBag->get();
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete excemptionCard1;
  delete excemptionCard2;
  delete watsonBag;
}

void tc_1330() {
  OUTPUT << "----- Testcase 330 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *excemptionCard = new ExcemptionCard();
  BaseItem *firstAid = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard);
  watsonBag->insert(firstAid);
  watsonBag->get();
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete excemptionCard;
  delete firstAid;
  delete watsonBag;
}

void tc_1331() {
  OUTPUT << "----- Testcase 331 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(firstAid1);
  watsonBag->insert(firstAid2);
  watsonBag->get();
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete firstAid1;
  delete firstAid2;
  delete watsonBag;
}

void tc_1332() {
  OUTPUT << "----- Testcase 332 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->get(FIRST_AID);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void tc_1333() {
  OUTPUT << "----- Testcase 333 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *excemptionCard1 = new ExcemptionCard();
  BaseItem *excemptionCard2 = new ExcemptionCard();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard1);
  watsonBag->insert(excemptionCard2);
  watsonBag->get(EXCEMPTION_CARD);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete excemptionCard1;
  delete excemptionCard2;
  delete watsonBag;
}

void tc_1334() {
  OUTPUT << "----- Testcase 334 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *excemptionCard = new ExcemptionCard();
  BaseItem *firstAid = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard);
  watsonBag->insert(firstAid);
  watsonBag->get(FIRST_AID);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete excemptionCard;
  delete firstAid;
  delete watsonBag;
}

void tc_1335() {
  OUTPUT << "----- Testcase 335 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(firstAid1);
  watsonBag->insert(firstAid2);
  watsonBag->get(FIRST_AID);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete firstAid1;
  delete firstAid2;
  delete watsonBag;
}

void tc_1362() {
  OUTPUT << "----- Testcase 362 -----" << endl;
  string config_path = "./configs/181.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1363() {
  OUTPUT << "----- Testcase 363 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1364() {
  OUTPUT << "----- Testcase 364 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1365() {
  OUTPUT << "----- Testcase 365 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1200() {
  OUTPUT << "----- Testcase 200 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotS *robotS = new RobotS(3, Position(3, 3), map, criminal, sherlock);
  int distance_old = robotS->getDistance();

  Position new_position = robotS->getNextPosition();
  RobotS *robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
  int distance_new = robotS->getDistance();
  if (distance_old - distance_new >= 0)
    OUTPUT << "Can get close";
  else
    OUTPUT << "Can not get close";
  delete robotS;
  delete robotS_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1201() {
  OUTPUT << "----- Testcase 201 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(2, 3), Position(3, 3), Position(4, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(3, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotS *robotS = new RobotS(3, Position(3, 2), map, criminal, sherlock);
  int distance_old = robotS->getDistance();

  Position new_position = robotS->getNextPosition();
  RobotS *robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
  int distance_new = robotS->getDistance();
  if (distance_old - distance_new >= 0)
    OUTPUT << "Can get close";
  else
    OUTPUT << "Can not get close";
  delete robotS;
  delete robotS_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1202() {
  OUTPUT << "----- Testcase 202 -----" << endl;
  int num_walls = 5;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(3, 2), Position(4, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotS *robotS = new RobotS(3, Position(3, 3), map, criminal, sherlock);
  robotS->move();
  robotS->str();
  delete robotS;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1167() {
  OUTPUT << "----- Testcase 167 -----" << endl;
  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(5);
  OUTPUT << arr_mv_objs->str() << endl;
  delete arr_mv_objs;
}

void tc_1168() {
  OUTPUT << "----- Testcase 168 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(5);
  arr_mv_objs->add(sherlock);
  OUTPUT << arr_mv_objs->str() << endl;
  delete arr_mv_objs;
  delete sherlock;
  delete map;
}

void tc_1169() {
  OUTPUT << "----- Testcase 169 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(3);
  arr_mv_objs->add(criminal);
  arr_mv_objs->add(sherlock);
  arr_mv_objs->add(watson);
  OUTPUT << arr_mv_objs->str() << endl;
  delete arr_mv_objs;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

bool tc_1170() {
  OUTPUT << "----- Testcase 170 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(3);
  arr_mv_objs->add(criminal);
  arr_mv_objs->add(sherlock);
  arr_mv_objs->add(watson);
  bool result = arr_mv_objs->isFull();
  delete arr_mv_objs;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
  return result;
}

bool tc_1171() {
  OUTPUT << "----- Testcase 171 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(3);
  bool result = arr_mv_objs->add(sherlock);
  delete arr_mv_objs;
  delete sherlock;
  delete map;
  return result;
}

bool tc_1172() {
  OUTPUT << "----- Testcase 172 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(2);
  arr_mv_objs->add(criminal);
  arr_mv_objs->add(sherlock);
  bool result = arr_mv_objs->add(watson);
  delete arr_mv_objs;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
  return result;
}

bool tc_1173() {
  OUTPUT << "----- Testcase 173 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  Sherlock *sherlock_2 = new Sherlock(3, "UUR", Position(1, 3), map, 250, 450);
  Sherlock *sherlock_3 = new Sherlock(4, "RRU", Position(1, 3), map, 250, 450);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(1);
  arr_mv_objs->add(criminal);
  arr_mv_objs->add(sherlock);
  arr_mv_objs->add(sherlock_2);
  arr_mv_objs->add(sherlock_3);
  bool result = arr_mv_objs->add(watson);
  delete arr_mv_objs;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
  return result;
}

void tc_1181() {
  OUTPUT << "----- Testcase 181 -----" << endl;
  Configuration *config = new Configuration("./configs/181.txt"); // 168
  OUTPUT << config->str() << endl;
  delete config;
}

void tc_1182() {
  OUTPUT << "----- Testcase 182 -----" << endl;
  Configuration *config = new Configuration("./configs/181.txt");
  OUTPUT << config->str() << endl;
  delete config;
}

void tc_1183() {
  OUTPUT << "----- Testcase 183 -----" << endl;
  Configuration *config = new Configuration("./configs/181.txt");
  OUTPUT << config->str() << endl;
  delete config;
}

void tc_1184() {
  OUTPUT << "----- Testcase 184 -----" << endl;
  Configuration *config = new Configuration("./configs/181.txt");
  OUTPUT << config->str() << endl;
  delete config;
}

void tc_1185() {
  OUTPUT << "----- Testcase 185 -----" << endl;
  Configuration *config = new Configuration("./configs/185.txt");
  OUTPUT << config->str() << endl;
  delete config;
}

void tc_1186() {
  OUTPUT << "----- Testcase 186 -----" << endl;
  Configuration *config = new Configuration("./configs/185.txt");
  OUTPUT << config->str() << endl;
  delete config;
}

void tc_1187() {
  OUTPUT << "----- Testcase 187 -----" << endl;
  Configuration *config = new Configuration("./configs/185.txt");
  OUTPUT << config->str() << endl;
  delete config;
}

void tc_1188() {
  OUTPUT << "----- Testcase 188 -----" << endl;
  Configuration *config = new Configuration("./configs/185.txt");
  OUTPUT << config->str() << endl;
  delete config;
}

void tc_1189() {
  OUTPUT << "----- Testcase 189 -----" << endl;
  Configuration *config = new Configuration("./configs/185.txt");
  OUTPUT << config->str() << endl;
  delete config;
}

void tc_1199() {
  OUTPUT << "----- Testcase 199 -----" << endl;
  int num_walls = 5;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(3, 2), Position(4, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotS *robotS = new RobotS(3, Position(3, 3), map, criminal, sherlock);
  int distance_old = robotS->getDistance();

  Position new_position = robotS->getNextPosition();
  RobotS *robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
  int distance_new = robotS->getDistance();
  if (distance_old - distance_new >= 0)
    OUTPUT << "Can get close";
  else
    OUTPUT << "Can not get close";
  delete robotS;
  delete robotS_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1203() {
  OUTPUT << "----- Testcase 203 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotS *robotS = new RobotS(3, Position(3, 3), map, criminal, sherlock);
  robotS->move();
  robotS->str();
  delete robotS;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1204() {
  OUTPUT << "----- Testcase 204 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(2, 3), Position(3, 3), Position(4, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(3, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotS *robotS = new RobotS(3, Position(3, 2), map, criminal, sherlock);
  robotS->move();
  robotS->str();
  delete robotS;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1211() {
  OUTPUT << "----- Testcase 211 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotW *robotW = new RobotW(3, Position(7, 1), map, criminal, watson);
  int distance_old = robotW->getDistance();

  Position new_position = robotW->getNextPosition();
  RobotW *robotW_new = new RobotW(4, new_position, map, criminal, watson);
  int distance_new = robotW->getDistance();
  if (distance_old - distance_new >= 0)
    OUTPUT << "Can get close";
  else
    OUTPUT << "Can not get close";
  delete robotW;
  delete robotW_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1212() {
  OUTPUT << "----- Testcase 212 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotW *robotW = new RobotW(3, Position(2, 2), map, criminal, watson);
  int distance_old = robotW->getDistance();

  Position new_position = robotW->getNextPosition();
  RobotW *robotW_new = new RobotW(4, new_position, map, criminal, watson);
  int distance_new = robotW->getDistance();
  if (distance_old - distance_new >= 0)
    OUTPUT << "Can get close";
  else
    OUTPUT << "Can not get close";
  delete robotW;
  delete robotW_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1213() {
  OUTPUT << "----- Testcase 213 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotW *robotW = new RobotW(3, Position(2, 1), map, criminal, watson);
  int distance_old = robotW->getDistance();

  Position new_position = robotW->getNextPosition();
  RobotW *robotW_new = new RobotW(4, new_position, map, criminal, watson);
  int distance_new = robotW->getDistance();
  if (distance_old - distance_new >= 0)
    OUTPUT << "Can get close";
  else
    OUTPUT << "Can not get close";
  delete robotW;
  delete robotW_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1214() {
  OUTPUT << "----- Testcase 214 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotW *robotW = new RobotW(3, Position(7, 1), map, criminal, watson);
  robotW->move();
  robotW->str();
  delete robotW;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1215() {
  OUTPUT << "----- Testcase 215 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotW *robotW = new RobotW(3, Position(2, 2), map, criminal, watson);
  robotW->move();
  robotW->str();
  delete robotW;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1216() {
  OUTPUT << "----- Testcase 216 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotW *robotW = new RobotW(3, Position(2, 1), map, criminal, watson);
  robotW->move();
  robotW->str();
  delete robotW;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1223() {
  OUTPUT << "----- Testcase 223 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotSW *robotSW = new RobotSW(3, Position(7, 1), map, criminal, sherlock, watson);
  int distance_old = robotSW->getDistance();

  Position new_position = robotSW->getNextPosition();
  RobotSW *robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
  int distance_new = robotSW->getDistance();
  if (distance_old - distance_new >= 0)
    OUTPUT << "Can get close";
  else
    OUTPUT << "Can not get close";
  delete robotSW;
  delete robotSW_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1224() {
  OUTPUT << "----- Testcase 224 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotSW *robotSW = new RobotSW(3, Position(2, 2), map, criminal, sherlock, watson);
  int distance_old = robotSW->getDistance();

  Position new_position = robotSW->getNextPosition();
  RobotSW *robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
  int distance_new = robotSW->getDistance();
  if (distance_old - distance_new >= 0)
    OUTPUT << "Can get close";
  else
    OUTPUT << "Can not get close";
  delete robotSW;
  delete robotSW_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1225() {
  OUTPUT << "----- Testcase 225 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotSW *robotSW = new RobotSW(3, Position(2, 1), map, criminal, sherlock, watson);
  int distance_old = robotSW->getDistance();

  Position new_position = robotSW->getNextPosition();
  RobotSW *robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
  int distance_new = robotSW->getDistance();
  if (distance_old - distance_new >= 0)
    OUTPUT << "Can get close";
  else
    OUTPUT << "Can not get close";
  delete robotSW;
  delete robotSW_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1226() {
  OUTPUT << "----- Testcase 226 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotSW *robotSW = new RobotSW(3, Position(7, 1), map, criminal, sherlock, watson);
  OUTPUT << "Current: " << robotSW->str() << endl;
  robotSW->move();
  OUTPUT << "Next: " << robotSW->str() << endl;
  delete robotSW;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1227() {
  OUTPUT << "----- Testcase 227 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotSW *robotSW = new RobotSW(3, Position(2, 2), map, criminal, sherlock, watson);
  OUTPUT << "Current: " << robotSW->str() << endl;
  robotSW->move();
  OUTPUT << "Next: " << robotSW->str() << endl;
  delete robotSW;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1228() {
  OUTPUT << "----- Testcase 228 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotSW *robotSW = new RobotSW(3, Position(2, 1), map, criminal, sherlock, watson);
  OUTPUT << "Current: " << robotSW->str() << endl;
  robotSW->move();
  OUTPUT << "Next: " << robotSW->str() << endl;
  delete robotSW;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1235() {
  OUTPUT << "----- Testcase 235 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotC *robotC = new RobotC(3, Position(7, 1), map, criminal);
  OUTPUT << "First position: " << robotC->getCurrentPosition().str() << endl;
  Position new_position = robotC->getNextPosition();
  RobotC *robotC_new = new RobotC(4, new_position, map, criminal);
  OUTPUT << "Next position: " << robotC_new->getCurrentPosition().str() << endl;
  delete robotC;
  delete robotC_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1236() {
  OUTPUT << "----- Testcase 236 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotC *robotC = new RobotC(3, Position(7, 1), map, criminal);

  Position new_position = robotC->getNextPosition();
  RobotC *robotC_new = new RobotC(4, new_position, map, criminal);
  OUTPUT << robotC_new->getCurrentPosition().str() << endl;
  delete robotC;
  delete robotC_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1237() {
  OUTPUT << "----- Testcase 237 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(2, 3), map, sherlock, watson);
  RobotC *robotC = new RobotC(3, Position(2, 1), map, criminal);
  OUTPUT << "Current: " << robotC->str() << endl;
  Position new_position = robotC->getNextPosition();
  OUTPUT << "Next: " << new_position.str() << endl;
  RobotC *robotC_new = new RobotC(4, new_position, map, criminal);
  delete robotC;
  delete robotC_new;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1238() {
  OUTPUT << "----- Testcase 238 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotC *robotC = new RobotC(3, Position(7, 1), map, criminal);
  OUTPUT << "Current: " << robotC->str() << endl;
  robotC->move();
  OUTPUT << "Next: " << robotC->str() << endl;
  delete robotC;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1239() {
  OUTPUT << "----- Testcase 239 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
  RobotC *robotC = new RobotC(3, Position(7, 1), map, criminal);
  OUTPUT << "Current: " << robotC->str() << endl;
  robotC->move();
  OUTPUT << "Next: " << robotC->str() << endl;
  delete robotC;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1240() {
  OUTPUT << "----- Testcase 240 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(2, 3), map, sherlock, watson);
  RobotC *robotC = new RobotC(3, Position(2, 1), map, criminal);
  OUTPUT << "Current: " << robotC->str() << endl;
  robotC->move();
  OUTPUT << "Next: " << robotC->str() << endl;
  delete robotC;
  delete sherlock;
  delete watson;
  delete criminal;
  delete map;
}

void tc_1247() {
  OUTPUT << "----- Testcase 247 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(10);
  arr_mv_objs->add(sherlock);
  arr_mv_objs->add(watson);
  arr_mv_objs->add(criminal);
  for (int i = 0; i < 2; i++) {
    criminal->move();
  }
  OUTPUT << arr_mv_objs->str() << endl;
  delete sherlock;
  delete watson;
  delete criminal;
  delete arr_mv_objs;
  delete map;
}

void tc_1248() {
  OUTPUT << "----- Testcase 248 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 1), Position(3, 2), Position(2, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(2, 2), map, sherlock, watson);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(10);
  arr_mv_objs->add(sherlock);
  arr_mv_objs->add(watson);
  arr_mv_objs->add(criminal);
  for (int i = 0; i < 2; i++) {
    criminal->move();
  }
  OUTPUT << arr_mv_objs->str() << endl;
  delete sherlock;
  delete watson;
  delete criminal;
  delete arr_mv_objs;
  delete map;
}

void tc_1249() {
  OUTPUT << "----- Testcase 249 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(10);
  arr_mv_objs->add(sherlock);
  arr_mv_objs->add(watson);
  arr_mv_objs->add(criminal);
  for (int i = 0; i < 5; i++) {
    criminal->move();
  }
  OUTPUT << arr_mv_objs->str() << endl;
  delete sherlock;
  delete watson;
  delete criminal;
  delete arr_mv_objs;
  delete map;
}

void tc_1250() {
  OUTPUT << "----- Testcase 250 -----" << endl;
  int num_walls = 3;
  Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
  Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

  ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(10);
  arr_mv_objs->add(sherlock);
  arr_mv_objs->add(watson);
  arr_mv_objs->add(criminal);
  for (int i = 0; i < 8; i++) {
    criminal->move();
  }
  OUTPUT << arr_mv_objs->str() << endl;
  delete sherlock;
  delete watson;
  delete criminal;
  delete arr_mv_objs;
  delete map;
}

void tc_1366() {
  OUTPUT << "----- Testcase 366 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1367() {
  OUTPUT << "----- Testcase 367 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1368() {
  OUTPUT << "----- Testcase 368 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1369() {
  OUTPUT << "----- Testcase 369 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1370() {
  OUTPUT << "----- Testcase 370 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1371() {
  OUTPUT << "----- Testcase 371 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1372() {
  OUTPUT << "----- Testcase 372 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1373() {
  OUTPUT << "----- Testcase 373 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1374() {
  OUTPUT << "----- Testcase 374 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1375() {
  OUTPUT << "----- Testcase 375 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

void tc_1376() {
  OUTPUT << "----- Testcase 376 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = true;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  program->printResult();
  delete program;
}

class TestStudyInPink {
 public:
  TestStudyInPink() = default;

  static void tc_1042();
  static void tc_1043();
  static void tc_1044();
  static void tc_1045();
  static void tc_1046();
  static void tc_1047();
  static void tc_1048();
  static void tc_1049();
  static void tc_1050();
  static void tc_1051();
  static void tc_1052();
  static void tc_1053();

  static void tc_1074();
  static void tc_1075();
  static void tc_1076();
  static void tc_1077();
  static void tc_1078();
  static void tc_1079();
  static void tc_1080();
  static void tc_1081();
  static void tc_1082();
  static void tc_1083();
  static void tc_1084();
  static void tc_1085();
  static void tc_1086();
  static void tc_1087();
  static void tc_1088();
  static void tc_1089();
  static void tc_1090();
  static void tc_1091();
  static void tc_1092();
  static void tc_1093();

  static void tc_1104();
  static void tc_1105();
  static void tc_1106();
  static void tc_1107();
  static void tc_1108();

  static void tc_1126();
  static void tc_1127();
  static void tc_1128();
  static void tc_1129();
  static void tc_1130();
  static void tc_1131();

  static void tc_1148();
  static void tc_1149();
  static void tc_1150();
  static void tc_1151();
  static void tc_1152();

  static void tc_1163();
  static void tc_1164();
  static void tc_1165();
  static void tc_1166();

  static void tc_1269();
  static void tc_1270();
  static void tc_1271();
  static void tc_1272();
  static void tc_1273();
  static void tc_1274();
  static void tc_1275();
  static void tc_1276();
  static void tc_1277();
  static void tc_1278();
  static void tc_1279();
  static void tc_1280();
  static void tc_1281();
  static void tc_1282();
  static void tc_1283();
  static void tc_1284();
  static void tc_1285();
  static void tc_1286();
  static void tc_1287();
  static void tc_1288();
  static void tc_1289();
  static void tc_1290();
  static void tc_1291();
  static void tc_1292();
  static void tc_1293();
  static void tc_1294();
  static void tc_1295();
  static void tc_1296();

  static void tc_1310();
  static void tc_1311();
  static void tc_1312();
  static void tc_1313();
  static void tc_1314();
  static void tc_1315();
  static void tc_1316();
  static void tc_1317();
  static void tc_1318();
  static void tc_1319();
  static void tc_1320();
  static void tc_1321();
  static void tc_1322();

  static void tc_1336();
  static void tc_1337();
  static void tc_1338();
  static void tc_1339();
  static void tc_1340();
  static void tc_1341();
  static void tc_1342();
  static void tc_1343();
  static void tc_1344();
  static void tc_1345();
  static void tc_1346();
  static void tc_1347();
  static void tc_1348();

  static void tc_1349();
  static void tc_1350();
  static void tc_1351();
  static void tc_1352();
  static void tc_1353();
  static void tc_1354();
  static void tc_1355();
  static void tc_1356();
  static void tc_1357();
  static void tc_1358();
  static void tc_1359();
  static void tc_1360();
  static void tc_1361();

  static void tc_1377();
  static void tc_1378();
  static void tc_1379();
  static void tc_1380();
  static void tc_1381();

  /*** Vinh ***/
  static void tc_1174() {
    OUTPUT << "----- Testcase 174 -----" << endl;
    ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(10);
    OUTPUT << "Count: " << arr_mv_objs->count << endl;
    OUTPUT << "Capacity: " << arr_mv_objs->capacity << endl;
    delete arr_mv_objs;
  }

  static void tc_1175() {
    OUTPUT << "----- Testcase 175 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(10);
    arr_mv_objs->add(sherlock);
    OUTPUT << "Count: " << arr_mv_objs->count << endl;
    OUTPUT << "Capacity: " << arr_mv_objs->capacity << endl;
    delete arr_mv_objs;
    delete sherlock;
  }

  static void tc_1176() {
    OUTPUT << "----- Testcase 176 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(3);
    arr_mv_objs->add(criminal);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);
    OUTPUT << "Count: " << arr_mv_objs->count << endl;
    OUTPUT << "Capacity: " << arr_mv_objs->capacity << endl;
    delete arr_mv_objs;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1177() {
    OUTPUT << "----- Testcase 177 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(2);
    arr_mv_objs->add(criminal);
    arr_mv_objs->add(sherlock);
    OUTPUT << "Count: " << arr_mv_objs->count << endl;
    OUTPUT << "Capacity: " << arr_mv_objs->capacity << endl;
    delete arr_mv_objs;
    delete sherlock;
    delete criminal;
    delete map;
  }

  static void tc_1178() {
    OUTPUT << "----- Testcase 178 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

    ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(3);
    arr_mv_objs->add(sherlock);
    OUTPUT << "Count: " << arr_mv_objs->count << endl;
    delete arr_mv_objs;
    delete sherlock;
    delete map;
  }

  static void tc_1179() {
    OUTPUT << "----- Testcase 179 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(2);
    arr_mv_objs->add(criminal);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);
    OUTPUT << "Count: " << arr_mv_objs->count << endl;
    delete arr_mv_objs;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1180() {
    OUTPUT << "----- Testcase 180 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    Sherlock *sherlock_2 = new Sherlock(3, "UUR", Position(1, 3), map, 250, 450);
    Sherlock *sherlock_3 = new Sherlock(4, "RRU", Position(1, 3), map, 250, 450);

    ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(1);
    arr_mv_objs->add(criminal);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(sherlock_2);
    arr_mv_objs->add(sherlock_3);
    arr_mv_objs->add(watson);
    OUTPUT << "Count: " << arr_mv_objs->count << endl;
    delete arr_mv_objs;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1190() {
    OUTPUT << "----- Testcase 190 -----" << endl;
    Configuration *config = new Configuration("./configs/181.txt");
    OUTPUT << "Map Num Rows: " << config->map_num_rows << endl;
    OUTPUT << "Map Num Cols: " << config->map_num_cols << endl;
    OUTPUT << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
    OUTPUT << "Num Wall: " << config->num_walls << endl;
    if (config->num_walls != 0) {
      OUTPUT << "Array Wall: " << config->arr_walls->str() << endl;
    }
    OUTPUT << "Num Fake Wall: " << config->num_fake_walls << endl;
    if (config->num_fake_walls != 0) {
      OUTPUT << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
    }
    OUTPUT << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
    OUTPUT << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
    OUTPUT << "Sherlock init hp: " << config->sherlock_init_hp << endl;
    OUTPUT << "Sherlock init exp: " << config->sherlock_init_exp << endl;
    OUTPUT << "Watson Moving Rule: " << config->watson_moving_rule << endl;
    OUTPUT << "Watson init position: " << config->watson_init_pos.str() << endl;
    OUTPUT << "Watson init hp: " << config->watson_init_hp << endl;
    OUTPUT << "Watson init exp: " << config->watson_init_exp << endl;
    OUTPUT << "Criminal init position: " << config->criminal_init_pos.str() << endl;
    OUTPUT << "Number step: " << config->num_steps << endl;
    delete config;
  }

  static void tc_1191() {
    OUTPUT << "----- Testcase 191 -----" << endl;
    Configuration *config = new Configuration("./configs/181.txt");
    OUTPUT << "Map Num Rows: " << config->map_num_rows << endl;
    OUTPUT << "Map Num Cols: " << config->map_num_cols << endl;
    OUTPUT << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
    OUTPUT << "Num Wall: " << config->num_walls << endl;
    if (config->num_walls != 0) {
      OUTPUT << "Array Wall: " << config->arr_walls->str() << endl;
    }
    OUTPUT << "Num Fake Wall: " << config->num_fake_walls << endl;
    if (config->num_fake_walls != 0) {
      OUTPUT << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
    }
    OUTPUT << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
    OUTPUT << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
    OUTPUT << "Sherlock init hp: " << config->sherlock_init_hp << endl;
    OUTPUT << "Sherlock init exp: " << config->sherlock_init_exp << endl;
    OUTPUT << "Watson Moving Rule: " << config->watson_moving_rule << endl;
    OUTPUT << "Watson init position: " << config->watson_init_pos.str() << endl;
    OUTPUT << "Watson init hp: " << config->watson_init_hp << endl;
    OUTPUT << "Watson init exp: " << config->watson_init_exp << endl;
    OUTPUT << "Criminal init position: " << config->criminal_init_pos.str() << endl;
    OUTPUT << "Number step: " << config->num_steps << endl;
    delete config;
  }

  static void tc_1192() {
    OUTPUT << "----- Testcase 192 -----" << endl;
    Configuration *config = new Configuration("./configs/181.txt");
    OUTPUT << "Map Num Rows: " << config->map_num_rows << endl;
    OUTPUT << "Map Num Cols: " << config->map_num_cols << endl;
    OUTPUT << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
    OUTPUT << "Num Wall: " << config->num_walls << endl;
    if (config->num_walls != 0) {
      OUTPUT << "Array Wall: " << config->arr_walls->str() << endl;
    }
    OUTPUT << "Num Fake Wall: " << config->num_fake_walls << endl;
    if (config->num_fake_walls != 0) {
      OUTPUT << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
    }
    OUTPUT << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
    OUTPUT << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
    OUTPUT << "Sherlock init hp: " << config->sherlock_init_hp << endl;
    OUTPUT << "Sherlock init exp: " << config->sherlock_init_exp << endl;
    OUTPUT << "Watson Moving Rule: " << config->watson_moving_rule << endl;
    OUTPUT << "Watson init position: " << config->watson_init_pos.str() << endl;
    OUTPUT << "Watson init hp: " << config->watson_init_hp << endl;
    OUTPUT << "Watson init exp: " << config->watson_init_exp << endl;
    OUTPUT << "Criminal init position: " << config->criminal_init_pos.str() << endl;
    OUTPUT << "Number step: " << config->num_steps << endl;
    delete config;
  }

  static void tc_1193() {
    OUTPUT << "----- Testcase 193 -----" << endl;
    Configuration *config = new Configuration("./configs/181.txt");
    OUTPUT << "Map Num Rows: " << config->map_num_rows << endl;
    OUTPUT << "Map Num Cols: " << config->map_num_cols << endl;
    OUTPUT << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
    OUTPUT << "Num Wall: " << config->num_walls << endl;
    if (config->num_walls != 0) {
      OUTPUT << "Array Wall: " << config->arr_walls->str() << endl;
    }
    OUTPUT << "Num Fake Wall: " << config->num_fake_walls << endl;
    if (config->num_fake_walls != 0) {
      OUTPUT << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
    }
    OUTPUT << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
    OUTPUT << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
    OUTPUT << "Sherlock init hp: " << config->sherlock_init_hp << endl;
    OUTPUT << "Sherlock init exp: " << config->sherlock_init_exp << endl;
    OUTPUT << "Watson Moving Rule: " << config->watson_moving_rule << endl;
    OUTPUT << "Watson init position: " << config->watson_init_pos.str() << endl;
    OUTPUT << "Watson init hp: " << config->watson_init_hp << endl;
    OUTPUT << "Watson init exp: " << config->watson_init_exp << endl;
    OUTPUT << "Criminal init position: " << config->criminal_init_pos.str() << endl;
    OUTPUT << "Number step: " << config->num_steps << endl;
    delete config;
  }

  static void tc_1194() {
    OUTPUT << "----- Testcase 194 -----" << endl;
    Configuration *config = new Configuration("./configs/181.txt");
    OUTPUT << "Map Num Rows: " << config->map_num_rows << endl;
    OUTPUT << "Map Num Cols: " << config->map_num_cols << endl;
    OUTPUT << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
    OUTPUT << "Num Wall: " << config->num_walls << endl;
    if (config->num_walls != 0) {
      OUTPUT << "Array Wall: " << config->arr_walls->str() << endl;
    }
    OUTPUT << "Num Fake Wall: " << config->num_fake_walls << endl;
    if (config->num_fake_walls != 0) {
      OUTPUT << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
    }
    OUTPUT << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
    OUTPUT << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
    OUTPUT << "Sherlock init hp: " << config->sherlock_init_hp << endl;
    OUTPUT << "Sherlock init exp: " << config->sherlock_init_exp << endl;
    OUTPUT << "Watson Moving Rule: " << config->watson_moving_rule << endl;
    OUTPUT << "Watson init position: " << config->watson_init_pos.str() << endl;
    OUTPUT << "Watson init hp: " << config->watson_init_hp << endl;
    OUTPUT << "Watson init exp: " << config->watson_init_exp << endl;
    OUTPUT << "Criminal init position: " << config->criminal_init_pos.str() << endl;
    OUTPUT << "Number step: " << config->num_steps << endl;
    delete config;
  }

  static void tc_1195() {
    OUTPUT << "----- Testcase 195 -----" << endl;
    Configuration *config = new Configuration("./configs/181.txt");
    OUTPUT << "Map Num Rows: " << config->map_num_rows << endl;
    OUTPUT << "Map Num Cols: " << config->map_num_cols << endl;
    OUTPUT << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
    OUTPUT << "Num Wall: " << config->num_walls << endl;
    if (config->num_walls != 0) {
      OUTPUT << "Array Wall: " << config->arr_walls->str() << endl;
    }
    OUTPUT << "Num Fake Wall: " << config->num_fake_walls << endl;
    if (config->num_fake_walls != 0) {
      OUTPUT << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
    }
    OUTPUT << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
    OUTPUT << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
    OUTPUT << "Sherlock init hp: " << config->sherlock_init_hp << endl;
    OUTPUT << "Sherlock init exp: " << config->sherlock_init_exp << endl;
    OUTPUT << "Watson Moving Rule: " << config->watson_moving_rule << endl;
    OUTPUT << "Watson init position: " << config->watson_init_pos.str() << endl;
    OUTPUT << "Watson init hp: " << config->watson_init_hp << endl;
    OUTPUT << "Watson init exp: " << config->watson_init_exp << endl;
    OUTPUT << "Criminal init position: " << config->criminal_init_pos.str() << endl;
    OUTPUT << "Number step: " << config->num_steps << endl;
    delete config;
  }

  static void tc_1196() {
    OUTPUT << "----- Testcase 196 -----" << endl;
    Configuration *config = new Configuration("./configs/181.txt");
    OUTPUT << "Map Num Rows: " << config->map_num_rows << endl;
    OUTPUT << "Map Num Cols: " << config->map_num_cols << endl;
    OUTPUT << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
    OUTPUT << "Num Wall: " << config->num_walls << endl;
    if (config->num_walls != 0) {
      OUTPUT << "Array Wall: " << config->arr_walls->str() << endl;
    }
    OUTPUT << "Num Fake Wall: " << config->num_fake_walls << endl;
    if (config->num_fake_walls != 0) {
      OUTPUT << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
    }
    OUTPUT << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
    OUTPUT << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
    OUTPUT << "Sherlock init hp: " << config->sherlock_init_hp << endl;
    OUTPUT << "Sherlock init exp: " << config->sherlock_init_exp << endl;
    OUTPUT << "Watson Moving Rule: " << config->watson_moving_rule << endl;
    OUTPUT << "Watson init position: " << config->watson_init_pos.str() << endl;
    OUTPUT << "Watson init hp: " << config->watson_init_hp << endl;
    OUTPUT << "Watson init exp: " << config->watson_init_exp << endl;
    OUTPUT << "Criminal init position: " << config->criminal_init_pos.str() << endl;
    OUTPUT << "Number step: " << config->num_steps << endl;
    delete config;
  }

  static void tc_1197() {
    OUTPUT << "----- Testcase 197 -----" << endl;
    Configuration *config = new Configuration("./configs/181.txt");
    OUTPUT << "Map Num Rows: " << config->map_num_rows << endl;
    OUTPUT << "Map Num Cols: " << config->map_num_cols << endl;
    OUTPUT << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
    OUTPUT << "Num Wall: " << config->num_walls << endl;
    if (config->num_walls != 0) {
      OUTPUT << "Array Wall: " << config->arr_walls->str() << endl;
    }
    OUTPUT << "Num Fake Wall: " << config->num_fake_walls << endl;
    if (config->num_fake_walls != 0) {
      OUTPUT << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
    }
    OUTPUT << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
    OUTPUT << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
    OUTPUT << "Sherlock init hp: " << config->sherlock_init_hp << endl;
    OUTPUT << "Sherlock init exp: " << config->sherlock_init_exp << endl;
    OUTPUT << "Watson Moving Rule: " << config->watson_moving_rule << endl;
    OUTPUT << "Watson init position: " << config->watson_init_pos.str() << endl;
    OUTPUT << "Watson init hp: " << config->watson_init_hp << endl;
    OUTPUT << "Watson init exp: " << config->watson_init_exp << endl;
    OUTPUT << "Criminal init position: " << config->criminal_init_pos.str() << endl;
    OUTPUT << "Number step: " << config->num_steps << endl;
    delete config;
  }

  static void tc_1198() {
    OUTPUT << "----- Testcase 198 -----" << endl;
    Configuration *config = new Configuration("./configs/181.txt");
    OUTPUT << "Map Num Rows: " << config->map_num_rows << endl;
    OUTPUT << "Map Num Cols: " << config->map_num_cols << endl;
    OUTPUT << "Max Num Moving Objects: " << config->max_num_moving_objects << endl;
    OUTPUT << "Num Wall: " << config->num_walls << endl;
    if (config->num_walls != 0) {
      OUTPUT << "Array Wall: " << config->arr_walls->str() << endl;
    }
    OUTPUT << "Num Fake Wall: " << config->num_fake_walls << endl;
    if (config->num_fake_walls != 0) {
      OUTPUT << "Array Fake Wall: " << config->arr_fake_walls->str() << endl;
    }
    OUTPUT << "Shelock Moving Rule: " << config->sherlock_moving_rule << endl;
    OUTPUT << "Sherlock init position: " << config->sherlock_init_pos.str() << endl;
    OUTPUT << "Sherlock init hp: " << config->sherlock_init_hp << endl;
    OUTPUT << "Sherlock init exp: " << config->sherlock_init_exp << endl;
    OUTPUT << "Watson Moving Rule: " << config->watson_moving_rule << endl;
    OUTPUT << "Watson init position: " << config->watson_init_pos.str() << endl;
    OUTPUT << "Watson init hp: " << config->watson_init_hp << endl;
    OUTPUT << "Watson init exp: " << config->watson_init_exp << endl;
    OUTPUT << "Criminal init position: " << config->criminal_init_pos.str() << endl;
    OUTPUT << "Number step: " << config->num_steps << endl;
    delete config;
  }

  static void tc_1205() {
    OUTPUT << "----- Testcase 205 -----" << endl;
    int num_walls = 5;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(3, 2), Position(4, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS *robotS = new RobotS(3, Position(3, 3), map, criminal, sherlock);
    int distance_old = robotS->getDistance();

    Position new_position = robotS->getNextPosition();
    RobotS *robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
    int distance_new = robotS->getDistance();
    OUTPUT << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotS_new->pos.getRow() << " " << robotS_new->pos.getCol() << endl;
    if (distance_old - distance_new >= 0)
      OUTPUT << "Can get close";
    else
      OUTPUT << "Can not get close";
    delete robotS;
    delete robotS_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1206() {
    OUTPUT << "----- Testcase 206 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS *robotS = new RobotS(3, Position(3, 3), map, criminal, sherlock);
    int distance_old = robotS->getDistance();
    Position new_position = robotS->getNextPosition();
    RobotS *robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
    OUTPUT << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotS_new->pos.getRow() << " " << robotS_new->pos.getCol() << endl;
    delete robotS;
    delete robotS_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1207() {
    OUTPUT << "----- Testcase 207 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(3, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS *robotS = new RobotS(3, Position(3, 2), map, criminal, sherlock);
    int distance_old = robotS->getDistance();

    Position new_position = robotS->getNextPosition();
    RobotS *robotS_new = new RobotS(4, new_position, map, criminal, sherlock);
    int distance_new = robotS->getDistance();
    OUTPUT << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotS_new->pos.getRow() << " " << robotS_new->pos.getCol() << endl;
    if (distance_old - distance_new >= 0)
      OUTPUT << "Can get close";
    else
      OUTPUT << "Can not get close";
    delete robotS;
    delete robotS_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1208() {
    OUTPUT << "----- Testcase 208 -----" << endl;
    int num_walls = 5;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(3, 2), Position(4, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS *robotS = new RobotS(3, Position(3, 3), map, criminal, sherlock);
    OUTPUT << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
    robotS->move();
    OUTPUT << "Next position: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
    delete robotS;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1209() {
    OUTPUT << "----- Testcase 209 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS *robotS = new RobotS(3, Position(3, 3), map, criminal, sherlock);
    OUTPUT << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
    robotS->move();
    OUTPUT << "Next position: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
    delete robotS;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1210() {
    OUTPUT << "----- Testcase 210 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(2, 3), Position(3, 3), Position(4, 3)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(3, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);
    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotS *robotS = new RobotS(3, Position(3, 2), map, criminal, sherlock);
    OUTPUT << "Current: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
    robotS->move();
    OUTPUT << "Next position: " << robotS->pos.getRow() << " " << robotS->pos.getCol() << endl;
    delete robotS;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1217() {
    OUTPUT << "----- Testcase 217 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW *robotW = new RobotW(3, Position(7, 1), map, criminal, watson);
    int distance_old = robotW->getDistance();

    Position new_position = robotW->getNextPosition();
    RobotW *robotW_new = new RobotW(4, new_position, map, criminal, watson);
    int distance_new = robotW->getDistance();
    OUTPUT << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotW_new->pos.getRow() << " " << robotW_new->pos.getCol() << endl;
    if (distance_old - distance_new >= 0)
      OUTPUT << "Can get close";
    else
      OUTPUT << "Can not get close";
    delete robotW;
    delete robotW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1218() {
    OUTPUT << "----- Testcase 218 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW *robotW = new RobotW(3, Position(2, 2), map, criminal, watson);
    int distance_old = robotW->getDistance();

    Position new_position = robotW->getNextPosition();
    RobotW *robotW_new = new RobotW(4, new_position, map, criminal, watson);
    int distance_new = robotW->getDistance();
    OUTPUT << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotW_new->pos.getRow() << " " << robotW_new->pos.getCol() << endl;
    if (distance_old - distance_new >= 0)
      OUTPUT << "Can get close";
    else
      OUTPUT << "Can not get close";
    delete robotW;
    delete robotW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1219() {
    OUTPUT << "----- Testcase 219 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW *robotW = new RobotW(3, Position(2, 1), map, criminal, watson);
    int distance_old = robotW->getDistance();

    Position new_position = robotW->getNextPosition();
    RobotW *robotW_new = new RobotW(4, new_position, map, criminal, watson);
    int distance_new = robotW->getDistance();
    OUTPUT << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotW_new->pos.getRow() << " " << robotW_new->pos.getCol() << endl;
    if (distance_old - distance_new >= 0)
      OUTPUT << "Can get close";
    else
      OUTPUT << "Can not get close";
    delete robotW;
    delete robotW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1220() {
    OUTPUT << "----- Testcase 220 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW *robotW = new RobotW(3, Position(7, 1), map, criminal, watson);
    OUTPUT << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
    robotW->move();
    OUTPUT << "Next position: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
    delete robotW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1221() {
    OUTPUT << "----- Testcase 221 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW *robotW = new RobotW(3, Position(2, 2), map, criminal, watson);
    OUTPUT << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
    robotW->move();
    OUTPUT << "Next position: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
    delete robotW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1222() {
    OUTPUT << "----- Testcase 222 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotW *robotW = new RobotW(3, Position(2, 1), map, criminal, watson);
    OUTPUT << "Current: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
    robotW->move();
    OUTPUT << "Next position: " << robotW->pos.getRow() << " " << robotW->pos.getCol() << endl;
    delete robotW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1229() {
    OUTPUT << "----- Testcase 229 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW *robotSW = new RobotSW(3, Position(7, 1), map, criminal, sherlock, watson);
    int distance_old = robotSW->getDistance();

    Position new_position = robotSW->getNextPosition();
    RobotSW *robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
    int distance_new = robotSW->getDistance();
    OUTPUT << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotSW_new->pos.getRow() << " " << robotSW_new->pos.getCol() << endl;
    if (distance_old - distance_new >= 0)
      OUTPUT << "Can get close";
    else
      OUTPUT << "Can not get close";
    delete robotSW;
    delete robotSW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1230() {
    OUTPUT << "----- Testcase 230 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW *robotSW = new RobotSW(3, Position(2, 2), map, criminal, sherlock, watson);
    int distance_old = robotSW->getDistance();

    Position new_position = robotSW->getNextPosition();
    RobotSW *robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
    int distance_new = robotSW->getDistance();
    OUTPUT << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotSW_new->pos.getRow() << " " << robotSW_new->pos.getCol() << endl;
    if (distance_old - distance_new >= 0)
      OUTPUT << "Can get close";
    else
      OUTPUT << "Can not get close";
    delete robotSW;
    delete robotSW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1231() {
    OUTPUT << "----- Testcase 231 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW *robotSW = new RobotSW(3, Position(2, 1), map, criminal, sherlock, watson);
    int distance_old = robotSW->getDistance();

    Position new_position = robotSW->getNextPosition();
    RobotSW *robotSW_new = new RobotSW(4, new_position, map, criminal, sherlock, watson);
    int distance_new = robotSW->getDistance();
    OUTPUT << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotSW_new->pos.getRow() << " " << robotSW_new->pos.getCol() << endl;
    if (distance_old - distance_new >= 0)
      OUTPUT << "Can get close";
    else
      OUTPUT << "Can not get close";
    delete robotSW;
    delete robotSW_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1232() {
    OUTPUT << "----- Testcase 232 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW *robotSW = new RobotSW(3, Position(7, 1), map, criminal, sherlock, watson);
    OUTPUT << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
    robotSW->move();
    OUTPUT << "Next position: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
    delete robotSW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1233() {
    OUTPUT << "----- Testcase 233 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW *robotSW = new RobotSW(3, Position(2, 2), map, criminal, sherlock, watson);
    OUTPUT << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
    robotSW->move();
    OUTPUT << "Next position: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
    delete robotSW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1234() {
    OUTPUT << "----- Testcase 234 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotSW *robotSW = new RobotSW(3, Position(2, 1), map, criminal, sherlock, watson);
    OUTPUT << "Current: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
    robotSW->move();
    OUTPUT << "Next position: " << robotSW->pos.getRow() << " " << robotSW->pos.getCol() << endl;
    delete robotSW;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1241() {
    OUTPUT << "----- Testcase 241 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotC *robotC = new RobotC(3, Position(7, 1), map, criminal);

    Position new_position = robotC->getNextPosition();
    RobotC *robotC_new = new RobotC(4, new_position, map, criminal);
    OUTPUT << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotC_new->pos.getRow() << " " << robotC_new->pos.getCol() << endl;
    delete robotC;
    delete robotC_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1242() {
    OUTPUT << "----- Testcase 242 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotC *robotC = new RobotC(3, Position(7, 1), map, criminal);

    Position new_position = robotC->getNextPosition();
    RobotC *robotC_new = new RobotC(4, new_position, map, criminal);
    OUTPUT << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotC_new->pos.getRow() << " " << robotC_new->pos.getCol() << endl;
    delete robotC;
    delete robotC_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1243() {
    OUTPUT << "----- Testcase 243 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(2, 3), map, sherlock, watson);
    RobotC *robotC = new RobotC(3, Position(2, 1), map, criminal);
    // int distance_old = robotC->getDistance();

    Position new_position = robotC->getNextPosition();
    RobotC *robotC_new = new RobotC(4, new_position, map, criminal);
    // int distance_new = robotC->getDistance();

    OUTPUT << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
    OUTPUT << "Next position: " << robotC_new->pos.getRow() << " " << robotC_new->pos.getCol() << endl;

    // if(distance_old - distance_new >= 0) OUTPUT << "Can get close";
    // else OUTPUT << "Can not get close";

    delete robotC;
    delete robotC_new;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1244() {
    OUTPUT << "----- Testcase 244 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(7, 0), Position(6, 1), Position(8, 1), Position(7, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotC *robotC = new RobotC(3, Position(7, 1), map, criminal);
    OUTPUT << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
    robotC->move();
    OUTPUT << "Next position: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
    delete robotC;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1245() {
    OUTPUT << "----- Testcase 245 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(1, 3), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);
    RobotC *robotC = new RobotC(3, Position(7, 1), map, criminal);
    OUTPUT << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
    robotC->move();
    OUTPUT << "Next position: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
    delete robotC;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1246() {
    OUTPUT << "----- Testcase 246 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(2, 3), map, sherlock, watson);
    RobotC *robotC = new RobotC(3, Position(2, 1), map, criminal);
    OUTPUT << "Current: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
    robotC->move();
    OUTPUT << "Next position: " << robotC->pos.getRow() << " " << robotC->pos.getCol() << endl;
    delete robotC;
    delete sherlock;
    delete watson;
    delete criminal;
    delete map;
  }

  static void tc_1251() {
    OUTPUT << "----- Testcase 251 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

    ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(10);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);
    arr_mv_objs->add(criminal);
    for (int i = 0; i < arr_mv_objs->count; i++) {
      arr_mv_objs->arr_mv_objs[i]->move();
    }
    delete sherlock;
    delete watson;
    delete criminal;
    delete arr_mv_objs;
    delete map;
  }

  static void tc_1252() {
    OUTPUT << "----- Testcase 252 -----" << endl;
    int num_walls = 3;
    Position arr_walls[] = {Position(1, 2), Position(2, 2), Position(3, 2)};
    int num_fake_walls = 1;
    Position arr_fake_walls[] = {Position(2, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(2, 4), map, 250, 450);
    Watson *watson = new Watson(2, "LU", Position(2, 5), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(5, 6), map, sherlock, watson);

    ArrayMovingObject *arr_mv_objs = new ArrayMovingObject(10);
    arr_mv_objs->add(sherlock);
    arr_mv_objs->add(watson);
    arr_mv_objs->add(criminal);
    for (int i = 0; i < 5; i++) {
      criminal->move();
    }
    for (int i = 0; i < arr_mv_objs->count; i++) {
      arr_mv_objs->arr_mv_objs[i]->move();
    }
    delete sherlock;
    delete watson;
    delete criminal;
    delete arr_mv_objs;
    delete map;
  }

  static void tc_1253() {
    OUTPUT << "----- Testcase 253 -----" << endl;
    BaseItem *magicBook = new MagicBook();
    delete magicBook;
  }

  static void tc_1254() {
    OUTPUT << "----- Testcase 254 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    BaseItem *magicBook = new MagicBook();
    magicBook->canUse(criminal, NULL);
    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete magicBook;
  }

  static void tc_1255() {
    OUTPUT << "----- Testcase 255 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

    BaseItem *magicBook = new MagicBook();
    magicBook->canUse(sherlock, NULL);
    delete map;
    delete sherlock;
    delete magicBook;
  }

  static void tc_1256() {
    OUTPUT << "----- Testcase 256 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

    BaseItem *magicBook = new MagicBook();

    BaseBag *sherlockBag = new SherlockBag(sherlock);
    sherlockBag->insert(magicBook);
    magicBook->canUse(sherlock, NULL);
    delete map;
    delete sherlock;
    delete magicBook;
    delete sherlockBag;
  }

  static void tc_1257() {
    OUTPUT << "----- Testcase 257 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    BaseItem *magicBook = new MagicBook();
    magicBook->canUse(watson, NULL);
    delete map;
    delete watson;
    delete magicBook;
  }

  static void tc_1258() {
    OUTPUT << "----- Testcase 258 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    BaseItem *magicBook = new MagicBook();

    BaseBag *watsonBag = new WatsonBag(watson);
    watsonBag->insert(magicBook);
    magicBook->canUse(watson, NULL);
    delete map;
    delete watson;
    delete magicBook;
    delete watsonBag;
  }

  static void tc_1259() {
    OUTPUT << "----- Testcase 259 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

    BaseItem *magicBook = new MagicBook();

    BaseBag *sherlockBag = new SherlockBag(sherlock);
    sherlockBag->insert(magicBook);
    magicBook->use(sherlock, NULL);
    delete map;
    delete sherlock;
    delete magicBook;
    delete sherlockBag;
  }

  static void tc_1260() {
    OUTPUT << "----- Testcase 260 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    BaseItem *magicBook = new MagicBook();

    BaseBag *watsonBag = new WatsonBag(watson);
    watsonBag->insert(magicBook);
    magicBook->use(watson, NULL);
    delete map;
    delete watson;
    delete magicBook;
    delete watsonBag;
  }

  static void tc_1261() {
    OUTPUT << "----- Testcase 261 -----" << endl;
    BaseItem *energyDink = new EnergyDrink();
    delete energyDink;
  }

  static void tc_1262() {
    OUTPUT << "----- Testcase 262 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

    BaseItem *energyDink = new EnergyDrink();
    energyDink->canUse(criminal, NULL);
    delete map;
    delete sherlock;
    delete watson;
    delete criminal;
    delete energyDink;
  }

  static void tc_1263() {
    OUTPUT << "----- Testcase 263 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

    BaseItem *energyDink = new EnergyDrink();
    energyDink->canUse(sherlock, NULL);
    delete map;
    delete sherlock;
    delete energyDink;
  }

  static void tc_1264() {
    OUTPUT << "----- Testcase 264 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

    BaseItem *energyDink = new EnergyDrink();

    BaseBag *sherlockBag = new SherlockBag(sherlock);
    sherlockBag->insert(energyDink);
    energyDink->canUse(sherlock, NULL);
    delete map;
    delete sherlock;
    delete energyDink;
    delete sherlockBag;
  }

  static void tc_1265() {
    OUTPUT << "----- Testcase 265 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    BaseItem *energyDink = new EnergyDrink();
    energyDink->canUse(watson, NULL);
    delete map;
    delete watson;
    delete energyDink;
  }

  static void tc_1266() {
    OUTPUT << "----- Testcase 266 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    BaseItem *energyDink = new EnergyDrink();

    BaseBag *watsonBag = new WatsonBag(watson);
    watsonBag->insert(energyDink);
    energyDink->canUse(watson, NULL);
    delete map;
    delete watson;
    delete energyDink;
    delete watsonBag;
  }

  static void tc_1267() {
    OUTPUT << "----- Testcase 267 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

    BaseItem *energyDink = new EnergyDrink();

    BaseBag *sherlockBag = new SherlockBag(sherlock);
    sherlockBag->insert(energyDink);
    energyDink->use(sherlock, NULL);
    delete map;
    delete sherlock;
    delete energyDink;
    delete sherlockBag;
  }

  static void tc_1268() {
    OUTPUT << "----- Testcase 268 -----" << endl;
    int num_walls = 4;
    Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
    int num_fake_walls = 2;
    Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

    Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

    Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

    BaseItem *energyDink = new EnergyDrink();

    BaseBag *watsonBag = new WatsonBag(watson);
    watsonBag->insert(energyDink);
    energyDink->use(watson, NULL);
    delete map;
    delete watson;
    delete energyDink;
    delete watsonBag;
  }

  static void tc_1001() {
    ::tc_1001();
  }
  static void tc_1002() {
    ::tc_1002();
  }
  static void tc_1003() {
    ::tc_1003();
  }
  static void tc_1004() {
    ::tc_1004();
  }
  static void tc_1005() {
    ::tc_1005();
  }
  static void tc_1006() {
    ::tc_1006();
  }

  static void tc_1007() {
    ::tc_1007();
  }

  static void tc_1008() {
    ::tc_1008();
  }

  static void tc_1009() {
    ::tc_1009();
  }

  static void tc_1010() {
    ::tc_1010();
  }

  static void tc_1011() {
    ::tc_1011();
  }

  static void tc_1012() {
    ::tc_1012();
  }

  static void tc_1013() {
    ::tc_1013();
  }

  static void tc_1014() {
    ::tc_1014();
  }

  static void tc_1015() {
    ::tc_1015();
  }

  static void tc_1016() {
    ::tc_1016();
  }

  static void tc_1017() {
    ::tc_1017();
  }

  static void tc_1018() {
    ::tc_1018();
  }

  static void tc_1019() {
    ::tc_1019();
  }

  static void tc_1020() {
    ::tc_1020();
  }

  static void tc_1021() {
    ::tc_1021();
  }

  static void tc_1022() {
    ::tc_1022();
  }

  static void tc_1023() {
    ::tc_1023();
  }

  static void tc_1024() {
    ::tc_1024();
  }

  static void tc_1025() {
    ::tc_1025();
  }

  static void tc_1026() {
    ::tc_1026();
  }

  static void tc_1027() {
    ::tc_1027();
  }

  static void tc_1028() {
    ::tc_1028();
  }

  static void tc_1029() {
    ::tc_1029();
  }

  static void tc_1030() {
    ::tc_1030();
  }

  static void tc_1031() {
    ::tc_1031();
  }

  static void tc_1032() {
    ::tc_1032();
  }

  static void tc_1033() {
    ::tc_1033();
  }

  static void tc_1034() {
    ::tc_1034();
  }

  static void tc_1035() {
    ::tc_1035();
  }

  static void tc_1036() {
    ::tc_1036();
  }

  static void tc_1037() {
    ::tc_1037();
  }

  static void tc_1038() {
    ::tc_1038();
  }

  static void tc_1039() {
    ::tc_1039();
  }

  static void tc_1040() {
    ::tc_1040();
  }

  static void tc_1041() {
    ::tc_1041();
  }

  static void tc_1054() {
    ::tc_1054();
  }

  static void tc_1055() {
    ::tc_1055();
  }

  static void tc_1056() {
    ::tc_1056();
  }

  static void tc_1057() {
    ::tc_1057();
  }

  static void tc_1058() {
    ::tc_1058();
  }

  static void tc_1059() {
    ::tc_1059();
  }

  static void tc_1060() {
    ::tc_1060();
  }

  static void tc_1061() {
    ::tc_1061();
  }

  static void tc_1062() {
    ::tc_1062();
  }

  static void tc_1063() {
    ::tc_1063();
  }

  static void tc_1064() {
    ::tc_1064();
  }

  static void tc_1065() {
    ::tc_1065();
  }

  static void tc_1066() {
    ::tc_1066();
  }

  static void tc_1067() {
    ::tc_1067();
  }

  static void tc_1068() {
    ::tc_1068();
  }

  static void tc_1069() {
    ::tc_1069();
  }

  static void tc_1070() {
    ::tc_1070();
  }

  static void tc_1071() {
    ::tc_1071();
  }

  static void tc_1072() {
    ::tc_1072();
  }

  static void tc_1073() {
    ::tc_1073();
  }

  static void tc_1094() {
    ::tc_1094();
  }

  static void tc_1095() {
    ::tc_1095();
  }

  static void tc_1096() {
    ::tc_1096();
  }

  static void tc_1097() {
    ::tc_1097();
  }

  static void tc_1098() {
    ::tc_1098();
  }

  static void tc_1099() {
    ::tc_1099();
  }

  static void tc_1100() {
    ::tc_1100();
  }

  static void tc_1101() {
    ::tc_1101();
  }

  static void tc_1102() {
    ::tc_1102();
  }

  static void tc_1103() {
    ::tc_1103();
  }

  static void tc_1109() {
    ::tc_1109();
  }

  static void tc_1110() {
    ::tc_1110();
  }

  static void tc_1111() {
    ::tc_1111();
  }

  static void tc_1112() {
    ::tc_1112();
  }

  static void tc_1113() {
    ::tc_1113();
  }

  static void tc_1114() {
    ::tc_1114();
  }

  static void tc_1115() {
    ::tc_1115();
  }

  static void tc_1116() {
    ::tc_1116();
  }

  static void tc_1117() {
    ::tc_1117();
  }

  static void tc_1118() {
    ::tc_1118();
  }

  static void tc_1119() {
    ::tc_1119();
  }

  static void tc_1120() {
    ::tc_1120();
  }

  static void tc_1121() {
    ::tc_1121();
  }

  static void tc_1122() {
    ::tc_1122();
  }

  static void tc_1123() {
    ::tc_1123();
  }

  static void tc_1124() {
    ::tc_1124();
  }

  static void tc_1125() {
    ::tc_1125();
  }

  static void tc_1132() {
    ::tc_1132();
  }

  static void tc_1133() {
    ::tc_1133();
  }

  static void tc_1134() {
    ::tc_1134();
  }

  static void tc_1135() {
    ::tc_1135();
  }

  static void tc_1136() {
    ::tc_1136();
  }

  static void tc_1137() {
    ::tc_1137();
  }

  static void tc_1138() {
    ::tc_1138();
  }

  static void tc_1139() {
    ::tc_1139();
  }

  static void tc_1140() {
    ::tc_1140();
  }

  static void tc_1141() {
    ::tc_1141();
  }

  static void tc_1142() {
    ::tc_1142();
  }

  static void tc_1143() {
    ::tc_1143();
  }

  static void tc_1144() {
    ::tc_1144();
  }

  static void tc_1145() {
    ::tc_1145();
  }

  static void tc_1146() {
    ::tc_1146();
  }

  static void tc_1147() {
    ::tc_1147();
  }

  static void tc_1153() {
    ::tc_1153();
  }

  static void tc_1154() {
    ::tc_1154();
  }

  static void tc_1155() {
    ::tc_1155();
  }

  static void tc_1156() {
    ::tc_1156();
  }

  static void tc_1157() {
    ::tc_1157();
  }

  static void tc_1158() {
    ::tc_1158();
  }

  static void tc_1159() {
    ::tc_1159();
  }

  static void tc_1160() {
    ::tc_1160();
  }

  static void tc_1161() {
    ::tc_1161();
  }

  static void tc_1162() {
    ::tc_1162();
  }

  static void tc_1167() {
    ::tc_1167();
  }

  static void tc_1168() {
    ::tc_1168();
  }

  static void tc_1169() {
    ::tc_1169();
  }

  static void tc_1170() {
    ::tc_1170();
  }

  static void tc_1171() {
    ::tc_1171();
  }

  static void tc_1172() {
    ::tc_1172();
  }

  static void tc_1173() {
    ::tc_1173();
  }

  static void tc_1181() {
    ::tc_1181();
  }

  static void tc_1182() {
    ::tc_1182();
  }

  static void tc_1183() {
    ::tc_1183();
  }

  static void tc_1184() {
    ::tc_1184();
  }

  static void tc_1185() {
    ::tc_1185();
  }

  static void tc_1186() {
    ::tc_1186();
  }

  static void tc_1187() {
    ::tc_1187();
  }

  static void tc_1188() {
    ::tc_1188();
  }

  static void tc_1189() {
    ::tc_1189();
  }

  static void tc_1211() {
    ::tc_1211();
  }

  static void tc_1212() {
    ::tc_1212();
  }

  static void tc_1213() {
    ::tc_1213();
  }

  static void tc_1214() {
    ::tc_1214();
  }

  static void tc_1215() {
    ::tc_1215();
  }

  static void tc_1216() {
    ::tc_1216();
  }

  static void tc_1223() {
    ::tc_1223();
  }

  static void tc_1224() {
    ::tc_1224();
  }

  static void tc_1225() {
    ::tc_1225();
  }

  static void tc_1226() {
    ::tc_1226();
  }

  static void tc_1227() {
    ::tc_1227();
  }

  static void tc_1228() {
    ::tc_1228();
  }

  static void tc_1235() {
    ::tc_1235();
  }

  static void tc_1236() {
    ::tc_1236();
  }

  static void tc_1237() {
    ::tc_1237();
  }

  static void tc_1238() {
    ::tc_1238();
  }

  static void tc_1239() {
    ::tc_1239();
  }

  static void tc_1240() {
    ::tc_1240();
  }

  static void tc_1247() {
    ::tc_1247();
  }

  static void tc_1248() {
    ::tc_1248();
  }

  static void tc_1249() {
    ::tc_1249();
  }

  static void tc_1250() {
    ::tc_1250();
  }

  static void tc_1297() {
    ::tc_1297();
  }

  static void tc_1298() {
    ::tc_1298();
  }

  static void tc_1299() {
    ::tc_1299();
  }

  static void tc_1300() {
    ::tc_1300();
  }

  static void tc_1301() {
    ::tc_1301();
  }

  static void tc_1302() {
    ::tc_1302();
  }

  static void tc_1303() {
    ::tc_1303();
  }

  static void tc_1304() {
    ::tc_1304();
  }

  static void tc_1305() {
    ::tc_1305();
  }

  static void tc_1306() {
    ::tc_1306();
  }

  static void tc_1307() {
    ::tc_1307();
  }

  static void tc_1308() {
    ::tc_1308();
  }

  static void tc_1309() {
    ::tc_1309();
  }

  static void tc_1323() {
    ::tc_1323();
  }

  static void tc_1324() {
    ::tc_1324();
  }

  static void tc_1325() {
    ::tc_1325();
  }

  static void tc_1326() {
    ::tc_1326();
  }

  static void tc_1327() {
    ::tc_1327();
  }

  static void tc_1328() {
    ::tc_1328();
  }

  static void tc_1329() {
    ::tc_1329();
  }

  static void tc_1330() {
    ::tc_1330();
  }

  static void tc_1331() {
    ::tc_1331();
  }

  static void tc_1332() {
    ::tc_1332();
  }

  static void tc_1333() {
    ::tc_1333();
  }

  static void tc_1334() {
    ::tc_1334();
  }

  static void tc_1335() {
    ::tc_1335();
  }

  static void tc_1362() {
    ::tc_1362();
  }

  static void tc_1363() {
    ::tc_1363();
  }

  static void tc_1364() {
    ::tc_1364();
  }

  static void tc_1365() {
    ::tc_1365();
  }

  static void tc_1199() {
    ::tc_1199();
  }

  static void tc_1200() {
    ::tc_1200();
  }

  static void tc_1201() {
    ::tc_1201();
  }

  static void tc_1202() {
    ::tc_1202();
  }

  static void tc_1203() {
    ::tc_1203();
  }

  static void tc_1204() {
    ::tc_1204();
  }

  static void tc_1366() {
    ::tc_1366();
  }

  static void tc_1367() {
    ::tc_1367();
  }

  static void tc_1368() {
    ::tc_1368();
  }

  static void tc_1369() {
    ::tc_1369();
  }

  static void tc_1370() {
    ::tc_1370();
  }

  static void tc_1371() {
    ::tc_1371();
  }

  static void tc_1372() {
    ::tc_1372();
  }

  static void tc_1373() {
    ::tc_1373();
  }

  static void tc_1374() {
    ::tc_1374();
  }

  static void tc_1375() {
    ::tc_1375();
  }

  static void tc_1376() {
    ::tc_1376();
  }

  static void test(int i) {
    void (*func_ptr[381])() = {
        &TestStudyInPink::tc_1001,
        &TestStudyInPink::tc_1002,
        &TestStudyInPink::tc_1003,
        &TestStudyInPink::tc_1004,
        &TestStudyInPink::tc_1005,
        &TestStudyInPink::tc_1006,
        &TestStudyInPink::tc_1007,
        &TestStudyInPink::tc_1008,
        &TestStudyInPink::tc_1009,
        &TestStudyInPink::tc_1010,
        &TestStudyInPink::tc_1011,
        &TestStudyInPink::tc_1012,
        &TestStudyInPink::tc_1013,
        &TestStudyInPink::tc_1014,
        &TestStudyInPink::tc_1015,
        &TestStudyInPink::tc_1016,
        &TestStudyInPink::tc_1017,
        &TestStudyInPink::tc_1018,
        &TestStudyInPink::tc_1019,
        &TestStudyInPink::tc_1020,
        &TestStudyInPink::tc_1021,
        &TestStudyInPink::tc_1022,
        &TestStudyInPink::tc_1023,
        &TestStudyInPink::tc_1024,
        &TestStudyInPink::tc_1025,
        &TestStudyInPink::tc_1026,
        &TestStudyInPink::tc_1027,
        &TestStudyInPink::tc_1028,
        &TestStudyInPink::tc_1029,
        &TestStudyInPink::tc_1030,
        &TestStudyInPink::tc_1031,
        &TestStudyInPink::tc_1032,
        &TestStudyInPink::tc_1033,
        &TestStudyInPink::tc_1034,
        &TestStudyInPink::tc_1035,
        &TestStudyInPink::tc_1036,
        &TestStudyInPink::tc_1037,
        &TestStudyInPink::tc_1038,
        &TestStudyInPink::tc_1039,
        &TestStudyInPink::tc_1040,
        &TestStudyInPink::tc_1041,
        &TestStudyInPink::tc_1042,
        &TestStudyInPink::tc_1043,
        &TestStudyInPink::tc_1044,
        &TestStudyInPink::tc_1045,
        &TestStudyInPink::tc_1046,
        &TestStudyInPink::tc_1047,
        &TestStudyInPink::tc_1048,
        &TestStudyInPink::tc_1049,
        &TestStudyInPink::tc_1050,
        &TestStudyInPink::tc_1051,
        &TestStudyInPink::tc_1052,
        &TestStudyInPink::tc_1053,
        &TestStudyInPink::tc_1054,
        &TestStudyInPink::tc_1055,
        &TestStudyInPink::tc_1056,
        &TestStudyInPink::tc_1057,
        &TestStudyInPink::tc_1058,
        &TestStudyInPink::tc_1059,
        &TestStudyInPink::tc_1060,
        &TestStudyInPink::tc_1061,
        &TestStudyInPink::tc_1062,
        &TestStudyInPink::tc_1063,
        &TestStudyInPink::tc_1064,
        &TestStudyInPink::tc_1065,
        &TestStudyInPink::tc_1066,
        &TestStudyInPink::tc_1067,
        &TestStudyInPink::tc_1068,
        &TestStudyInPink::tc_1069,
        &TestStudyInPink::tc_1070,
        &TestStudyInPink::tc_1071,
        &TestStudyInPink::tc_1072,
        &TestStudyInPink::tc_1073,
        &TestStudyInPink::tc_1074,
        &TestStudyInPink::tc_1075,
        &TestStudyInPink::tc_1076,
        &TestStudyInPink::tc_1077,
        &TestStudyInPink::tc_1078,
        &TestStudyInPink::tc_1079,
        &TestStudyInPink::tc_1080,
        &TestStudyInPink::tc_1081,
        &TestStudyInPink::tc_1082,
        &TestStudyInPink::tc_1083,
        &TestStudyInPink::tc_1084,
        &TestStudyInPink::tc_1085,
        &TestStudyInPink::tc_1086,
        &TestStudyInPink::tc_1087,
        &TestStudyInPink::tc_1088,
        &TestStudyInPink::tc_1089,
        &TestStudyInPink::tc_1090,
        &TestStudyInPink::tc_1091,
        &TestStudyInPink::tc_1092,
        &TestStudyInPink::tc_1093,
        &TestStudyInPink::tc_1094,
        &TestStudyInPink::tc_1095,
        &TestStudyInPink::tc_1096,
        &TestStudyInPink::tc_1097,
        &TestStudyInPink::tc_1098,
        &TestStudyInPink::tc_1099,
        &TestStudyInPink::tc_1100,
        &TestStudyInPink::tc_1101,
        &TestStudyInPink::tc_1102,
        &TestStudyInPink::tc_1103,
        &TestStudyInPink::tc_1104,
        &TestStudyInPink::tc_1105,
        &TestStudyInPink::tc_1106,
        &TestStudyInPink::tc_1107,
        &TestStudyInPink::tc_1108,
        &TestStudyInPink::tc_1109,
        &TestStudyInPink::tc_1110,
        &TestStudyInPink::tc_1111,
        &TestStudyInPink::tc_1112,
        &TestStudyInPink::tc_1113,
        &TestStudyInPink::tc_1114,
        &TestStudyInPink::tc_1115,
        &TestStudyInPink::tc_1116,
        &TestStudyInPink::tc_1117,
        &TestStudyInPink::tc_1118,
        &TestStudyInPink::tc_1119,
        &TestStudyInPink::tc_1120,
        &TestStudyInPink::tc_1121,
        &TestStudyInPink::tc_1122,
        &TestStudyInPink::tc_1123,
        &TestStudyInPink::tc_1124,
        &TestStudyInPink::tc_1125,
        &TestStudyInPink::tc_1126,
        &TestStudyInPink::tc_1127,
        &TestStudyInPink::tc_1128,
        &TestStudyInPink::tc_1129,
        &TestStudyInPink::tc_1130,
        &TestStudyInPink::tc_1131,
        &TestStudyInPink::tc_1132,
        &TestStudyInPink::tc_1133,
        &TestStudyInPink::tc_1134,
        &TestStudyInPink::tc_1135,
        &TestStudyInPink::tc_1136,
        &TestStudyInPink::tc_1137,
        &TestStudyInPink::tc_1138,
        &TestStudyInPink::tc_1139,
        &TestStudyInPink::tc_1140,
        &TestStudyInPink::tc_1141,
        &TestStudyInPink::tc_1142,
        &TestStudyInPink::tc_1143,
        &TestStudyInPink::tc_1144,
        &TestStudyInPink::tc_1145,
        &TestStudyInPink::tc_1146,
        &TestStudyInPink::tc_1147,
        &TestStudyInPink::tc_1148,
        &TestStudyInPink::tc_1149,
        &TestStudyInPink::tc_1150,
        &TestStudyInPink::tc_1151,
        &TestStudyInPink::tc_1152,
        &TestStudyInPink::tc_1153,
        &TestStudyInPink::tc_1154,
        &TestStudyInPink::tc_1155,
        &TestStudyInPink::tc_1156,
        &TestStudyInPink::tc_1157,
        &TestStudyInPink::tc_1158,
        &TestStudyInPink::tc_1159,
        &TestStudyInPink::tc_1160,
        &TestStudyInPink::tc_1161,
        &TestStudyInPink::tc_1162,
        &TestStudyInPink::tc_1163,
        &TestStudyInPink::tc_1164,
        &TestStudyInPink::tc_1165,
        &TestStudyInPink::tc_1166,
        &TestStudyInPink::tc_1167,
        &TestStudyInPink::tc_1168,
        &TestStudyInPink::tc_1169,
        &TestStudyInPink::tc_1170,
        &TestStudyInPink::tc_1171,
        &TestStudyInPink::tc_1172,
        &TestStudyInPink::tc_1173,
        &TestStudyInPink::tc_1174,
        &TestStudyInPink::tc_1175,
        &TestStudyInPink::tc_1176,
        &TestStudyInPink::tc_1177,
        &TestStudyInPink::tc_1178,
        &TestStudyInPink::tc_1179,
        &TestStudyInPink::tc_1180,
        &TestStudyInPink::tc_1181,
        &TestStudyInPink::tc_1182,
        &TestStudyInPink::tc_1183,
        &TestStudyInPink::tc_1184,
        &TestStudyInPink::tc_1185,
        &TestStudyInPink::tc_1186,
        &TestStudyInPink::tc_1187,
        &TestStudyInPink::tc_1188,
        &TestStudyInPink::tc_1189,
        &TestStudyInPink::tc_1190,
        &TestStudyInPink::tc_1191,
        &TestStudyInPink::tc_1192,
        &TestStudyInPink::tc_1193,
        &TestStudyInPink::tc_1194,
        &TestStudyInPink::tc_1195,
        &TestStudyInPink::tc_1196,
        &TestStudyInPink::tc_1197,
        &TestStudyInPink::tc_1198,
        &TestStudyInPink::tc_1199,
        &TestStudyInPink::tc_1200,
        &TestStudyInPink::tc_1201,
        &TestStudyInPink::tc_1202,
        &TestStudyInPink::tc_1203,
        &TestStudyInPink::tc_1204,
        &TestStudyInPink::tc_1205,
        &TestStudyInPink::tc_1206,
        &TestStudyInPink::tc_1207,
        &TestStudyInPink::tc_1208,
        &TestStudyInPink::tc_1209,
        &TestStudyInPink::tc_1210,
        &TestStudyInPink::tc_1211,
        &TestStudyInPink::tc_1212,
        &TestStudyInPink::tc_1213,
        &TestStudyInPink::tc_1214,
        &TestStudyInPink::tc_1215,
        &TestStudyInPink::tc_1216,
        &TestStudyInPink::tc_1217,
        &TestStudyInPink::tc_1218,
        &TestStudyInPink::tc_1219,
        &TestStudyInPink::tc_1220,
        &TestStudyInPink::tc_1221,
        &TestStudyInPink::tc_1222,
        &TestStudyInPink::tc_1223,
        &TestStudyInPink::tc_1224,
        &TestStudyInPink::tc_1225,
        &TestStudyInPink::tc_1226,
        &TestStudyInPink::tc_1227,
        &TestStudyInPink::tc_1228,
        &TestStudyInPink::tc_1229,
        &TestStudyInPink::tc_1230,
        &TestStudyInPink::tc_1231,
        &TestStudyInPink::tc_1232,
        &TestStudyInPink::tc_1233,
        &TestStudyInPink::tc_1234,
        &TestStudyInPink::tc_1235,
        &TestStudyInPink::tc_1236,
        &TestStudyInPink::tc_1237,
        &TestStudyInPink::tc_1238,
        &TestStudyInPink::tc_1239,
        &TestStudyInPink::tc_1240,
        &TestStudyInPink::tc_1241,
        &TestStudyInPink::tc_1242,
        &TestStudyInPink::tc_1243,
        &TestStudyInPink::tc_1244,
        &TestStudyInPink::tc_1245,
        &TestStudyInPink::tc_1246,
        &TestStudyInPink::tc_1247,
        &TestStudyInPink::tc_1248,
        &TestStudyInPink::tc_1249,
        &TestStudyInPink::tc_1250,
        &TestStudyInPink::tc_1251,
        &TestStudyInPink::tc_1252,
        &TestStudyInPink::tc_1253,
        &TestStudyInPink::tc_1254,
        &TestStudyInPink::tc_1255,
        &TestStudyInPink::tc_1256,
        &TestStudyInPink::tc_1257,
        &TestStudyInPink::tc_1258,
        &TestStudyInPink::tc_1259,
        &TestStudyInPink::tc_1260,
        &TestStudyInPink::tc_1261,
        &TestStudyInPink::tc_1262,
        &TestStudyInPink::tc_1263,
        &TestStudyInPink::tc_1264,
        &TestStudyInPink::tc_1265,
        &TestStudyInPink::tc_1266,
        &TestStudyInPink::tc_1267,
        &TestStudyInPink::tc_1268,
        &TestStudyInPink::tc_1269,
        &TestStudyInPink::tc_1270,
        &TestStudyInPink::tc_1271,
        &TestStudyInPink::tc_1272,
        &TestStudyInPink::tc_1273,
        &TestStudyInPink::tc_1274,
        &TestStudyInPink::tc_1275,
        &TestStudyInPink::tc_1276,
        &TestStudyInPink::tc_1277,
        &TestStudyInPink::tc_1278,
        &TestStudyInPink::tc_1279,
        &TestStudyInPink::tc_1280,
        &TestStudyInPink::tc_1281,
        &TestStudyInPink::tc_1282,
        &TestStudyInPink::tc_1283,
        &TestStudyInPink::tc_1284,
        &TestStudyInPink::tc_1285,
        &TestStudyInPink::tc_1286,
        &TestStudyInPink::tc_1287,
        &TestStudyInPink::tc_1288,
        &TestStudyInPink::tc_1289,
        &TestStudyInPink::tc_1290,
        &TestStudyInPink::tc_1291,
        &TestStudyInPink::tc_1292,
        &TestStudyInPink::tc_1293,
        &TestStudyInPink::tc_1294,
        &TestStudyInPink::tc_1295,
        &TestStudyInPink::tc_1296,
        &TestStudyInPink::tc_1297,
        &TestStudyInPink::tc_1298,
        &TestStudyInPink::tc_1299,
        &TestStudyInPink::tc_1300,
        &TestStudyInPink::tc_1301,
        &TestStudyInPink::tc_1302,
        &TestStudyInPink::tc_1303,
        &TestStudyInPink::tc_1304,
        &TestStudyInPink::tc_1305,
        &TestStudyInPink::tc_1306,
        &TestStudyInPink::tc_1307,
        &TestStudyInPink::tc_1308,
        &TestStudyInPink::tc_1309,
        &TestStudyInPink::tc_1310,
        &TestStudyInPink::tc_1311,
        &TestStudyInPink::tc_1312,
        &TestStudyInPink::tc_1313,
        &TestStudyInPink::tc_1314,
        &TestStudyInPink::tc_1315,
        &TestStudyInPink::tc_1316,
        &TestStudyInPink::tc_1317,
        &TestStudyInPink::tc_1318,
        &TestStudyInPink::tc_1319,
        &TestStudyInPink::tc_1320,
        &TestStudyInPink::tc_1321,
        &TestStudyInPink::tc_1322,
        &TestStudyInPink::tc_1323,
        &TestStudyInPink::tc_1324,
        &TestStudyInPink::tc_1325,
        &TestStudyInPink::tc_1326,
        &TestStudyInPink::tc_1327,
        &TestStudyInPink::tc_1328,
        &TestStudyInPink::tc_1329,
        &TestStudyInPink::tc_1330,
        &TestStudyInPink::tc_1331,
        &TestStudyInPink::tc_1332,
        &TestStudyInPink::tc_1333,
        &TestStudyInPink::tc_1334,
        &TestStudyInPink::tc_1335,
        &TestStudyInPink::tc_1336,
        &TestStudyInPink::tc_1337,
        &TestStudyInPink::tc_1338,
        &TestStudyInPink::tc_1339,
        &TestStudyInPink::tc_1340,
        &TestStudyInPink::tc_1341,
        &TestStudyInPink::tc_1342,
        &TestStudyInPink::tc_1343,
        &TestStudyInPink::tc_1344,
        &TestStudyInPink::tc_1345,
        &TestStudyInPink::tc_1346,
        &TestStudyInPink::tc_1347,
        &TestStudyInPink::tc_1348,
        &TestStudyInPink::tc_1349,
        &TestStudyInPink::tc_1350,
        &TestStudyInPink::tc_1351,
        &TestStudyInPink::tc_1352,
        &TestStudyInPink::tc_1353,
        &TestStudyInPink::tc_1354,
        &TestStudyInPink::tc_1355,
        &TestStudyInPink::tc_1356,
        &TestStudyInPink::tc_1357,
        &TestStudyInPink::tc_1358,
        &TestStudyInPink::tc_1359,
        &TestStudyInPink::tc_1360,
        &TestStudyInPink::tc_1361,
        &TestStudyInPink::tc_1362,
        &TestStudyInPink::tc_1363,
        &TestStudyInPink::tc_1364,
        &TestStudyInPink::tc_1365,
        &TestStudyInPink::tc_1366,
        &TestStudyInPink::tc_1367,
        &TestStudyInPink::tc_1368,
        &TestStudyInPink::tc_1369,
        &TestStudyInPink::tc_1370,
        &TestStudyInPink::tc_1371,
        &TestStudyInPink::tc_1372,
        &TestStudyInPink::tc_1373,
        &TestStudyInPink::tc_1374,
        &TestStudyInPink::tc_1375,
        &TestStudyInPink::tc_1376,
        &TestStudyInPink::tc_1377,
        &TestStudyInPink::tc_1378,
        &TestStudyInPink::tc_1379,
        &TestStudyInPink::tc_1380,
        &TestStudyInPink::tc_1381,
    };
    func_ptr[i]();
  }
};

void TestStudyInPink::tc_1377() {
  OUTPUT << "----- Testcase 377 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  OUTPUT << program->config->str() << endl;
  OUTPUT << program->sherlock->str() << endl;
  OUTPUT << program->watson->str() << endl;
  OUTPUT << program->arr_mv_objs->str() << endl;
  program->printResult();
  delete program;
}

void TestStudyInPink::tc_1378() {
  OUTPUT << "----- Testcase 378 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  OUTPUT << program->config->str() << endl;
  OUTPUT << program->sherlock->str() << endl;
  OUTPUT << program->watson->str() << endl;
  OUTPUT << program->arr_mv_objs->str() << endl;
  program->printResult();
  delete program;
}

void TestStudyInPink::tc_1379() {
  OUTPUT << "----- Testcase 379 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  OUTPUT << program->config->str() << endl;
  OUTPUT << program->sherlock->str() << endl;
  OUTPUT << program->watson->str() << endl;
  OUTPUT << program->arr_mv_objs->str() << endl;
  program->printResult();
  delete program;
}

void TestStudyInPink::tc_1380() {
  OUTPUT << "----- Testcase 380 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  OUTPUT << program->config->str() << endl;
  OUTPUT << program->sherlock->str() << endl;
  OUTPUT << program->watson->str() << endl;
  OUTPUT << program->arr_mv_objs->str() << endl;
  program->printResult();
  delete program;
}

void TestStudyInPink::tc_1381() {
  OUTPUT << "----- Testcase 381 -----" << endl;
  string config_path = "./configs/tc_300_config.txt";
  bool verbose = false;
  StudyPinkProgram *program = new StudyPinkProgram(config_path);
  program->run(verbose);
  OUTPUT << program->config->str() << endl;
  OUTPUT << program->sherlock->str() << endl;
  OUTPUT << program->watson->str() << endl;
  OUTPUT << program->arr_mv_objs->str() << endl;
  program->printResult();
  delete program;
}

// Dùng class TestStudyInPink
// Khai báo bằng con trỏ, delete trên con trỏ

// num_walls == 0	num_fake_walls == 0
void TestStudyInPink::tc_1042() {
  OUTPUT << "----- Testcase 42 -----" << endl;
  int num_walls = 0;
  Position arr_walls[] = {};
  int num_fake_walls = 0;
  Position arr_fake_walls[] = {};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls == 0	num_fake_walls == 1
void TestStudyInPink::tc_1043() {
  OUTPUT << "----- Testcase 43 -----" << endl;
  int num_walls = 0;
  Position arr_walls[] = {};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(5, 5)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls == 0	num_fake_walls > 1
void TestStudyInPink::tc_1044() {
  OUTPUT << "----- Testcase 44 -----" << endl;
  int num_walls = 0;
  Position arr_walls[] = {};
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(0, 0), Position(5, 5), Position(9, 9)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls == 0	num_fake_walls > 1
void TestStudyInPink::tc_1045() {
  OUTPUT << "----- Testcase 45 -----" << endl;
  int num_walls = 0;
  Position arr_walls[] = {};
  int num_fake_walls = 10;
  Position arr_fake_walls[] = {
      Position(0, 0), Position(1, 1), Position(2, 2), Position(3, 3), Position(4, 4), Position(5, 5), Position(6, 6),
      Position(7, 7), Position(8, 8), Position(9, 9)
  };
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls == 1 num_fake_walls == 0
void TestStudyInPink::tc_1046() {
  OUTPUT << "----- Testcase 46 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(0, 9)};
  int num_fake_walls = 0;
  Position arr_fake_walls[] = {};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls == 1 num_fake_walls == 1
void TestStudyInPink::tc_1047() {
  OUTPUT << "----- Testcase 47 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(0, 9)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(0, 0)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls == 1 num_fake_walls > 1
void TestStudyInPink::tc_1048() {
  OUTPUT << "----- Testcase 48 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(0, 9)};
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(0, 0), Position(5, 5), Position(9, 9)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls == 1 num_fake_walls > 1
void TestStudyInPink::tc_1049() {
  OUTPUT << "----- Testcase 49 -----" << endl;
  int num_walls = 1;
  Position arr_walls[] = {Position(0, 9)};
  int num_fake_walls = 10;
  Position arr_fake_walls[] = {
      Position(0, 0), Position(1, 1), Position(2, 2), Position(3, 3), Position(4, 4), Position(5, 5), Position(6, 6),
      Position(7, 7), Position(8, 8), Position(9, 9)
  };
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls > 1 num_fake_walls == 0
void TestStudyInPink::tc_1050() {
  OUTPUT << "----- Testcase 50 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(0, 9), Position(1, 8), Position(9, 0), Position(8, 1)};
  int num_fake_walls = 0;
  Position arr_fake_walls[] = {};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls > 1 num_fake_walls == 1
void TestStudyInPink::tc_1051() {
  OUTPUT << "----- Testcase 51 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(0, 9), Position(1, 8), Position(9, 0), Position(8, 1)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(5, 5)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls > 1 num_fake_walls > 1
void TestStudyInPink::tc_1052() {
  OUTPUT << "----- Testcase 52 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(0, 9), Position(1, 8), Position(9, 0), Position(8, 1)};
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(0, 0), Position(5, 5), Position(9, 9)};
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// num_walls > 1 num_fake_walls > 1
void TestStudyInPink::tc_1053() {
  OUTPUT << "----- Testcase 53 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(0, 9), Position(1, 8), Position(9, 0), Position(8, 1)};
  int num_fake_walls = 10;
  Position arr_fake_walls[] = {
      Position(0, 0), Position(1, 1), Position(2, 2), Position(3, 3), Position(4, 4), Position(5, 5), Position(6, 6),
      Position(7, 7), Position(8, 8), Position(9, 9)
  };
  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);
  for (int i = 0; i < map->num_rows; i++) {
    for (int j = 0; j < map->num_cols; j++) {
      OUTPUT << map->map[i][j]->getType();
      if (map->map[i][j]->getType() == FAKE_WALL) {
        FakeWall *fakewall = dynamic_cast<FakeWall *>(map->map[i][j]);
        OUTPUT << fakewall->getReqExp();
      }
      OUTPUT << "-";
    }
    OUTPUT << endl;
  }
  delete map;
}

// Dùng class TestStudyInPink
// "Position ( int r =0 , int c =0) dùng cả 2 default param"
void TestStudyInPink::tc_1074() {
  OUTPUT << "----- Testcase 74 -----" << endl;
  Position pos = Position();
  OUTPUT << pos.r << "-" << pos.c;
}

// "Position ( int r =0 , int c =0) dùng 1 default param"
void TestStudyInPink::tc_1075() {
  OUTPUT << "----- Testcase 75 -----" << endl;
  Position pos = Position(1);
  OUTPUT << pos.r << "-" << pos.c;
}

// "Position ( int r =0 , int c =0) truyền cả 2 param"
void TestStudyInPink::tc_1076() {
  OUTPUT << "----- Testcase 76 -----" << endl;
  Position pos = Position(1, 3);
  OUTPUT << pos.r << "-" << pos.c;
}

// Position ( const string & str_pos ) ;
// r = 0, c = 0
void TestStudyInPink::tc_1077() {
  OUTPUT << "----- Testcase 77 -----" << endl;
  Position pos = Position("(0, 0)");
  OUTPUT << pos.r << "-" << pos.c;
}

// r > 0, c > 0
void TestStudyInPink::tc_1078() {
  OUTPUT << "----- Testcase 78 -----" << endl;
  Position pos = Position("(1, 2)");
  OUTPUT << pos.r << "-" << pos.c;
}

// r > 0, c < 0
void TestStudyInPink::tc_1079() {
  OUTPUT << "----- Testcase 79 -----" << endl;
  Position pos = Position("(1, -1)");
  OUTPUT << pos.r << "-" << pos.c;
}

// r < 0, c > 0
void TestStudyInPink::tc_1080() {
  OUTPUT << "----- Testcase 80 -----" << endl;
  Position pos = Position("(-2, 3)");
  OUTPUT << pos.r << "-" << pos.c;
}

// r < 0, c < 0
void TestStudyInPink::tc_1081() {
  OUTPUT << "----- Testcase 81 -----" << endl;
  Position pos = Position("(-2, -4)");
  OUTPUT << pos.r << "-" << pos.c;
}

// int getRow () const ;
void TestStudyInPink::tc_1082() {
  OUTPUT << "----- Testcase 82 -----" << endl;
  Position pos = Position("(3, 5)");
  OUTPUT << pos.getRow();
}

// int getRow () const ;
void TestStudyInPink::tc_1083() {
  OUTPUT << "----- Testcase 83 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.getRow();
}

// int getCol () const
void TestStudyInPink::tc_1084() {
  OUTPUT << "----- Testcase 84 -----" << endl;
  Position pos = Position("(3, 5)");
  OUTPUT << pos.getCol();
}

// int getCol () const
void TestStudyInPink::tc_1085() {
  OUTPUT << "----- Testcase 85 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.getCol();
}

// void setRow (int r)
void TestStudyInPink::tc_1086() {
  OUTPUT << "----- Testcase 86 -----" << endl;
  Position pos = Position("(3, 5)");
  pos.setRow(5);
  OUTPUT << pos.r << "-" << pos.c;
}

// void setRow (int r)
void TestStudyInPink::tc_1087() {
  OUTPUT << "----- Testcase 87 -----" << endl;
  Position pos = Position(2, 4);
  pos.setRow(3);
  OUTPUT << pos.r << "-" << pos.c;
}

// void setCol (int c)
void TestStudyInPink::tc_1088() {
  OUTPUT << "----- Testcase 88 -----" << endl;
  Position pos = Position("(3, 5)");
  pos.setCol(1);
  OUTPUT << pos.r << "-" << pos.c;
}

// void setCol (int c)
void TestStudyInPink::tc_1089() {
  OUTPUT << "----- Testcase 89 -----" << endl;
  Position pos = Position(2, 4);
  pos.setCol(1);
  OUTPUT << pos.r << "-" << pos.c;
}

// bool isEqual (int in_r , int in_c ) const
// trùng nhau
void TestStudyInPink::tc_1090() {
  OUTPUT << "----- Testcase 90 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.isEqual(2, 4);
}

// khác nhau về r
void TestStudyInPink::tc_1091() {
  OUTPUT << "----- Testcase 91 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.isEqual(4, 4);
}

// khác nhau về c
void TestStudyInPink::tc_1092() {
  OUTPUT << "----- Testcase 92 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.isEqual(2, 5);
}

// khác nhau về r và khác nhau về c
void TestStudyInPink::tc_1093() {
  OUTPUT << "----- Testcase 93 -----" << endl;
  Position pos = Position(2, 4);
  OUTPUT << pos.isEqual(4, 5);
}

// Dùng class TestStudyInPink
// "Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void TestStudyInPink::tc_1104() {
  OUTPUT << "----- Testcase 104 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(1, 2), map, 100, 250);
  OUTPUT << sherlock->hp << endl;
  OUTPUT << sherlock->exp << endl;
  OUTPUT << sherlock->moving_rule;
  OUTPUT << sherlock->pos.str();
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô Wall
void TestStudyInPink::tc_1105() {
  OUTPUT << "----- Testcase 105 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(2, 1), map, 100, 250);
  OUTPUT << sherlock->hp << endl;
  OUTPUT << sherlock->exp << endl;
  OUTPUT << sherlock->moving_rule;
  OUTPUT << sherlock->pos.str();
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void TestStudyInPink::tc_1106() {
  OUTPUT << "----- Testcase 106 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(3, 2), map, 100, 250);
  OUTPUT << sherlock->hp << endl;
  OUTPUT << sherlock->exp << endl;
  OUTPUT << sherlock->moving_rule;
  OUTPUT << sherlock->pos.str();
  delete map;
  delete sherlock;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void TestStudyInPink::tc_1107() {
  OUTPUT << "----- Testcase 107 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(4, 1), map, 100, 250);
  OUTPUT << sherlock->hp << endl;
  OUTPUT << sherlock->exp << endl;
  OUTPUT << sherlock->moving_rule;
  OUTPUT << sherlock->pos.str();
  delete map;
  delete sherlock;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void TestStudyInPink::tc_1108() {
  OUTPUT << "----- Testcase 108 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 1), Position(1, 3), Position(3, 1), Position(3, 3)};
  int num_fake_walls = 1;
  Position arr_fake_walls[] = {Position(2, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(1, 4), map, 100, 250);
  OUTPUT << sherlock->hp << endl;
  OUTPUT << sherlock->exp << endl;
  OUTPUT << sherlock->moving_rule;
  OUTPUT << sherlock->pos.str();
  delete map;
  delete sherlock;
}

// Dùng class TestStudyInPink
// "Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void TestStudyInPink::tc_1126() {
  OUTPUT << "----- Testcase 126 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(0, 1), map, 100, 250);
  OUTPUT << watson->hp << endl;
  OUTPUT << watson->exp << endl;
  OUTPUT << watson->moving_rule;
  OUTPUT << watson->pos.str();
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô Wall
void TestStudyInPink::tc_1127() {
  OUTPUT << "----- Testcase 127 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
  OUTPUT << watson->hp << endl;
  OUTPUT << watson->exp << endl;
  OUTPUT << watson->moving_rule;
  OUTPUT << watson->pos.str();
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và có thể đến được
void TestStudyInPink::tc_1128() {
  OUTPUT << "----- Testcase 128 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "DR", Position(3, 2), map, 100, 500);
  OUTPUT << watson->hp << endl;
  OUTPUT << watson->exp << endl;
  OUTPUT << watson->moving_rule;
  OUTPUT << watson->pos.str();
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên đến ô FakeWall và không thể đến được
void TestStudyInPink::tc_1129() {
  OUTPUT << "----- Testcase 129 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "DR", Position(0, 2), map, 100, 500);
  OUTPUT << watson->hp << endl;
  OUTPUT << watson->exp << endl;
  OUTPUT << watson->moving_rule;
  OUTPUT << watson->pos.str();
  delete map;
  delete watson;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void TestStudyInPink::tc_1130() {
  OUTPUT << "----- Testcase 130 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(1, 4), map, 100, 250);
  OUTPUT << watson->hp << endl;
  OUTPUT << watson->exp << endl;
  OUTPUT << watson->moving_rule;
  OUTPUT << watson->pos.str();
  delete map;
  delete watson;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void TestStudyInPink::tc_1131() {
  OUTPUT << "----- Testcase 131 -----" << endl;
  int num_walls = 8;
  Position arr_walls[] = {
      Position(1, 1), Position(2, 1), Position(3, 1), Position(4, 1), Position(1, 3), Position(2, 3), Position(3, 3),
      Position(4, 3)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 2), Position(4, 2)};

  Map *map = new Map(5, 5, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "LUR", Position(0, 0), map, 100, 250);
  OUTPUT << watson->hp << endl;
  OUTPUT << watson->exp << endl;
  OUTPUT << watson->moving_rule;
  OUTPUT << watson->pos.str();
  delete map;
  delete watson;
}

// Dùng class TestStudyInPink
// "Constructor + move"
// moving rule có bước đi đầu tiên đến ô Path
void TestStudyInPink::tc_1148() {
  OUTPUT << "----- Testcase 148 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(0, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->sherlock->str() << endl;
  OUTPUT << criminal->watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên đến ô Wall
void TestStudyInPink::tc_1149() {
  OUTPUT << "----- Testcase 149 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->sherlock->str() << endl;
  OUTPUT << criminal->watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên đến ô FakeWall
void TestStudyInPink::tc_1150() {
  OUTPUT << "----- Testcase 150 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "URL", Position(6, 0), map, 100, 250);
  Watson *watson = new Watson(2, "URL", Position(6, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->sherlock->str() << endl;
  OUTPUT << criminal->watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi đầu tiên qua Wall và bị đứng yên, bước đi tiếp theo không qua Wall nên thực hiện di chuyển
void TestStudyInPink::tc_1151() {
  OUTPUT << "----- Testcase 151 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->sherlock->str() << endl;
  OUTPUT << criminal->watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// moving rule có bước đi làm nhân vật di chuyển ra ngoài bản đồ => nhân vật cần dừng lại ở rìa bản đồ
void TestStudyInPink::tc_1152() {
  OUTPUT << "----- Testcase 152 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
  OUTPUT << criminal->sherlock->str() << endl;
  OUTPUT << criminal->watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// Dùng class TestStudyInPink
// "có 1 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó có thể đi đến được"
void TestStudyInPink::tc_1163() {
  OUTPUT << "----- Testcase 163 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(0, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->sherlock->str() << endl;
  OUTPUT << criminal->watson->str();
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// "có 1 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó không đi đến được"
void TestStudyInPink::tc_1164() {
  OUTPUT << "----- Testcase 164 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 3;
  Position arr_fake_walls[] = {Position(1, 3), Position(2, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 0), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 6), map, sherlock, watson);
  OUTPUT << criminal->sherlock->str() << endl;
  OUTPUT << criminal->watson->str();
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// "có 2 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó có thể đi đến được"
void TestStudyInPink::tc_1165() {
  OUTPUT << "----- Testcase 165 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(3, 0), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(3, 6), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->sherlock->str() << endl;
  OUTPUT << criminal->watson->str();
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// "có 2 vị trí mà k/c từ Criminal đến Sherlock + Watson là dài nhất + vị trí đó không thể đi đến được"
void TestStudyInPink::tc_1166() {
  OUTPUT << "----- Testcase 166 -----" << endl;
  int num_walls = 14;
  Position arr_walls[] = {
      Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 4), Position(1, 5), Position(1, 6), Position(3, 2),
      Position(3, 4), Position(5, 0), Position(5, 1), Position(5, 2), Position(5, 4), Position(5, 5), Position(5, 6)
  };
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(1, 3), Position(5, 3)};

  Map *map = new Map(7, 7, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "LU", Position(0, 3), map, 100, 250);
  Watson *watson = new Watson(2, "LU", Position(6, 3), map, 100, 250);
  Criminal *criminal = new Criminal(0, Position(3, 3), map, sherlock, watson);
  OUTPUT << criminal->sherlock->str() << endl;
  OUTPUT << criminal->watson->str();
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
}

// ---------------------------------------------------PATH---------------------------------------------------------
// FirstAid-Tạo ra item
void TestStudyInPink::tc_1269() {
  OUTPUT << "----- Testcase 269 -----" << endl;
  BaseItem *firstAid = new FirstAid();
  delete firstAid;
}

void TestStudyInPink::tc_1270() {
  OUTPUT << "----- Testcase 270 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  BaseItem *firstAid = new FirstAid();
  OUTPUT << firstAid->canUse(criminal, NULL) << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete firstAid;
}

void TestStudyInPink::tc_1271() {
  OUTPUT << "----- Testcase 271 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

  BaseItem *firstAid = new FirstAid();
  OUTPUT << firstAid->canUse(sherlock, NULL) << endl;
  delete map;
  delete sherlock;
  delete firstAid;
}

void TestStudyInPink::tc_1272() {
  OUTPUT << "----- Testcase 272 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

  BaseItem *firstAid = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(firstAid);
  OUTPUT << firstAid->canUse(sherlock, NULL) << endl;
  delete map;
  delete sherlock;
  delete firstAid;
  delete sherlockBag;
}

void TestStudyInPink::tc_1273() {
  OUTPUT << "----- Testcase 273 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  BaseItem *firstAid = new FirstAid();
  OUTPUT << firstAid->canUse(watson, NULL) << endl;
  delete map;
  delete watson;
  delete firstAid;
}

void TestStudyInPink::tc_1274() {
  OUTPUT << "----- Testcase 274 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  BaseItem *firstAid = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(firstAid);
  OUTPUT << firstAid->canUse(watson, NULL) << endl;
  delete map;
  delete watson;
  delete firstAid;
  delete watsonBag;
}

void TestStudyInPink::tc_1275() {
  OUTPUT << "----- Testcase 275 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 90, 450);

  BaseItem *firstAid = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(firstAid);
  firstAid->use(sherlock, NULL);
  delete map;
  delete sherlock;
  delete firstAid;
  delete sherlockBag;
}

void TestStudyInPink::tc_1276() {
  OUTPUT << "----- Testcase 276 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  BaseItem *firstAid = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(firstAid);
  firstAid->use(watson, NULL);
  delete map;
  delete watson;
  delete firstAid;
  delete watsonBag;
}

void TestStudyInPink::tc_1277() {
  OUTPUT << "----- Testcase 277 -----" << endl;
  BaseItem *excemptionCard = new ExcemptionCard();
  delete excemptionCard;
}

void TestStudyInPink::tc_1278() {
  OUTPUT << "----- Testcase 278 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  BaseItem *excemptionCard = new ExcemptionCard();
  OUTPUT << excemptionCard->canUse(criminal, NULL);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete excemptionCard;
}

void TestStudyInPink::tc_1279() {
  OUTPUT << "----- Testcase 279 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  BaseItem *excemptionCard = new ExcemptionCard();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(excemptionCard);
  OUTPUT << excemptionCard->canUse(sherlock, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete sherlockBag;
  delete excemptionCard;
}

void TestStudyInPink::tc_1280() {
  OUTPUT << "----- Testcase 280 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  BaseItem *excemptionCard = new ExcemptionCard();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(excemptionCard);
  OUTPUT << excemptionCard->canUse(sherlock, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete sherlockBag;
  delete excemptionCard;
}

void TestStudyInPink::tc_1281() {
  OUTPUT << "----- Testcase 281 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  BaseItem *excemptionCard = new ExcemptionCard();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard);
  OUTPUT << excemptionCard->canUse(watson, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete watsonBag;
  delete excemptionCard;
}

void TestStudyInPink::tc_1282() {
  OUTPUT << "----- Testcase 282 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 157, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  BaseItem *excemptionCard = new ExcemptionCard();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard);
  OUTPUT << excemptionCard->canUse(watson, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete watsonBag;
  delete excemptionCard;
}

void TestStudyInPink::tc_1283() {
  OUTPUT << "----- Testcase 283 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 301, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(1, 3), map, criminal);

  BaseItem *excemptionCard = new ExcemptionCard();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(excemptionCard);
  excemptionCard->use(sherlock, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete sherlockBag;
  delete excemptionCard;
}

void TestStudyInPink::tc_1284() {
  OUTPUT << "----- Testcase 284 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 157, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(2, 1), map, criminal);

  BaseItem *excemptionCard = new ExcemptionCard();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard);
  excemptionCard->use(watson, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete watsonBag;
  delete excemptionCard;
}

void TestStudyInPink::tc_1285() {
  OUTPUT << "----- Testcase 285 -----" << endl;
  BaseItem *passingCard = new PassingCard("all");
  delete passingCard;
}

void TestStudyInPink::tc_1286() {
  OUTPUT << "----- Testcase 286 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 250, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  BaseItem *passingCard = new PassingCard("all");
  OUTPUT << passingCard->canUse(criminal, NULL);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete passingCard;
}

void TestStudyInPink::tc_1287() {
  OUTPUT << "----- Testcase 287 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  BaseItem *passingCard = new PassingCard("RobotS");
  passingCard->canUse(sherlock, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete passingCard;
}

void TestStudyInPink::tc_1288() {
  OUTPUT << "----- Testcase 288 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 231, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  BaseItem *passingCard = new PassingCard("RobotC");

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(passingCard);
  passingCard->canUse(sherlock, NULL);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete passingCard;
  delete sherlockBag;
}

void TestStudyInPink::tc_1289() {
  OUTPUT << "----- Testcase 289 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 253, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  BaseItem *passingCard = new PassingCard("RobotSW");
  passingCard->canUse(watson, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete passingCard;
}

void TestStudyInPink::tc_1290() {
  OUTPUT << "----- Testcase 290 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 200, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  BaseItem *passingCard = new PassingCard("aa");

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(passingCard);
  passingCard->canUse(watson, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete passingCard;
  delete watsonBag;
}

void TestStudyInPink::tc_1291() {
  OUTPUT << "----- Testcase 291 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 566, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 300, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(1, 3), map, criminal);

  BaseItem *passingCard = new PassingCard("RobotC");

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(passingCard);
  if (passingCard->canUse(sherlock, robotC) == 1) {
    OUTPUT << "Can use" << endl;
    passingCard->use(sherlock, robotC);
  }
  else {
    OUTPUT << "Can not use" << endl;
  }
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete passingCard;
  delete sherlockBag;
}

void TestStudyInPink::tc_1292() {
  OUTPUT << "----- Testcase 292 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(2, 1), map, criminal);

  BaseItem *passingCard = new PassingCard("RobotC");

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(passingCard);
  passingCard->use(watson, robotC);
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete passingCard;
  delete watsonBag;
}

void TestStudyInPink::tc_1293() {
  OUTPUT << "----- Testcase 293 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(9, 5), map, criminal);

  PassingCard *passingCard = static_cast<PassingCard *>(robotC->item);
  if (passingCard == NULL) {
    OUTPUT << "Item is not PassingCard" << endl;
  }
  else {
    OUTPUT << passingCard->challenge << endl;
  }
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
}

void TestStudyInPink::tc_1294() {
  OUTPUT << "----- Testcase 294 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(9, 2), map, criminal);

  PassingCard *passingCard = static_cast<PassingCard *>(robotC->item);
  if (passingCard == NULL) {
    OUTPUT << "Item is not PassingCard" << endl;
  }
  else {
    OUTPUT << passingCard->challenge << endl;
  }
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
}

void TestStudyInPink::tc_1295() {
  OUTPUT << "----- Testcase 295 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(3, 9), map, criminal);

  PassingCard *passingCard = static_cast<PassingCard *>(robotC->item);
  if (passingCard == NULL) {
    OUTPUT << "Item is not PassingCard" << endl;
  }
  else {
    OUTPUT << passingCard->challenge << endl;
  }
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
}

void TestStudyInPink::tc_1296() {
  OUTPUT << "----- Testcase 296 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 274, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(6, 9), map, criminal);

  PassingCard *passingCard = static_cast<PassingCard *>(robotC->item);
  if (passingCard == NULL) {
    OUTPUT << "Item is not PassingCard" << endl;
  }
  else {
    OUTPUT << passingCard->challenge << endl;
  }
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
}

void TestStudyInPink::tc_1310() {
  OUTPUT << "----- Testcase 310 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void TestStudyInPink::tc_1311() {
  OUTPUT << "----- Testcase 311 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseItem *excemptionCard1 = new ExcemptionCard();
  BaseItem *excemptionCard2 = new ExcemptionCard();
  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(firstAid1);
  sherlockBag->insert(firstAid2);
  sherlockBag->insert(excemptionCard1);
  sherlockBag->insert(excemptionCard2);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete firstAid1;
  delete firstAid2;
  delete excemptionCard1;
  delete excemptionCard2;
  delete sherlockBag;
}

void TestStudyInPink::tc_1312() {
  OUTPUT << "----- Testcase 312 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  for (int i = 0; i < 12; i++) {
    BaseItem *magicBook = new MagicBook();
    sherlockBag->insert(magicBook);
  }
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void TestStudyInPink::tc_1313() {
  OUTPUT << "----- Testcase 313 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  for (int i = 0; i < 14; i++) {
    BaseItem *magicBook = new MagicBook();
    sherlockBag->insert(magicBook);
  }
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void TestStudyInPink::tc_1314() {
  OUTPUT << "----- Testcase 314 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  for (int i = 0; i < 30; i++) {
    BaseItem *firstAid = new FirstAid();
    sherlockBag->insert(firstAid);
  }
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void TestStudyInPink::tc_1315() {
  OUTPUT << "----- Testcase 315 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->get();
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void TestStudyInPink::tc_1316() {
  OUTPUT << "----- Testcase 316 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseItem *passingCard1 = new PassingCard("RobotS");
  BaseItem *passingCard2 = new PassingCard("RobotC");

  BaseBag *sherlockBag = new SherlockBag(sherlock);

  BaseItem *magicBook = new MagicBook();
  sherlockBag->insert(magicBook);
  sherlockBag->insert(passingCard1);
  sherlockBag->insert(passingCard2);
  sherlockBag->get();
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete magicBook;
  delete passingCard1;
  delete passingCard2;
  delete sherlockBag;
}

void TestStudyInPink::tc_1317() {
  OUTPUT << "----- Testcase 317 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 120, 300);

  BaseItem *passingCard = new PassingCard("RobotW");
  BaseItem *firstAid = new FirstAid();
  BaseItem *magicBook = new MagicBook();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(passingCard);
  sherlockBag->insert(firstAid);
  sherlockBag->insert(magicBook);
  sherlockBag->get();
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete magicBook;
  delete passingCard;
  delete firstAid;
  delete sherlockBag;
}

void TestStudyInPink::tc_1318() {
  OUTPUT << "----- Testcase 318 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();
  BaseItem *magicBook = new MagicBook();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(firstAid1);
  sherlockBag->insert(firstAid2);
  sherlockBag->insert(magicBook);
  sherlockBag->get();
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete firstAid1;
  delete firstAid2;
  delete magicBook;
  delete sherlockBag;
}

void TestStudyInPink::tc_1319() {
  OUTPUT << "----- Testcase 319 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->get(MAGIC_BOOK);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete sherlockBag;
}

void TestStudyInPink::tc_1320() {
  OUTPUT << "----- Testcase 320 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 150, 450);

  BaseItem *passingCard1 = new PassingCard("RobotS");
  BaseItem *passingCard2 = new PassingCard("RobotC");

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(passingCard1);
  sherlockBag->insert(passingCard2);
  sherlockBag->get(PASSING_CARD);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete passingCard1;
  delete passingCard2;
  delete sherlockBag;
}

void TestStudyInPink::tc_1321() {
  OUTPUT << "----- Testcase 321 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 120, 300);

  BaseItem *passingCard = new PassingCard("all");
  BaseItem *firstAid = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(passingCard);
  sherlockBag->insert(firstAid);
  sherlockBag->get(FIRST_AID);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete passingCard;
  delete firstAid;
  delete sherlockBag;
}

void TestStudyInPink::tc_1322() {
  OUTPUT << "----- Testcase 322 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 80, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *sherlockBag = new SherlockBag(sherlock);
  sherlockBag->insert(firstAid1);
  sherlockBag->insert(firstAid2);
  sherlockBag->get(FIRST_AID);
  OUTPUT << sherlockBag->str() << endl;
  delete map;
  delete sherlock;
  delete firstAid1;
  delete firstAid2;
  delete sherlockBag;
}

void TestStudyInPink::tc_1336() {
  OUTPUT << "----- Testcase 336 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 150, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void TestStudyInPink::tc_1337() {
  OUTPUT << "----- Testcase 337 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(firstAid1);
  watsonBag->insert(firstAid2);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete firstAid1;
  delete firstAid2;
  delete watsonBag;
}

void TestStudyInPink::tc_1338() {
  OUTPUT << "----- Testcase 338 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  for (int i = 0; i < 14; i++) {
    BaseItem *firstAid = new FirstAid();
    watsonBag->insert(firstAid);
  }
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void TestStudyInPink::tc_1339() {
  OUTPUT << "----- Testcase 339 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  for (int i = 0; i < 16; i++) {
    BaseItem *firstAid = new FirstAid();
    watsonBag->insert(firstAid);
  }
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void TestStudyInPink::tc_1340() {
  OUTPUT << "----- Testcase 340 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  for (int i = 0; i < 25; i++) {
    BaseItem *firstAid = new FirstAid();
    watsonBag->insert(firstAid);
  }
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void TestStudyInPink::tc_1341() {
  OUTPUT << "----- Testcase 341 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->get();
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void TestStudyInPink::tc_1342() {
  OUTPUT << "----- Testcase 342 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *excemptionCard1 = new ExcemptionCard();
  BaseItem *excemptionCard2 = new ExcemptionCard();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard1);
  watsonBag->insert(excemptionCard2);
  watsonBag->get();
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete excemptionCard1;
  delete excemptionCard2;
  delete watsonBag;
}

void TestStudyInPink::tc_1343() {
  OUTPUT << "----- Testcase 343 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *excemptionCard = new ExcemptionCard();
  BaseItem *firstAid = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard);
  watsonBag->insert(firstAid);
  watsonBag->get();
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete excemptionCard;
  delete firstAid;
  delete watsonBag;
}

void TestStudyInPink::tc_1344() {
  OUTPUT << "----- Testcase 344 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(firstAid1);
  watsonBag->insert(firstAid2);
  watsonBag->get();
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete firstAid1;
  delete firstAid2;
  delete watsonBag;
}

void TestStudyInPink::tc_1345() {
  OUTPUT << "----- Testcase 345 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->get(FIRST_AID);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete watsonBag;
}

void TestStudyInPink::tc_1346() {
  OUTPUT << "----- Testcase 346 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *excemptionCard1 = new ExcemptionCard();
  BaseItem *excemptionCard2 = new ExcemptionCard();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard1);
  watsonBag->insert(excemptionCard2);
  watsonBag->get(EXCEMPTION_CARD);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete excemptionCard1;
  delete excemptionCard2;
  delete watsonBag;
}

void TestStudyInPink::tc_1347() {
  OUTPUT << "----- Testcase 347 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *excemptionCard = new ExcemptionCard();
  BaseItem *firstAid = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(excemptionCard);
  watsonBag->insert(firstAid);
  watsonBag->get(FIRST_AID);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete excemptionCard;
  delete firstAid;
  delete watsonBag;
}

void TestStudyInPink::tc_1348() {
  OUTPUT << "----- Testcase 348 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Watson *watson = new Watson(1, "RUU", Position(1, 3), map, 70, 450);

  BaseItem *firstAid1 = new FirstAid();
  BaseItem *firstAid2 = new FirstAid();

  BaseBag *watsonBag = new WatsonBag(watson);
  watsonBag->insert(firstAid1);
  watsonBag->insert(firstAid2);
  watsonBag->get(FIRST_AID);
  OUTPUT << watsonBag->str() << endl;
  delete map;
  delete watson;
  delete firstAid1;
  delete firstAid2;
  delete watsonBag;
}

void TestStudyInPink::tc_1349() {
  OUTPUT << "----- Testcase 349 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 420);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotS *robotS = new RobotS(4, Position(1, 4), map, criminal, sherlock);
  sherlock->move();
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotS;
}

void TestStudyInPink::tc_1350() {
  OUTPUT << "----- Testcase 350 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 251, 390);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotS *robotS = new RobotS(4, Position(1, 4), map, criminal, sherlock);
  sherlock->move();
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotS;
}

void TestStudyInPink::tc_1351() {
  OUTPUT << "----- Testcase 351 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 301, 337);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotW *robotW = new RobotW(4, Position(1, 4), map, criminal, watson);
  sherlock->move();
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotW;
}

void TestStudyInPink::tc_1352() {
  OUTPUT << "----- Testcase 352 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 350, 337);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotSW *robotSW = new RobotSW(4, Position(1, 4), map, criminal, sherlock, watson);
  sherlock->move();
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotSW;
}

void TestStudyInPink::tc_1353() {
  OUTPUT << "----- Testcase 353 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 200, 337);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 200, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotSW *robotSW = new RobotSW(4, Position(1, 4), map, criminal, sherlock, watson);
  sherlock->move();
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotSW;
}

void TestStudyInPink::tc_1354() {
  OUTPUT << "----- Testcase 354 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(1, 4), map, criminal);
  sherlock->move();
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
}

void TestStudyInPink::tc_1355() {
  OUTPUT << "----- Testcase 355 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(2, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 500);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(1, 4), map, criminal);
  sherlock->move();
  OUTPUT << sherlock->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
}

void TestStudyInPink::tc_1356() {
  OUTPUT << "----- Testcase 356 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(5, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 320, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotS *robotS = new RobotS(4, Position(2, 0), map, criminal, sherlock);
  watson->move();
  OUTPUT << watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotS;
}

void TestStudyInPink::tc_1357() {
  OUTPUT << "----- Testcase 357 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(5, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 360, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotW *robotW = new RobotW(4, Position(2, 0), map, criminal, watson);
  watson->move();
  OUTPUT << watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotW;
}

void TestStudyInPink::tc_1358() {
  OUTPUT << "----- Testcase 358 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(5, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 200, 350);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotS *robotS = new RobotS(4, Position(2, 0), map, criminal, sherlock);
  watson->move();
  OUTPUT << watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotS;
}

void TestStudyInPink::tc_1359() {
  OUTPUT << "----- Testcase 359 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(5, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 200, 650);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotSW *robotSW = new RobotSW(4, Position(2, 0), map, criminal, sherlock, watson);
  watson->move();
  OUTPUT << watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotSW;
}

void TestStudyInPink::tc_1360() {
  OUTPUT << "----- Testcase 360 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(5, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 100, 650);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(7, 9), map, criminal);

  RobotSW *robotSW = new RobotSW(4, Position(2, 0), map, criminal, sherlock, watson);
  watson->move();
  OUTPUT << watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
  delete robotSW;
}

void TestStudyInPink::tc_1361() {
  OUTPUT << "----- Testcase 361 -----" << endl;
  int num_walls = 4;
  Position arr_walls[] = {Position(1, 2), Position(2, 3), Position(3, 4), Position(4, 5)};
  int num_fake_walls = 2;
  Position arr_fake_walls[] = {Position(5, 0), Position(4, 0)};

  Map *map = new Map(10, 10, num_walls, arr_walls, num_fake_walls, arr_fake_walls);

  Sherlock *sherlock = new Sherlock(1, "RUU", Position(1, 3), map, 290, 520);

  Watson *watson = new Watson(2, "LU", Position(2, 1), map, 100, 650);

  Criminal *criminal = new Criminal(0, Position(7, 9), map, sherlock, watson);

  RobotC *robotC = new RobotC(3, Position(2, 0), map, criminal);
  watson->move();
  OUTPUT << watson->str() << endl;
  delete map;
  delete sherlock;
  delete watson;
  delete criminal;
  delete robotC;
}

/*
 * Hướng dẫn chạy testcase
 * Chạy 2 lệnh sau trong terminal
 *
 * Lệnh 1:
 * g++ -o main main.cpp fight.cpp
 *
 * Lệnh 2:
 * Chạy full 1000 test
 * ./main
 *
 * Chạy test chỉ định
 * ./main <test>
 * VD: ./main 111
 *
 * Chạy cụm test
 * ./main <from> <to>
 * VD: ./main 1 10
 */

#include "study_in_pink2.h"
#include "vector"
#include "output/tc_bkel.h"

using namespace std;
//void comparefile(int start, int end) {
//  vector<int> result;
//  for (int i = start; i <= end; i++) {
//    string outputFile = "testcase/output/output" + to_string(i) + ".txt";
//    string expectFile = "testcase/expect/expect" + to_string(i) + ".txt";
//    ifstream read_output(outputFile);
//    ifstream read_expect(expectFile);
//    if (read_expect.fail()) {
//      cout << "Error reading file - " << i << endl;
//      return;
//    }
//    string s1, s2;
//    while (read_output >> s1 && read_expect >> s2) {
//      if (s1 != s2) {
//        result.push_back(i);
//        break;
//      }
//    }
//    if (read_output >> s1 || read_expect >> s2) {
//      if (result.size() == 0 || result.size() > 0 && result[result.size() - 1] != i)
//        result.push_back(i);
//    }
//  }
//  if (result.size() == 0) {
//    cout << "Success: test " << start << " to " << end << endl;
//  }
//  else {
//    cout << "percent success : " << (1 - result.size() * 1.0 / (end - start + 1)) * 100 << "%" << endl;
//    cout << "Fail : test [";
//    for (int i = 0; i < result.size() - 1; i++) {
//      cout << result[i] << ", ";
//    }
//    cout << result[result.size() - 1] << "]\n";
//    cout << "link check comparefile: https://www.diffchecker.com/text-compare/" << endl;
//  }
//}

class TestStudyInPink;

int main() {
  for (int i = 0; i < 185; i++) {
    TestStudyInPink::test(i);
  }
//  TestStudyInPink::test(test);
  return 0;
}
//int main(int argc, char *argv[]) {
//  cout << "Start program assignments 2 KTLT" << endl;
//  cout << "Running test : ";
////  int start = 3 end = 3;
//  string folderr = "testcase/output/output";
//  // string folderr = "testcase/expect/expect";
//  if (start == 0) {
//    string outputFile = folderr + "0.txt";
//    OUTPUT.open(outputFile);
//    TestStudyInPink::testBasic();
//    OUTPUT.close();
//    start = 1;
//  }
//  for (int i = start; i <= end; i++) {
//    cout << i << " ";
//    string inputFile = "testcase/input/input" + to_string(i) + ".txt";
//    string outputFile = folderr + to_string(i) + ".txt";
//    OUTPUT.open(outputFile);
//    TestStudyInPink::testAll(inputFile, outputFile);
//    OUTPUT.close();
//  }
//  cout << endl;
//  comparefile(start, end);
//}

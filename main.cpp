// Lệnh chạy:
// g++ -o main main.cpp study_in_pink2.cpp
// ./main
#include "output/tc_bkel.h"

int main(int argc, char *argv[])
{
  OUTPUT.open("testcase/output.txt");
  for (int i = 184; i < 185; i++)
  {

    TestStudyInPink::test(i);
  }
  string outputFile = "testcase/output.txt";
  string expectFile = "testcase/expect.txt";
  ifstream read_output(outputFile);
  ifstream read_expect(expectFile);
  if (read_expect.fail())
  {
    cout << "Error reading file" << endl;
    OUTPUT.close();
    return 0;
  }
  string s1, s2;
  bool success = true;
  while (read_output >> s1 && read_expect >> s2)
  {
    if (s1 != s2)
    {
      success = false;
      break;
    }
  }
  cout << (success ? "Success" : "Fail") << endl;
  OUTPUT.close();
}
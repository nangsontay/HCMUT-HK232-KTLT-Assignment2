//
//       (`-')               (`-')      _      (`-')  _<-. (`-')_
//      _(OO )     .->       ( OO).->  (_)     ( OO).-/   \( OO) )
// ,--.(_/,-.\(`-')----.     /    '._  ,-(`-')(,------.,--./ ,--/
// \   \ / (_/( OO).-.  '    |'--...__)| ( OO) |  .---'|   \ |  |
//  \   /   / ( _) | |  |    `--.  .--'|  |  )(|  '--. |  . '|  |)
// _ \     /_) \|  |)|  |       |  |  (|  |_/  |  .--' |  |\    |
// \-'\   /     '  '-'  '       |  |   |  |'-> |  `---.|  | \   |
//     `-'       `-----'        `--'   `--'    `------'`--'  `--'
//

// Lệnh chạy:
// g++ -o main main.cpp study_in_pink2.cpp
// ./main
#include "output/tc_bkel.h"

int main(int argc, char *argv[])
{
    string testPath = "testcase/output.txt";
    // string testPath = "testcase/expect.txt";
    OUTPUT.open(testPath);
    for (int i = 0; i < 381; i++)
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
#include <iostream>
using namespace std;

namespace NA
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int num4 = 40;
    // add 1 more vatiable num8 in both the NA and NB namesapce and test

    namespace NB
    {
        int num5 = 50;
        int num6 = 60;
        int num7 = 70;

    }

    // add one more namesapce NC and test
}

// void f1()
// {
//     using namespace NA::NB;
//     cout << "Num5 = " << num5 << endl;
//     cout << "Num6 = " << num6 << endl;
//     cout << "Num7 = " << num7 << endl;
// }

using namespace NA;
int main()
{
    // use the using direcetive locally and test

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;
    cout << "Num3 = " << num3 << endl;
    cout << "Num4 = " << NA::num4 << endl;
    cout << "Num5 = " << NB::num5 << endl;
    using namespace NB;
    cout << "Num6 = " << num6 << endl;
    cout << "Num7 = " << num7 << endl;

    // cout << "F1 called ->" << endl;
    //  f1();
    return 0;
}
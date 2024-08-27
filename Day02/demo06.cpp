#include <iostream>
using namespace std;

int num1 = 100;
int num2 = 200;

namespace NA
{
    int num1 = 10;
    class Date
    {
    };
}

namespace NB
{
    int num1 = 1000;

    class Date
    {
    };
}

int main()
{
    cout << "Num1 from global scope - " < < < < endl;
    cout << "Num1 from NA scope - " << NA::num1 << endl;
    cout << "Num1 from NB scope - " << NB::num1 << endl;

    NA::Date d1; // NA
    NB::Date d2; // NB
    return 0;
}
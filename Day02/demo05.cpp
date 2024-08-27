#include <iostream>
using namespace std;

namespace NA
{
    int num1 = 10;
    void f1()
    {
    }
}

int main()
{
    int num1 = 20;
    cout << "Value of num1 from local scope= " << num1 << endl;  // 20
    cout << "Value of num1 from NA scope= " << NA::num1 << endl; // 10
    NA::f1();
    return 0;
}
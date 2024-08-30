#include <iostream>
using namespace std;

int num1;        // data
static int num2; // data

int main()
{
    int num3; // stack
    int num4; // stack
    int *ptr = new int();
    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;
    cout << "Num3 = " << num3 << endl;
    cout << "Num4 = " << num4 << endl;
    cout << "*ptr = " << *ptr << endl;
    return 0;
}
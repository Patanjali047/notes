#include <iostream>
using namespace std;

void provideValue(int &num)
{
    num = 10;
    cout << "Address of ref = " << &num << endl;
    cout << "Value of ref = " << num << endl;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int &ref = num1;
    ref = num2; // value of num2 is copied inside num1
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    // int &ref2 = new int; // NOT OK
    return 0;
}

int main1()
{
    int num;
    cout << "Address of num = " << &num << endl;
    provideValue(num);
    cout << "Value of num = " << num << endl;
    return 0;
}
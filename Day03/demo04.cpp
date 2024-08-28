#include <iostream>
using namespace std;

class Test
{
    int num1;
    const int num2;

public:
    // const data members can be initialized inside ctor members initializer list only
    Test() : num2(20)
    {
        // cannot initialize inside the ctor body
        // num2 = 20;
    }

    void f1() const // (const Test *const this)
    {
        cout << num1 << endl;
        cout << num2 << endl;
        // we cannot change the state of an object
        // inside const member functions
        // num1 = 100; // NOT OK
        // num2 = 200; // NOT OK
    }

    void f2() //(Test * const this)
    {
        cout << num1 << endl;
        cout << num2 << endl;
        num1 = 100;
        // num2 = 200;// NOT OK
    }
};

int main()
{
    const int num1 = 10;
    // num1 = 20; // NOT OK

    Test t1;
    t1.f1();
    t1.f2();

    const Test t2;
    t2.f1();
    // t2.f2(); // NOT OK

    int num2 = 20;
    num2 = 200;
    const int *ptr = &num2;
    *ptr = 200;
}
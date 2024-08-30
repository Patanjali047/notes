#include <iostream>
using namespace std;

class Base
{
    int num1;

public:
    Base()
    {
        cout << "Base::ctor" << endl;
    }

    ~Base()
    {
        cout << "Base::Dtor" << endl;
    }
};

class Derived : Base
{
    int num2;

public:
    Derived()
    {
        cout << "Derived::ctor" << endl;
    }

    ~Derived()
    {
        cout << "Derived::Dtor" << endl;
    }
};

int main()
{
    // Base b1;
    Derived d1;

    // cout << "Size of base = " << sizeof(b1) << endl;
    cout << "Size of derived = " << sizeof(d1) << endl;

    return 0;
}
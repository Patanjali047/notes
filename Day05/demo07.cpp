#include <iostream>
using namespace std;

class A
{
    int num1;

public:
    A()
    {
        cout << "A::Ctor" << endl;
    }
};

class B : virtual A
{
    int num2;

public:
    B()
    {
        cout << "B::Ctor" << endl;
    }
};

class C : virtual A
{
    int num3;

public:
    C()
    {
        cout << "C::Ctor" << endl;
    }
};

class D : B
{
    int num4;

public:
    D()
    {
        cout << "D::Ctor" << endl;
    }
};

int main()
{
    // A a; // A::ctor
    // B b; // A::ctor, B::ctor
    //  C c; // A::ctor, C::ctor
    D d;
    return 0;
}
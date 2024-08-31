#include <iostream>
using namespace std;

class Base
{
public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
    virtual void f2()
    {
        cout << "Base::f2()" << endl;
    }
};

class Derived : public Base
{
public:
    // function overriding
    void f2()
    {
        cout << "Derived::f2()" << endl;
    }

    void f3()
    {
        cout << "Derived::f3()" << endl;
    }
};

int main()
{
    // Base *bptr = new Derived();
    // bptr->f1();
    // bptr->f2(); // Derived::f2(); -> Late Binding due to the f2 made as virtual
    cout << "Size of Base class =" << sizeof(Base) << endl;
    return 0;
}

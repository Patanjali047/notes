#include <iostream>
using namespace std;

class Test
{
private:
    int num1;
    static int num2; // data section

public:
    Test()
    {
        this->num1 = 10;
        // num2 = 20;
    }

    Test(int num1)
    {
        this->num1 = num1;
    }

    int getNum1()
    {
        return num1;
    }

    static int getNum2()
    {
        return num2;
    }

    void f1() // this
    {
        num1 = 100;
        // this->num2 = 200; // Non standard way
        Test::num2 = 200;
    }

    // do not get this pointer
    static void f2()
    {
        // num1 = 100; // NOT OK
        num2 = 200;
    }

    void displayTest()
    {
        cout << "Num1 = " << num1 << endl;
        cout << "Num2 = " << num2 << endl;
    }
};
// static data memebrs must be initialized outside the class
int Test::num2 = 40;

int main()
{
    // static memebers are designed to be accessed using
    // classname and scope resolution operator(::)
    cout << "Value of static data member num2 = " << Test::getNum2() << endl;
    Test t1;
    t1.f2();

    return 0;
}

int main1()
{
    Test t1;
    t1.displayTest(); // 10,40
    cout << "Size of t1 = " << sizeof(t1) << endl;

    Test t2(20);
    t2.displayTest(); //

    Test t3(30);
    t3.displayTest();
    return 0;
}
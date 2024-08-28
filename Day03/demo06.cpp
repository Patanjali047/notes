#include <iostream>
using namespace std;

class Point
{
    int *xptr;
    int *yptr;

public:
    Point()
    {
        cout << "Inside Parameterless Ctor" << endl;
        // Initializatio of data members
        xptr = new int;
        yptr = new int;
        *xptr = 1;
        *yptr = 1;
    }

    void displayPoint()
    {
        cout << "Point (" << *xptr << "," << *yptr << ")" << endl;
    }

    void deallocate()
    {
        delete xptr;
        delete yptr;
        xptr = NULL;
        yptr = NULL;
    }
};

int main()
{
    Point p1;
    p1.displayPoint();
    p1.deallocate();

    Point p2;
    Point p3;
    Point p4;

    p2.deallocate();
    p4.deallocate();

    return 0;
}

int main1()
{
    // int *ptr = (int *)malloc( * sizeof(int));
    // free(ptr);
    int *ptr = new int;
    int *ptr2 = new int[2];
    *ptr = 10;
    cout << "Value - " << *ptr << endl;
    delete ptr; // To avoid memory leakage
    ptr = NULL; // To avoid dangling pointer
    return 0;
}
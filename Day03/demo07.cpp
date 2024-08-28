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
        displayPoint();
    }

    Point(int x, int y)
    {
        cout << "Inside Parameterized Ctor" << endl;
        xptr = new int;
        yptr = new int;
        *xptr = x;
        *yptr = y;
        displayPoint();
    }

    void displayPoint()
    {
        cout << "Point (" << *xptr << "," << *yptr << ")" << endl;
    }

    // Destructor
    ~Point()
    {
        cout << "Inside Destructor" << endl;
        displayPoint();
        delete xptr;
        delete yptr;
        xptr = NULL;
        yptr = NULL;
    }
};

int main()
{
    Point p1;
    Point p2(2, 3);

    return 0;
}

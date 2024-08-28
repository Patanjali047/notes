#include <iostream>
using namespace std;

class Point
{
    int xaxis;
    int yaxis;

public:
    // Parameterless Constructor
    Point()
    {
        cout << "Inside Parameterless Ctor" << endl;
        xaxis = 1;
        yaxis = 1;
    }

    // Parameterized Constructor
    Point(int xaxis, int yaxis)
    {
        cout << "Inside Parameterized Ctor" << endl;
        this->xaxis = xaxis;
        this->yaxis = yaxis;
    }

    Point(int value)
    {
        xaxis = value;
        yaxis = value;
    }

    void displayPoint()
    {
        cout << "Point = (" << xaxis << "," << yaxis << ")" << endl;
    }
};

int main()
{
    Point p1; // Parameterless Constructor
    p1.displayPoint();
    Point p2(2, 3); // Paramterized Ctor
    Point p3(4, 5); // Paramterized Ctor

    p2.displayPoint();
    p3.displayPoint();

    Point p4(5);
    return 0;
}
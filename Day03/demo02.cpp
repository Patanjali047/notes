#include <iostream>
using namespace std;

class Point
{
    int xaxis;
    int yaxis;

public:
    // Initialization inside the Ctor body
    // The order of datamembers does not matter at the time of initialization
    // Point(int value)
    // {
    //     yaxis = ++value;
    //     xaxis = value;
    // }

    // Ctor members initializer list
    // The initialization is done on the order of declaration of the data members of the class
    Point(int value) : yaxis(++value), xaxis(value)
    {
    }

    Point(int xaxis, int yaxis) : xaxis(xaxis), yaxis(yaxis)
    {
    }

    void displayPoint()
    {
        cout << "Point = (" << xaxis << "," << yaxis << ")" << endl;
    }
};

int main()
{
    Point p1(5);
    p1.displayPoint();

    Point p2(3, 4);
    p2.displayPoint();
    return 0;
}
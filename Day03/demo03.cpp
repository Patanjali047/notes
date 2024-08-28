#include <iostream>
using namespace std;

class Point
{
    int xaxis;
    int yaxis;
    int zaxis;

public:
    // Constructor Delegation  - C++11 concept
    Point() : Point(1, 1, 1)
    {
        cout << "Parameterless" << endl;
    }

    // Constructor Delegation
    Point(int value) : Point(value, value)
    {
        zaxis = ++value;
    }

    Point(int xaxis, int yaxis)
    {
        this->xaxis = xaxis;
        this->yaxis = yaxis;
    }

    Point(int xaxis, int yaxis, int zaxis)
    {
        cout << "Parameterized" << endl;
        this->xaxis = xaxis;
        this->yaxis = yaxis;
        this->zaxis = zaxis;
    }

    void displayPoint()
    {
        cout << "Point = (" << xaxis << "," << yaxis << ")" << endl;
    }
};

int main()
{
    Point p1;
    Point p2(3, 4);

    return 0;
}
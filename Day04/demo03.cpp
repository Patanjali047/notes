#include <iostream>
using namespace std;

class Circle
{
    int radius;
    static double const PI;

public:
    Circle(int radius)
    {
        this->radius = radius;
    }

    void calculateArea()
    {
        double area = PI * radius * radius;
        cout << "Area of circle = " << area << endl;
    }
};

double const Circle::PI = 3.14;

int main()
{
    Circle c1(5);
    Circle c2(6);
    Circle c3(7);
    c1.calculateArea();
    c2.calculateArea();
    c3.calculateArea();
    return 0;
}
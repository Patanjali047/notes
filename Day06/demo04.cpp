#include <iostream>
using namespace std;

// abstract class
class Shape
{
public:
    // pure virtual functions
    virtual void acceptData() = 0;

    virtual void calculateArea() = 0;
};

class Circle : public Shape
{
    int radius;

public:
    void acceptData()
    {
        cout << "Enter radius - ";
        cin >> radius;
    }
    void calculateArea()
    {
        cout << "Area of Cicle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
    int length;
    int breadth;

public:
    void acceptData()
    {
        cout << "Enter length - ";
        cin >> length;
        cout << "Enter breadth - ";
        cin >> breadth;
    }
    void calculateArea()
    {
        cout << "Area of rectangle = " << length * breadth << endl;
    }
};

int main()
{
    int choice;
    Shape *shape = NULL;
    do
    {
        cout << "0. EXIT" << endl;
        cout << "1. Area f Circle" << endl;
        cout << "2. Area of Rectangle" << endl;
        cout << "Enter your choice - ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thank you for using the application .. :)" << endl;
            break;
        case 1:
            shape = new Circle();
            break;
        case 2:
            shape = new Rectangle();
            break;
        default:
            cout << "Wrong choice .. :(" << endl;
            break;
        }
        if (shape != NULL)
        {
            shape->acceptData();
            shape->calculateArea();
            delete shape;
            shape = NULL;
        }

    } while (choice != 0);
    return 0;
}

int main2()
{
    // we cannot cretae object of abstract class
    // Shape s;// NOT OK
    Shape *sptr;            // OK
    sptr = new Rectangle(); // upcasting
    sptr->acceptData();
    sptr->calculateArea();
    return 0;
}

int main1()
{
    Circle *c = new Circle();
    c->acceptData();
    c->calculateArea();
    Rectangle *r = new Rectangle();
    r->acceptData();
    r->calculateArea();
    return 0;
}
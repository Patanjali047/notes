#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void acceptDate()
    {
        cout << "Enter day month and year - ";
        cin >> day >> month >> year;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Car
{
    string name;
    string number;

public:
    Car()
    {
        this->name = "";
        this->number = "";
    }

    Car(string name, string number)
    {
        this->name = name;
        this->number = number;
    }

    void acceptCar()
    {
        cout << "Enter the name of the car - ";
        cin >> name;
        cout << "Enter the number of the car - ";
        cin >> number;
    }

    void displayCarDetails()
    {
        cout << "Car Name - " << name << endl;
        cout << "Car Number - " << number << endl;
    }
};

// Dependent
class Employee
{
    int empid;
    string name;
    double salary;
    // Dependency
    Date doj; // Association -> Composition

    Car *car; // Association -> Aggegration

public:
    Employee()
    {
        this->empid = 0;
        this->name = "";
        this->salary = 0;
        car = NULL;
    }

    void acceptEmployee()
    {
        cout << "Enter empid - ";
        cin >> empid;
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter salary - ";
        cin >> salary;
        cout << "Enter the date of joining - " << endl;
        doj.acceptDate();
    }

    void displayEmployee()
    {
        cout << "Empid - " << empid << endl;
        cout << "Name - " << name << endl;
        cout << "Salary - " << salary << endl;
        cout << "Date of Joining -> ";
        doj.displayDate();
        if (car != NULL)
        {
            cout << "Car Deatails -> " << endl;
            car->displayCarDetails();
        }
    }

    void addCar()
    {
        car = new Car();
        car->acceptCar();
    }

    ~Employee()
    {
        if (car != NULL)
        {
            delete car;
            car = NULL;
        }
    }
};

int main()
{
    Employee e1;
    e1.acceptEmployee();

    Employee e2;
    e2.acceptEmployee();
    e2.addCar();

    e1.displayEmployee();
    e2.displayEmployee();
    return 0;
}
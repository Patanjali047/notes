#include <iostream>
using namespace std;

class Employee
{
    int empid;
    string name;
    double salary;

public:
    Employee()
    {
    }

    Employee(int empid, string name, double salary)
    {
        this->empid = empid;
        this->name = name;
        this->salary = salary;
    }

    void acceptData()
    {
        cout << "Enter the empid - ";
        cin >> empid;
        cout << "Enter the name - ";
        cin >> name;
        cout << "Enter the salary - ";
        cin >> salary;
    }

    void displayData()
    {
        cout << "Empid - " << empid << endl;
        cout << "Name - " << name << endl;
        cout << "Salary - " << salary << endl;
    }
};

int main()
{
    Employee *arr[5];
    // int **ptr = new int *[5];
    // Employee** ptr = new Employee*[5];
    arr[0] = new Employee;
    arr[0]->acceptData();
    arr[1] = new Employee(2, "Mukesh", 20000);

    arr[0]->displayData();
    arr[1]->displayData();

    delete arr[0];
    delete arr[1];
    arr[0] = NULL;
    arr[1] = NULL;

    return 0;
}

int main1()
{
    Employee arr[5];
    // int *ptr = new int[5];
    // Employee ptr = new Employee[5]
    arr[0].acceptData();
    arr[1].acceptData();

    arr[0].displayData();
    arr[1].displayData();
    return 0;
}

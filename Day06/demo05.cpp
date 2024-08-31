#include <iostream>
using namespace std;

class Person
{
    // protected:
    string name;

public:
    Person()
    {
        cout << "Person() - " << endl;
    }
    Person(string name)
    {
        cout << "Person(string) - " << endl;
        this->name = name;
    }
    virtual void accept()
    {
        cout << "Enter the name - ";
        cin >> name;
    }

    virtual void display()
    {
        cout << "Name - " << name << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }
};

class Employee : public Person
{
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Employee()" << endl;
    }
    Employee(int empid, string name, double salary) : Person(name)
    {
        cout << "Employee(int,string,double)" << endl;
        this->id = empid;
        // this->name = name;
        this->salary = salary;
    }
    void accept()
    {
        cout << "Enter emp id - ";
        cin >> id;

        Person::accept();

        cout << "Enter salary - ";
        cin >> salary;
    }

    void display()
    {
        cout << "Empid - " << id << endl;
        Person::display();
        cout << "Salary - " << salary << endl;
    }

    void calculateTax()
    {
        cout << "Total Tax = " << (0.1 * salary) << endl;
    }
};

class Student : public Person
{
private:
    int rollno;
    double marks;

public:
    Student()
    {
    }
    Student(int rollno, string name, double marks)
    {
        this->rollno = rollno;
        this->marks = marks;
        setName(name); // OK
        // this->setName(name); // OK
        // Person::setName(name); // OK
    }
    void accept()
    {
        cout << "Enter rollno - ";
        cin >> rollno;
        Person::accept();
        cout << "Enter Marks - ";
        cin >> marks;
    }

    void display()
    {
        cout << "Rollno - " << rollno << endl;
        Person::display();
        cout << "Marks - " << marks << endl;
    }
    void calculateTotalPercent()
    {
        cout << "Total Percentage - " << ((marks * 100) / 100) << endl;
    }
};

int main()
{
    Person *arr[3];
    arr[0] = new Employee(1, "Anil", 10000);

    arr[1] = new Student();
    arr[1]->accept();

    arr[2] = new Student(1, "Mukesh", 70);

    for (int i = 0; i < 3; i++)
        arr[i]->display();
    return 0;
}

int main1()
{
    // Person *ptr = new Employee(); // upcasting
    Person *ptr = new Student(); // upcasting
    ptr->accept();
    ptr->display();
    return 0;
}
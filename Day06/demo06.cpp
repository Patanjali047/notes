#include <iostream>
using namespace std;

class Person
{
    string name;

public:
    Person()
    {
    }
    Person(string name)
    {
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
    }
    Employee(int empid, string name, double salary) : Person(name)
    {
        this->id = empid;
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
        setName(name);
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
int main1()
{
    Person *ptr = new Employee(); // upcasting
    cout << typeid(ptr).name() << endl;
    cout << typeid(*ptr).name() << endl;

    cout << typeid(Employee).name() << endl;
    cout << typeid(Student).name() << endl;

    Person *arr[2];
    arr[0] = new Employee(101, "Anil", 10000);
    arr[1] = new Student(1, "Pratik", 60);
    cout << typeid(*arr[0]).name() << endl;
    cout << typeid(*arr[1]).name() << endl;
    return 0;
}

int main()
{
    Person *arr[5];
    // upcasting
    arr[0] = new Employee(101, "Anil", 10000);
    arr[1] = new Employee(102, "Mukesh", 20000);
    arr[2] = new Student(1, "Pratik", 60);
    arr[3] = new Employee(103, "Sham", 30000);
    arr[4] = new Student(2, "Onkar", 70);

    // print all the employees
    cout << "Employee List ->" << endl;
    for (int i = 0; i < 5; i++)
        if (typeid(*arr[i]).name() == typeid(Employee).name())
        {
            arr[i]->display();
            Employee *e = (Employee *)arr[i]; // Downcasting
            e->calculateTax();
        }
    // print all the students
    cout << "Student List ->" << endl;
    for (int i = 0; i < 5; i++)
        if (typeid(*arr[i]).name() == typeid(Student).name())
        {
            arr[i]->display();
            Student *s = (Student *)arr[i]; // Downcasting
            s->calculateTotalPercent();
        }
    return 0;
}

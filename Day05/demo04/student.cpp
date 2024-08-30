#include "student.h"

Student::Student()
{
    this->rollno = 0;
    this->name = "";
    this->marks = 0;
}

Student::Student(int rollno, string name, double marks)
{
    this->rollno = rollno;
    this->name = name;
    this->marks = marks;
}

void Student::displayStudent()
{
    cout << "Rollno - " << rollno << endl;
    cout << "Name - " << name << endl;
    cout << "Marks - " << marks << endl;
}

void Student::acceptStudent()
{
    cout << "Enter the rollno - ";
    cin >> rollno;
    cout << "Enter the name - ";
    cin >> name;
    cout << "Enter the marks - ";
    cin >> marks;
}

void Student::setRollno(int rollno)
{
    this->rollno = rollno;
}
void Student::setName(string name)
{
    this->name = name;
}
void Student::setMarks(double marks)
{
    this->marks = marks;
}

int Student::getRollno()
{
    return rollno;
}
string Student::getName()
{
    return name;
}
double Student::getMarks()
{
    return marks;
}

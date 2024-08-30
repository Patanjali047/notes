#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    double marks;

public:
    Student();
    Student(int rollno, string name, double marks);

    void displayStudent();
    void acceptStudent();

    void setRollno(int rollno);
    void setName(string name);
    void setMarks(double marks);

    int getRollno();
    string getName();
    double getMarks();
};

#endif
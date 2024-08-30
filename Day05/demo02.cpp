#include <iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    double marks;

public:
    Student()
    {
    }
    Student(int rollno, string name, double marks)
    {
        this->rollno = rollno;
        this->name = name;
        this->marks = marks;
    }

    void displayStudent()
    {
        cout << "Rollno - " << rollno << endl;
        cout << "Name - " << name << endl;
        cout << "Marks - " << marks << endl;
    }
};
int main()
{
    Student **ptr = new Student *[3];
    // DBDA students
    ptr[0] = new Student[3]{
        Student(1, "Anil", 50),
        Student(2, "Mukesh", 60),
        Student(3, "Ram", 70)};

    // DITIS students
    ptr[1] = new Student[3]{
        Student(1, "Sham", 80),
        Student(2, "Pratik", 90),
        Student(3, "Omkar", 95)};

    for (int r = 0; r < 2; r++)
    {
        if (r == 0)
            cout << "DBDA student list -->" << endl;
        else if (r == 1)
            cout << "DITISS student list -->" << endl;
        for (int c = 0; c < 3; c++)
        {
            ptr[r][c].displayStudent();
        }
    }

    delete[] ptr[0];
    delete[] ptr[1];
    delete[] ptr;
    ptr = NULL;

    return 0;
}
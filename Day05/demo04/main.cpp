#include "student.h"

int main()
{
    // Student* arr[5];
    // Student **ptr = new Student*[5];
    Student arr[5];
    int index = 0;
    int choice;
    do
    {
        cout << "0. EXIT" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "Enter your choice - ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thank you for using app.. :)" << endl;
            break;

        case 1:
            if (index < 5)
            {
                // arr[index] = new Student();
                arr[index].acceptStudent();
                index++;
            }
            else
                cout << "Array is full..." << endl;
            break;

        case 2:
            for (int i = 0; i < index; i++)
                arr[i].displayStudent();
            break;

        default:
            cout << "Wrong choice.. :(" << endl;
            break;
        }
    } while (choice != 0);
}

int main1()
{
    Student s1;
    s1.acceptStudent();
    s1.displayStudent();
    return 0;
}

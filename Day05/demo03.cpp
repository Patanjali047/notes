#include <iostream>
using namespace std;

// const int sunday = 1;
// const int January = 1;
// int monday = 2;
// int tuesday = 3;
// int wednesday = 4;
// int thursday = 5;
// int friday = 6;
// int saturday = 7;

enum Week
{
    sunday = 1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

class Month
{
public:
    static const int January = 1;
    static const int Feburary = 1;
    static const int March = 1;
    static const int April = 1;
    static const int May = 1;
};

enum EMenu
{
    EXIT,
    ADD_STUDENT,
    DISPLAY_STUDENT,
    FIND_STUDENT
};

int main()
{
    int choice;
    do
    {
        cout << "0. EXIT" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Display All stduents" << endl;
        cout << "3. Find Student" << endl;
        cout << "Enter your choice = ";
        cin >> choice;
        // EMenu ch = (EMenu)choice;
        switch (choice)
        {
        case EXIT:
            cout << "Thank you for using the application" << endl;
            break;
        case ADD_STUDENT:
            cout << "Student Added" << endl;
            break;
        case DISPLAY_STUDENT:
            cout << "Display Student" << endl;
            break;
        case FIND_STUDENT:
            cout << "Find Student" << endl;
            break;
        default:
            cout << "Wrong choice entered :(" << endl;
            break;
        }

    } while (choice != EXIT);
    return 0;
}
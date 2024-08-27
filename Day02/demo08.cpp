#include <iostream>
using namespace std;

namespace NTime
{
    class Time
    {
        int hrs;
        int mins;

    public:
        void acceptTime()
        {
            cout << "Enter hrs and mins - ";
            cin >> hrs >> mins;
        }
        void displayTime()
        {
            cout << "Time = " << hrs << " : " << mins << endl;
        }
    };
}

int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Accept Time" << endl;
    cout << "2. Display Time" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    NTime::Time t1;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            t1.acceptTime();
            break;
        case 2:
            t1.displayTime();
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

class Time
{
    // Data members
    int hrs;
    int mins;

public:
    // Member Functions
    void acceptTime()
    {
        cout << "Enter the hrs - ";
        cin >> hrs;
        cout << "Enter the mins - ";
        cin >> mins;
    }

    void displayTime()
    {
        cout << "Time - " << hrs << " : " << mins << endl;
    }
};

int main()
{
    Time t; // Object of the class
    // t.hrs; // NOT OK -> By default memebrs of the class are private
    cout << "Size of Time = " << sizeof(t) << endl;
    t.acceptTime();
    t.displayTime();

    return 0;
}
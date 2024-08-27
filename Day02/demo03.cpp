#include <iostream>
using namespace std;

class Time
{
private:
    int hrs;
    int mins;

public:
    void acceptTime() // acceptTime(Time *const this)
    {
        cout << "Enter the hrs - ";
        cin >> hrs;
        cout << "Enter the mins - ";
        cin >> mins;
    }

    void displayTime() // displayTime(Time *const this)
    {
        cout << "Time - " << hrs << " : " << this->mins << endl;
    }
};

int main()
{
    Time t1;
    Time t2;
    Time t3;

    t1.acceptTime();  // acceptTime(&t1);
    t2.acceptTime();  // acceptTime(&t2);
    t3.acceptTime();  // acceptTime(&t3);
    t1.displayTime(); // displayTime(&t1);
    return 0;
}
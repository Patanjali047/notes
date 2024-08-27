#include <iostream>
using namespace std;

struct Time
{
    // Members
    int hrs;
    int mins;

    void acceptTime()
    {
        cout << "Enter the hrs - ";
        cin >> hrs;
        // scanf("%d", hrs);
        std::cout << "Enter the mins - ";
        std::cin >> mins;
    }

    void displayTime()
    {
        cout << "Time - " << hrs << " : " << mins << endl;
    }
};

int main()
{
    struct Time t1;
    // t1.hrs = 10; // write - NOT OK
    //  cout << t1.hrs; // Read - NOT OK
    //  t1.mins;// NOT OK
    t1.acceptTime();
    t1.displayTime();

    return 0;
}
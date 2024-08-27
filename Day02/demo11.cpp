#include <iostream>
using namespace std;
class Time
{

    int hrs;
    int mins;

public:
    // Mutator -> Setters
    void setHrs(int hrs)
    {
        this->hrs = hrs;
    }

    void setMins(int mins)
    {
        this->mins = mins;
    }

    // Inspector -> Getters
    int getHrs()
    {
        return hrs;
    }
    int getMins()
    {
        return mins;
    }
};
int main()
{
    Time t1;
    // t1.hrs = 10; // cannot access that hrs outside the class
    t1.setHrs(10);
    // cout << t1.hrs << endl; // NOT OK
    cout << t1.getHrs() << endl;
    return 0;
}
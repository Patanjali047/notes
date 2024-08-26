#include <iostream>
using namespace std;
struct Time
{
    int hrs;
    int mins;

    void acceptTime()
    {
        printf("Enter the hrs - ");
        scanf("%d", &hrs);
        printf("Enter the mins - ");
        scanf("%d", &mins);
    }
    void displayTime()
    {
        printf("Time = %d : %d", hrs, mins);
    }
};

// c-style
// void acceptTime(struct Time *tptr)
// {
//     printf("Enter the hrs - ");
//     scanf("%d", &tptr->hrs);
//     printf("Enter the mins - ");
//     scanf("%d", &tptr->mins);
// }

// c-style
// void displayTime(struct Time *tptr)
// {
//     printf("Time = %d : %d", tptr->hrs, tptr->mins);
// }

int main()
{
    struct Time t1;
    // acceptTime(&t1);
    // t1.hrs = 10;
    t1.acceptTime();
    // displayTime(&t1);
    t1.displayTime();
    return 0;
}
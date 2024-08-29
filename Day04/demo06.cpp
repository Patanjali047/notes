#include <iostream>
using namespace std;

int main()
{
    int **ptr = new int *[2];
    ptr[0] = new int[3];
    ptr[1] = new int[3];

    ptr[0][0] = 10;
    ptr[0][1] = 20;
    ptr[0][2] = 30;
    ptr[1][0] = 40;
    ptr[1][1] = 50;
    ptr[1][2] = 60;

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
            cout << "element = " << ptr[r][c] << endl;
    }

    delete[] ptr[0];
    ptr[0] = NULL;
    delete[] ptr[1];
    ptr[1] = NULL;
    delete[] ptr;
    ptr = NULL;
}

int main1()
{
    int arr[2][3];

    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[0][2] = 30;

    arr[1][0] = 40;
    arr[1][1] = 50;
    arr[1][2] = 60;

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Element = " << arr[r][c] << endl;
        }
    }
    return 0;
}
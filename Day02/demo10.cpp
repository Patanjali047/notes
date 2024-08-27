#include <iostream>
using namespace std;
// Default Argument Function
void add(int num1, int num2, int num3 = 0, int num4 = 0)
{
    cout << "Addition = " << num1 + num2 + num3 + num4 << endl;
}

void mul(int n1, int n2, int n3 = 1, int n4 = 1)
{
    cout << "Multiplication = " << n1 * n2 * n3 * n4 << endl;
}

int main()
{

    add(10, 20, 30, 40);
    add(10, 20, 30);
    add(10, 20);
    mul(2, 3, 4, 5);
    mul(2, 3, 4);
    mul(2, 3);

    return 0;
}
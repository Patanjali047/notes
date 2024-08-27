#include <iostream>
using namespace std;
void square(int num)
{
    cout << "Square = " << num * num << endl;
}

// function overloading by change in type of parameter
void square(double num)
{
    cout << "Square = " << num * num << endl;
}

void add(int num1, int num2)
{
    cout << "Addition = " << num1 + num2 << endl;
}
// function overloading by change in no of parameters
void add(int num1, int num2, int num3)
{
    cout << "Addition = " << num1 + num2 + num3 << endl;
}
// function overloading by change in no of parameters
void add(int num1, int num2, int num3, int num4)
{
    cout << "Addition = " << num1 + num2 + num3 + num4 << endl;
}

void division(int numerator, double denominator)
{
    cout << "division = " << numerator / denominator << endl;
}

void division(double numerator, int denominator)
{
    cout << "division = " << numerator / denominator << endl;
}

int main()
{
    square(5);
    square(5.5);
    add(10, 20);
    add(10, 20, 30);
    add(10, 20, 30, 40);
    division(10, 2.5);
    division(10.8, 2);
    return 0;
}
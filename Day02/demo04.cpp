#include <iostream>
using namespace std;

// Cconsidered as a part of global namespace
int num1 = 10;

int main()
{
    int num1 = 20;
    cout << "Value of num1 from local scope= " << num1 << endl;    // 20
    cout << "Value of num1 from global scope= " << ::num1 << endl; // 10
    return 0;
}
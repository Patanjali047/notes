#include <iostream>
using namespace std;

class BankAccount
{
    const int accno;
    string name;
    double balance;

public:
    BankAccount(int accno, string name, double balance) : accno(accno)
    {
        this->name = name;
        this->balance = balance;
    }

    void displayAccountDeatils() const
    {
        cout << "Accno = " << accno << endl;
        cout << "Name = " << name << endl;
        cout << "Balance = " << balance << endl;
    }

    int getAccno() const
    {
        return accno;
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    BankAccount a1(1001, "rohan", 10000);
    a1.displayAccountDeatils();
    a1.displayAccountDeatils();
}
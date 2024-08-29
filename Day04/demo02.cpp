#include <iostream>
using namespace std;
class BankAccount
{
    const int accno;
    string name;
    double balance;
    static int generate_accno;

public:
    BankAccount(string name, double balance) : accno(++generate_accno)
    {
        // this->accno = ++generate_accno;
        this->name = name;
        this->balance = balance;
    }

    void displayAccountDetails()
    {
        cout << "Accno - " << accno << endl;
        cout << "Name - " << name << endl;
        cout << "Balance - " << balance << endl;
    }

    // create the mutator and inspector for the gennerate_accno
};
int BankAccount::generate_accno = 1000;

int main()
{
    BankAccount a1("Anil", 10000);
    BankAccount a2("Mukesh", 20000);

    a1.displayAccountDetails();
    a2.displayAccountDetails();
    return 0;
}
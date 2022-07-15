#include <iostream>
using namespace std;
class BankAcc
{
    char name[10], typeofacc[10];
    long balance;

public:
    void getsetdata()
    {
        cout << "Enter account holders name :" << endl;
        cin >> name;
        cout << "Type of account? :" << endl;
        cin >> typeofacc;
        cout << "Enter balance:" << endl;
        cin >> balance;
    }

    void deposit()
    {
        long d;
        cout << "Enter the amount to deposit" << endl;
        cin >> d;
        balance = balance + d;
    }

    friend void withdraw(BankAcc);
};

void withdraw(BankAcc b)
{
    long w;
    cout << "Enter the amount you want to withdraw:" << endl;
    cin >> w;
    if (b.balance < w)
    {
        cout << "You cant withdraw Rs." << w << endl;
        cout<<"Error:Not sufficient Funds"<<endl;
    }

    else
    {
        cout << "Amount withdrawn=Rs." << w << endl;
        b.balance = b.balance - w;
    }

    cout << "Name of Account Holder :" << b.name << endl;
    cout << "Your Availible Balance=Rs." << b.balance << endl;
}

int main()
{
    BankAcc b;

    b.getsetdata();
    b.deposit();
    withdraw(b);
    return 0;
}
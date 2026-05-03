#include<iostream>
#include <string>
using namespace std;
class BankAccount
{
    private:
    string accountNumber;
    string accountHolder;
    double balance;
    public:
    BankAccount(string aN, string aH, double b)
    {
        accountNumber = aN;
        accountHolder = aH;
        balance = b;
    }
    void displayDetails()
    {
        cout<<"Account Number: "<<accountNumber<< endl;
        cout<<"Account Holder: "<<accountHolder<< endl;
        cout<<"Balance: $"<<balance<<endl;
    }
};

int main()
{
    BankAccount bA("PKR3456789", "Moon Khan", 1000.00);
    bA.displayDetails();
    return 0;
}



#include<iostream>
using namespace std;
class BankAccount
{
    private:
    double balance = 0.0;
    public:
    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout<<"Invalid deposit amount."<<endl;
        }
    }
    void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout<<"Invalid withdrawal amount or insufficient funds."<<endl;
        }
    }
    double getBalance()
    {
        return balance;
    }

};
int main()
{
    BankAccount account;
    account.deposit(5000);
    account.withdraw(2000);
    cout<<"Balance: "<<account.getBalance()<<endl;
    
    return 0;
}
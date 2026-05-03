#include<iostream>
using namespace std;
class Calculator
{
    public:
    float num1, num2;

    
    void getData()
    {
        cout<<"\nEnter num1: ";
        cin>>num1;
        cout<<"\nEnter num2: ";
        cin>>num2;
    }
    float add()
    {
        return num1 + num2;

    }
    float sub()
    {
        return num1 - num2;

    }
    float multp()
    {
        return num1 * num2;

    }
    float div()
    {
        if(num2 == 0)
        {
            cout<<"Error: Division by zero!"<<endl;
            return 0;
        }   

        return num1 / num2;

    }
    
};


int main() 
{
    Calculator c1;
    c1.getData();
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Addition = "<<c1.add()<<endl;
            break;
        case 2:
            cout<<"Subtraction = "<<c1.sub()<<endl;
            break;
        case 3:
            cout<<"Multiplication = "<<c1.multp()<<endl;
            break;
        case 4:
            cout<<"Division = "<<c1.div()<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
    }
    
    return 0;
}
#include<iostream>
using namespace std;
class Employee
{
    private:
    int id;
    string name;
    float salary;
    public:
    Employee()
    {
        id = 0;
        name = "Not Assigned";
        salary = 0.0;

    }
    void displayDetails()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    
};


int main()
{
    Employee e;
    e.displayDetails();
    
    return 0;
}
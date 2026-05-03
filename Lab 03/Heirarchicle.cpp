#include<iostream>
using namespace std;
class Employee
{
    public:
    string name = "Husnaat";
    float salary = 600000;
    void display_employee()
    { 
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
class Developer : public Employee
{
    public:
    string programming_language = "C++";
    void display_developer()
    {
        cout<<"Programming Language: "<<programming_language<<endl;
    }
};
class Designer : public Employee
{
    public:
    string design_tool = "Adobe Photoshop";
    void display_designer()
    {
        cout<<"Design Tool: "<<design_tool<<endl;
    }
};

int main()
{
    Developer dev;
    Designer dr;

    dev.display_employee();
    dev.display_developer();

    dr.display_employee();
    dr.display_designer();

    return 0;
}
#include<iostream>
using namespace std;
class Student
{
public:
string name;
int rollNo;
float marks;
void getData()
{
    cout<<"Enter your name: ";
    getline(cin, name);

    cout<<"Enter your Roll No: ";
    cin>>rollNo;

    cout<<"Enter your marks: ";
    cin>>marks;
    
}
void displayData()
{
    cout<<"\nName: "<<name<<endl;
    cout<<"Roll No: "<<rollNo<<endl;
    cout<<"Marks: "<<marks<<endl;

}


};
int main()
{
    Student s1;
    s1.getData();
    s1.displayData();
    
    return 0;
}
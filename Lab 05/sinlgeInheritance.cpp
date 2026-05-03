#include<iostream>
using namespace std;
class person
{
    private:
    string name;
    int age;
    public:
    void input_person()
    {
        cout<<"Enter name: ";       
        getline(cin, name);
        cout<<"Enter age: ";
        cin>>age;
        cin.ignore();
    }
    void display_person_info()
    {
        
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class student : public person
{
    private:
    int student_id;
    public:
    void input_student()
    {
        cout<<"Enter student ID: ";
        cin>>student_id;
        cin.ignore();
    }

    void display_student_info()
    {
        
        cout<<"Student ID: "<<student_id<<endl;
    }
};

int main()
{
    
    student s1;
    s1.input_person();
    s1.input_student();

    s1.display_person_info();
    s1.display_student_info();
    return 0;
}
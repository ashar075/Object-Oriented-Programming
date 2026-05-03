#include<iostream>
using namespace std;
class Vote
{
    public:
    string name;
    int age;
    void getData();
    bool checkEligibility(); 
};
void Vote::getData()
{
    cout<<"Enter your name: ";
    getline(cin, name);

    cout<<"Enter your age: ";
    cin>>age;
}
bool Vote::checkEligibility()
{
    return (age > 18);
}


int main()
{
    Vote v1;
    v1.getData();
    if(v1.checkEligibility())
    {
        cout<<"You are eligible to vote."<<endl;
    }
    else
    {
        cout<<"You are not eligible to vote."<<endl;
    }
    return 0;
}
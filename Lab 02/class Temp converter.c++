#include<iostream>
using namespace std;
class Temperature
{
    public:
    float celsius;
    float fahrenheit;
    void getData()
    {
        cout<<"Enter temperature in Celsius: ";
        cin>>celsius;
    }
    void convertToFahrenheit()
    {
        fahrenheit = (celsius * 9/5) + 32;
        cout<<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
    }
    
};

int main() {
    Temperature t1;
    t1.getData();
    t1.convertToFahrenheit();
    
    return 0;
}
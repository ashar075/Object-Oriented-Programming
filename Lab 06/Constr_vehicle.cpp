#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"Vehicle constructor called!"<<endl;
    }

};
class Car : public Vehicle
{
    public:
    Car()
    {
        cout<<"Car constructor called!"<<endl;
    }


};
class ElectricCar : public Car
{
    public:
    ElectricCar()
    {
        cout<<"ElectricCar constructor called!"<<endl;
    }

};
int main()
{
    ElectricCar eCar;
    return 0;
}
#include<iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"Vehicle constructor called...";
		}
	
};
class Car : public Vehicle
{
	public:
		Car()
		{
			cout<<"\nCar constructor called...";
		}
	
};
class ElectricCar : public Car
{
	public:
		ElectricCar()
		{
			cout<<"\nElectricCar constructor called...";
		}
	
};
int main()
{
	ElectricCar eCar;
	return 0;
}


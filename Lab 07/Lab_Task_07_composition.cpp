#include <iostream>
#include <string>
using namespace std;
class Display
{
private:
    double lastResult;

public:
    Display()
    {
        lastResult = 0.0;

    }

    void show(double result)
    {
        lastResult = result;
        cout<<"Displaying Result: "<<lastResult<<endl;
    }

    double getLastResult()
    {
        return lastResult; 
    }
};

class Calculator
{
private:
    Display display; 

public:
    void add(double a, double b)
    {
        double result = a + b;
        display.show(result);
    }

    void multiply(double a, double b)
    {
        double result = a * b;
        display.show(result);
    }
};

int main()
{
    Calculator myCalc;
    myCalc.add(15, 20);
    myCalc.multiply(5, 10);
    return 0;
}
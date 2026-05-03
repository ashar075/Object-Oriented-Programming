#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setDimension(int l, int b);
    int area();
    int perimeter();
};
void Rectangle::setDimension(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Rectangle r;
    r.setDimension(6, 9);
    
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;

    return 0;
}
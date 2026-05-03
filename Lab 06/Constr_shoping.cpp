#include<iostream>
using namespace std;
class Product
{
    private:

    string name;
    float price;
    public:
    Product(string n, float p)
    {
        name = n;
        price = p;
    }
    void display_product()
    {
        cout<<"Product Name: "<<name<<endl;
        cout<<"Price: $"<<price<<endl;
    }

};
class Electronics : public Product
{
    public:
    float warrantyYear;
    Electronics(string n, float p, float w) : Product(n, p)
    {
        warrantyYear = w;
    }
    void display_electronics()
    {
        display_product();
        cout<<"Warranty: "<<warrantyYear<<" years"<<endl;
    }

};
int main()
{
    Electronics e("Laptop", 1500.0, 3);
    e.display_electronics();
    
    return 0;
}


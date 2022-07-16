//virtual class and multiple inheritance concept used to call the constructor of class shape only once.

#include <iostream>
using namespace std;
class shape
{
protected:
    int length, breadth, base, height;

public:
    shape()
    {
        cout << "Enter the length:";
        cin >> length;
        cout << "Enter the breadth:";
        cin >> breadth;
        cout << "Enter the height:";
        cin >> height;
        cout << "Enter the base:";
        cin >> base;
    }
};

class triangle : public virtual shape
{
public:
    void displayTarea()
    {
        float area;
        area = 0.5 * base * height;
        cout << "The area of the triangle is=" << area << endl;
    }
};

class rectangle : public virtual shape,public triangle
{
public:
    void displayarea()
    {
        int area;
        area = length * breadth;
        cout << "The area of rectangle is=" << area << endl;
    }
};

int main()
{

    rectangle r;
    r.displayTarea();
    r.displayarea();
    return 0;
}

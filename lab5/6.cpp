#include <iostream>
using namespace std;
class student
{
protected:
    int rollNo;

public:
    int getroll()
    {

        cout << "Enter your roll number:" << endl;
        cin >> rollNo;
    }

    void displayRoll()
    {
        cout << "Your roll no is =" << rollNo << endl;
    }
};

class thoery : virtual public student
{
protected:
    int sub1, sub2;

public:
    int getmarks()
    {
        cout << "Enter marks of first subject:" << endl;
        cin >> sub1;
        cout << "Enter marks of second subject:" << endl;
        cin >> sub2;
    }

    void displaymarks()
    {
        cout << "Your marks in first subject is=" << sub1 << endl;
        cout << "Your marks in second subject is=" << sub2 << endl;
    }
};

class practical : virtual public student
{
protected:
    int prac1, prac2;

public:
    int getpractical()
    {
        cout << "Enter marks of first practical:" << endl;
        cin >> prac1;
        cout << "Enter marks of second practical:" << endl;
        cin >> prac2;
    }

    void displaypractical()
    {
        cout << "Your marks in first practical is=" << prac1 << endl;
        cout << "Your marks in second practical is=" << prac2 << endl;
    }
};

class result : public thoery, public practical
{
public:
    void displaytotal()
    {
        displayRoll();
        displaymarks();
        displaypractical();
        cout << "Your total theory marks=" << sub1 + sub2 << endl;
        cout << "Your total practical marks=" << prac1 + prac2 << endl;
    }
};

int main()
{
    result r;
    r.getroll();
    r.getmarks();
    r.getpractical();
    r.displaytotal();
}
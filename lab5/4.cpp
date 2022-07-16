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

class test : public student
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
        cout << "Your marks in first subject is=" << sub1<<endl;
        cout << "Your marks in second subject is=" << sub2<<endl;
    }
};

class sports
{
protected:
    int sportscore;

public:
    int getscore()
    {
        cout << "Enter the score in sports:";
        cin >> sportscore;
    }

    void displayscore()
    {
        cout << "Score in sports=" << sportscore << endl;
    }
};

class result : public test, public sports
{
    int total;

public:
    void displayresult()
    {
        total = sub1 + sub2;
        displayRoll();
        displaymarks();
        displayscore();
        cout << "Your total marks=" << total << endl;
    }
};

int main()
{
    result r;
    r.getroll();
    r.getmarks();
    r.getscore();
    r.displayresult();
}
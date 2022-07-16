#include <iostream>
using namespace std;
class Student
{
protected:
    int roll;

public:
    int setRoll()
    {

        cout << "Enter roll number:" << endl;
        cin >> roll;
    }
};

class Test : public Student
{
protected:
    int sub1, sub2;

public:
    int setMarks()
    {
        cout << "Enter marks of first subject:" << endl;
        cin >> sub1;
        cout << "Enter marks of second subject:" << endl;
        cin >> sub2;
    }
};

class Result : public Test
{
protected:
    int total;

public:
    void display()
    {
        total = sub1 + sub2;

        cout << "Report of roll number " << roll << endl;
        cout << "Your total marks is=" << total << endl;
    }
};

int main()
{
    Result r;
    r.setRoll();
    r.setMarks();
    r.display();
}
#include <iostream>
using namespace std;
class DB;
class DM
{
    int meters, centimeters;

public:
    void getdata()
    {
        cout << "Enter meters and centimeters:" << endl;
        cin >> meters >> centimeters;
    }

    friend void sum(DB, DM);
};

class DB
{
    int feet, inches;

public:
    void getdata()
    {
        cout << "Enter feet and inches:" << endl;
        cin >> feet >> inches;
    }

    friend void sum(DB, DM);
};

void sum(DB a, DM b)
{
    DM s;
    s.meters = b.meters + ((a.feet * 12 * 2.5) / 100);
    s.centimeters = b.centimeters + (a.inches * 2.5);
    if (s.centimeters > 100)
    {
        s.meters = s.meters + s.centimeters / 100;
        s.centimeters = s.centimeters % 100;
    }

    cout << "The sum in meters and centimeters is=" << s.meters << "m"
         << "&" << s.centimeters << "cm" << endl;
}

int main()
{
    DB a;
    DM b;
    a.getdata();
    b.getdata();
    sum(a, b);
    return 0;
}
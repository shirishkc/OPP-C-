#include <iostream>
using namespace std;
class complex2;
class complex1
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "Enter real and Imaginary parts:" << endl;
        cin >> real >> imaginary;
    }

    friend void sum(complex1, complex2);
};

class complex2
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "Enter real and Imaginary parts for other:" << endl;
        cin >> real >> imaginary;
    }

    friend void sum(complex1, complex2);
};

void sum(complex1 c1, complex2 c2)
{
    int rsum, isum;
    rsum = c1.real + c2.real;
    isum = c1.imaginary + c2.imaginary;

    cout << "The sum of the two imaginary numbers is=" << rsum << "+" << isum << "i" << endl;
}

int main()
{
    complex1 c1;
    complex2 c2;
    c1.getdata();
    c2.getdata();
    sum(c1, c2);
    return 0;
}

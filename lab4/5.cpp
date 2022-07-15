#include <iostream>
using namespace std;
class SI
{
    int p, t;

public:
    void getdata()
    {
    }

    SI(int r)
    {
        cout << "Enter principal amount and time:" << endl;
        cin >> p >> t;
        cout << "The simple intrest is=" << (p * t * r) / 100 << endl;
    }
};

int main()
{
    SI s(20);
    return 0;
}
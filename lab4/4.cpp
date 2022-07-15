#include <iostream>
using namespace std;
class Area
{
    int l, b;

public:
    Area(int l)
    {
        cout << "The area of square is=" << l * l << endl;
    }

    Area(int l, int b)
    {
        cout << "The area of rectangle is=" << l * b << endl;
    }
};

int main()
{
    Area s(2), r(2, 3);
    return 0;
}
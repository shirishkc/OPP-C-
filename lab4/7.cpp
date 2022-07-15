#include <iostream>
using namespace std;
class Demo
{
public:
    Demo(int a, int b)
    {
        cout << "Sum=" << a + b << endl;
    }
    Demo(int a, int b, int c)
    {
        cout << "Sum=" << a + b + c << endl;
    }
};

int main()
{
    Demo d1(2, 3), d2(2, 3, 4);
    return 0;
}
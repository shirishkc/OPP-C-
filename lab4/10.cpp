#include <iostream>
using namespace std;
class Mountain
{
    char *name;
    char *location;
    int height;

public:
    Mountain(char *n, char *l, int h)
    {

        name = n;
        location = l;
        height = h;
    }

    void DisplayInfo()
    {
        cout << "Mountain Name:" << name << endl;
        cout << "Mountain location:" << location << endl;
        cout << "Mountain Height:" << height << endl;
    }

    friend void CmpHeight(Mountain, Mountain);
};

void CmpHeight(Mountain m1, Mountain m2)
{
    if (m1.height > m2.height)
    {
        cout << "Mountain " << m1.name << " is bigger" << endl;
    }

    else
    {
        cout << "Mountain " << m2.name << " is bigger" << endl;
    }
}

int main()
{
    Mountain m1("Annapurna", "Kaski", 3456);
    Mountain m2("Everest", "Namche", 8848);
    m1.DisplayInfo();
    m2.DisplayInfo();
    CmpHeight(m1, m2);
    return 0;
}
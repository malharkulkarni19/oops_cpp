#include <iostream>
using namespace std;

// abstraction:- implementation hiding, only show essential information
// pubic, private and protected are called asn access modifiers.

class Abstraction
{
    int a, b; // this is private(by default)

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a is -> " << a << endl;
        cout << "b is -> " << b << endl;
    }
};

int main()
{
    Abstraction obj1;
    obj1.set(50, 100);
    obj1.display();
}
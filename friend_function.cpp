#include <iostream>
using namespace std;

// friend function:- it is defined outside class scope. but it has right to access all private and protected members of the class.

class Rectangle
{
    int length;

public:
    Rectangle()
    {
        length = 10;
    }
    friend int printLength(Rectangle);
};

int printLength(Rectangle b)
{
    b.length += 10;
    return b.length;
}

int main()
{
    Rectangle b;
    cout << "Length of rectangle is -> " << printLength(b) << endl;
}
#include <iostream>
using namespace std;

// multiple iheritance:-

class first
{ // parent class
public:
    void func1()
    {
        cout << "Hello 1st time" << endl;
    }
};

class second
{ // another parent class
public:
    void func2()
    {
        cout << "Hello, again" << endl;
    }
};

class third : public first, public second
{
    // derived class/child class, derived from parent class
};

int main()
{
    third vishal;
    vishal.func1();
    vishal.func2();
}
#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Hello from function 1" << endl;
    }
};

class B
{
public:
    void func1()
    {
        cout << "Hello from function 2" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj1;
    // obj1.func1();    //error because it has present in multipe classes, so we use scope resolution operator.

    obj1.A::func1(); // scope resolution operator
    obj1.B::func1();
}
#include <iostream>
using namespace std;

// polymorphsim :- poly means many, morphsim means forms.
// two types:- compile & runtime polymorphism

// for compile time/static poly, there is function overloading and operater overloading

class Name
{
public:
    int a, b;

public:
    void sayHello()
    {
        cout << "Hello, malhar" << endl;
    }
    void sayHello(string name)
    {
        cout << "Hello, " << name << endl;
    }

    void operatior+ (Name &obj)  //operator overloading
    {
        cout << "Hello from operator overloading" << endl;
    }
};

int main()
{
    Name obj1;
    obj1.sayHello();

    Name obj2, obj3;
    obj2.a = 5;
    obj3.a = 7;

    obj2 + obj3;
}
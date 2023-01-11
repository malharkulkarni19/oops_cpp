#include <iostream>
using namespace std;

// interfaces :- behaviour or capabilites of C++ class without committing to particular implementation of that class.
//  it is used by declaring at least one of its function as a pure virtual , denoted by " = 0 "

class Animal
{
public:
    virtual void sound() = 0; //  pure virtual function

    void sleeping()
    {
        cout << "Sleeping " << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()    // implemented virtual class
    { 
        cout << "Woof " << endl;
    }
};

int main()
{
    Dog obj1;
    obj1.sound();
    obj1.sleeping();
}
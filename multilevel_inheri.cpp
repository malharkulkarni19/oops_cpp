#include <iostream>
using namespace std;

// this is multilevel inheritance.

class myClass // parent class
{
public:
    void myFunc()
    {
        cout << "Hello world" << endl;
    }
};

class myChild : public myClass
{ // child class
};

class myGrandChild : public myChild
{ // grand child class
};

int main()
{
    myGrandChild name1;
    name1.myFunc();
}
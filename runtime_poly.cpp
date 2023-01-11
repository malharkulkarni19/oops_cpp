#include <iostream>
using namespace std;

// runtime poly/dynamic :- consist of method overiding, same function name but different class names.

class Cat
{
public:
    void speak()
    {
        cout << "Mwee" << endl;
    }
};

class Dog : public Cat
{
public:
    void speak()
    {
        cout << "Bhuww" << endl;
    }
};

int main()
{
    Dog animal1;
    animal1.speak();
}
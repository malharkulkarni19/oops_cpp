#include <iostream>
using namespace std;

// Inheritance :- it is possible to inherit attributes and methods from one class to another.
//types of inheritance :- single, multiple, multilevel,hybrid & hierarchicel

//single:- only single base and parent class

//this is single inheritance.


class Human
{ // parent class
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{ // child class
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping..." << endl;
    }
};

int main()
{
    Male object1;
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.age << endl;
    cout << object1.color << endl;

    object1.sleep();

    object1.setWeight(75);
    cout << object1.weight << endl;
}
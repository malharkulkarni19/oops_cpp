#include <iostream>
using namespace std;

class Hero
{
    // properties

public:
    int level;
    int age;
    char surname[20];

    int getLevel()
    {
        return level;
    }

    void setLevel(int l)
    {
        level = l;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }

    Hero(){    //default constructor
        cout << "Constructor Called" << endl;
    }
    Hero(int age){   //parameterlized constructor
        cout << "Address is -> " << this << endl;
        this -> age = age;
    }

    ~Hero(){    //this is destructor
        cout << "Destructor Called...." << endl;
    }

};

int main()
{

    //statically
    Hero Jignesh;  //for statically, distructor called automatically


    //dynamically
    Hero *h = new Hero;  //for dynamically, we have to call destructor manually
    delete h;


    /*
    cout << "Hello" << endl;   //statically
    Hero Suresh(25);
    cout << "Hello, after calling of constructor" << endl;
    Hero *h = new Hero;      //dynamically
    cout << "Address is -> " << &Suresh << endl;
    */



    //creation of an object, static allocation
    /*
    Hero Ramesh;
    Ramesh.setLevel(15);
    Ramesh.setAge(22);
    cout << "Age of Ramesh is -> " << Ramesh.age << endl;
    cout << "Level of Ramesh is -> " << Ramesh.getLevel() << endl;

    //creating object, dynamic allocation
    Hero *h = new Hero;
    h->setLevel(16);
    h->setAge(23); 
    cout << "Age of Ramesh is -> " << (*h).age << endl;
    cout << "Level of Ramesh is -> " << (*h).getLevel() << endl;
    */

    // giving parameters
    //Ramesh.age = 20;
    //Ramesh.surname = 'Sharma';
    //Ramesh.level = 3;
    //Ramesh.setLevel(4);

    // cout << "Size of class Hero is -> " << sizeof(H1) << endl;  //If class is blank then size will be 1
    //cout << "Age of Ramesh is -> " << Ramesh.age << endl;
    //cout << "Surname of Ramesh is -> " << Ramesh.surname << endl;
    // cout << "Level of Ramesh is -> " << Ramesh.level << endl;
    //cout << "Level of Ramesh is -> " << Ramesh.getLevel() << endl;
}

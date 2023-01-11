#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age = 12;
        if (age >= 18)
        {
            cout << "You are eligible" << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int age)
    {
        cout << "Sorry, you are not eligible for vote" << endl;
        cout << "Your age is -> " << age << endl;
    }
}
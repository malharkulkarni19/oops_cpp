#include <iostream>
using namespace std;

// encapsulation :- wrapping up data memners and functions, all data members are private, data hiding
// Advantages :- Data hiding, Increased security of data, code reusability
// We can access private members outside class is getters ans setters.

class Name
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Name Malhar;
    Malhar.setSalary(150000);

    cout << "Salary of Malhar is -> " << Malhar.getSalary() << endl;
}

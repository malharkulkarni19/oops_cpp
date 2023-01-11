#include<iostream>
using namespace std;


class Name{

public:
    static int r ;
};

int Name::r = 5;

int main()
{
    cout << Name::r << endl;

    Name m;

    cout << m.r << endl;

    Name n;
    n.r = 10;
    cout << n.r << endl;
}
#include <iostream>
using namespace std;
// COPY CONSTRUCTOR
class number
{
    int a,b;

public:
    number()
    {
        a = 0;
        b = 0;
    }

    number(int num,int bum)
    {
        a = num;
        b = bum;
    }

    // When no copy constructor is found, compier supplies its own copy constructor

    number(number &obj1,number &obj2)
    { // This is the copy consturctor
        cout << "copy constructor is called!!" << endl;
        a = obj1.a;
        b = obj2.b;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
        cout << "The number for this object is " << b << endl;
    }
};
int main()
{
    number x(69,89), y, z(45,78), z2;
    x.display();
    y.display();
    z.display();

    number z1(x); // copy constructor invoked
    z1.display();

    z2 = x; // copy consturctor not called

    // if object is already exist  and we are only assigning the value
    // then copy construtor will not invoked

    number z3 = z; // copy constructor invoked
    z3.display();

    // z1 should exactly resemble z or x or y

    return 0;
}
#include <iostream>
using namespace std;
// MULTIPLE INHRITANCE ( deriving a class with more than one base class)

// Syntax for inheriting in multiple inhritance
/*
    class DerivedC : visibility-mode base1,visibility-mode base2....
    {
        class body of "DerivedC"
    };

*/

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The value of base3 is " << base3int << endl;
        cout << "The sum of these vlaues are " << base1int + base2int + base3int << endl;
    }
};

/*
    The inherited derived class will look something like this:
    Data member:
         base1int---> protected
         base2int---> protected
    member function:
         set_base1int() --> pbublic
         set_base2int() --> pbublic
         show() --> pbublic

*/

int main()
{
    derived vish;
    vish.set_base1int(45);
    vish.set_base2int(85);
    vish.set_base3int(20);
    vish.show();
    return 0;
}
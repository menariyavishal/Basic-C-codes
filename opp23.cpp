// How Constructors in Derived class works and executed

#include <iostream>
using namespace std;
/*
Case1:
class B:public A{
    Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C {
    Order of execution of constructor -> C() then B() and A()

};

*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 constructor is called" << endl;
    }
    void printdatabase1(void)
    {
        cout << "The value of data 1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 constructor is called" << endl;
    }
    void printdatabase2(void)
    {
        cout << "The value of data 2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(c)
    {
        derived1 = b;
        derived2 = d;
        cout << "derived constructor is called" << endl;
    }
    void printdataderived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived vishal(45, 69, 55, 12);
    vishal.printdatabase1();
    vishal.printdatabase2();
    vishal.printdataderived();
    return 0;
}
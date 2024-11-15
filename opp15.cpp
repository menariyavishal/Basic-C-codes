#include <iostream>
using namespace std;
// INHERITANCE

// Base class
class employee
{
public:
    int id;
    float salary;
    employee(){}
    employee(int inpid)
    {
        id = inpid;
        salary = 69.0;
        cout << id << endl;
    }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    members /methods /etc....
}
*/

/*
Notes : VISIBILITY MODE
1. Default visibility mode is private
2. Public visibility mode : Public members of the base class 
                            becomes Public members of the derived class
3. Private visibility mode : Public members of the base class 
                            becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer derived class from Employee base class

class programmer : public employee
{
public:
    int code = 12;
    programmer(int inpid)
    {
        id = inpid;
    }
    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{
    employee x(1), y(2);
    cout << x.salary << endl;
    cout << y.salary << endl;

    programmer kal(15);
cout<<kal.code<<endl;
cout<<kal.id<<endl;
kal.getdata();
    return 0;
}
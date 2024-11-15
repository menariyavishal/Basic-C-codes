#include <iostream>
using namespace std;

class employee
{
    int id;
    static int num; // by default the value of static variable is 0
public:
    void setVar()
    {
        cout << "Enter the id " << endl;
        cin >> id;
        num++;
    }

    void getVar()
    {
        cout << "the id of this employee is " << id << " and this is employee number " << num << endl;
    }

    static void getnum(){ // static functions has the access of other static vairables and functions only
        cout<<"the value of num is "<<num<<endl;
    }
};

int employee ::num = 100;
// num is the static data member  of the class employee
int main()
{
    employee vishal, anu, lalit;
    vishal.setVar();
    vishal.getVar();

    employee ::getnum();
    
    

    anu.setVar();
    anu.getVar();
    employee ::getnum();

    lalit.setVar();
    lalit.getVar();
    employee ::getnum();
    return 0;
}
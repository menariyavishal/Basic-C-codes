#include <iostream>
using namespace std;
//****Friend function*****

class complex
{
    int a, b;

public:
    friend complex sumcomplex(complex o1, complex o2); // Decleration

    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(4, 5);
    c1.printnumber();

    c2.setnumber(6, 8);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();
    return 0;
}

/* Properties of friend function
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called form
    the objects of that class  c1.sumcomplex() == Invaild
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private sections of the class
6. It cannot access the members directly by thier names and need
    (object_name.member_name) to access any member.

*/
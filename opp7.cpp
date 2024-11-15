#include <iostream>
using namespace std;
// ****Friend classes****

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumREALcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    // Individually declaration of functions as friend

    // friend int calculator ::sumREALcomplex(complex,complex);
    // friend int calculator ::sumcompcomplex(complex,complex);

    // Aliter: Declaring entire class as friend
    friend class calculator; // this cannot be decalred in the public section

public:
    void setnumber(int a1, int a2)
    {
        a = a1;
        b = a2;
    }

    void printnumber()
    {
        cout << "the complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumREALcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setnumber(4, 8);
    c1.printnumber();

    c2.setnumber(6, 7);
    c2.printnumber();

    calculator o1, o2;
    int res = o1.sumREALcomplex(c1, c2);
    cout << "the sum of real part of complex number is " << res << endl;

    int resc = o2.sumcompcomplex(c1, c2);
    cout << "the sum of complex part of complex number is " << resc << endl;

    return 0;
}
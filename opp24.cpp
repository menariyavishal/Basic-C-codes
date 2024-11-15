// Initialization section in costructors

#include <iostream>
using namespace std;

/*
    Syntanx for initialization in constructors:
    constructor (arguments-list) : initialization-section
    {
        constructor body
    }

    class Test{
        int a,b;
        public:
            Test (int i,int j): a(i),b(j){

            }
    };
*/
class Test
{
    int a, b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*a+j)
    Test(int i, int j) : a(i), b(j)
    {
        cout << "constructor executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Test t(8, 7);

    return 0;
}
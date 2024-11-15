#include <iostream>
#include <cmath>
using namespace std;

// Question to solve
/*
    Create 2 classes:
        1. SimpleCalculator - Takes input of 2 numbers using a utility
        function and performs +,-,*,/ and displays the result using
        another function.
        2. ScientificCalculator -  Takes input of 2 numbers using a utility
        function and performs any four scientific operations
        and displays the result using another function.

*/

class simplecalculator
{
protected:
    int a;
    float b;

public:
    // void set_num(int x, float y)
    // {
    //     a = x;
    //     b = y;
    //     basicCalc();
    // }
    void basicCalc()
    {

        cout << "The sum of " << a << " and " << b << " is " << (a + b) << endl;
        cout << "The differnce of " << a << " and " << b << " is " << (a - b) << endl;
        cout << "The product of " << a << " and " << b << " is " << (a * b) << endl;
        cout << "The division of " << a << " and " << b << " is " << (a / b) << endl;
    }
};

class scientificCalculator
{
protected:
    int p;

public:
    // void set_num(int o1)
    // {
    //     p = o1;
    //     // q = o2;
    //     sci_math();
    // }

    void sci_math()
    {
        cout << cos(p) + sin(p) << endl;
        cout << 1 / cos(p) << endl;
        cout << 1 / sin(p) << endl;
        cout << 1 / tan(p) << endl;
    }
};

class Hybridcalculator : public simplecalculator, public scientificCalculator
{
public:
    void display()
    {
        cout << "values for simple calculator " << endl;
        cin >> a >> b;
        basicCalc();
        cout << "values for scientific calculator " << endl;
        cin >> p;
        sci_math();
    }
};

int main()
{
    Hybridcalculator b;
    b.display();

    return 0;
}
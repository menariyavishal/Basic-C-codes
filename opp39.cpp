// Templates with default Parameters

#include <iostream>
using namespace std;

template <class T1 = float, class T2 = int, class T3 = char>
class vishal
{
public:
    T1 a;
    T2 b;
    T3 c;
    vishal(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{
    vishal<> v(4.2, 7, 'f');
    v.display();
    cout << endl;
    vishal<char, int, double> b('A', 7, 5.66669);
    b.display();

    return 0;
}
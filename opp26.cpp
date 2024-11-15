// Pointers to objects

#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void getdata()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
{
    // complex g;
    // complex *ptr = &g;
    complex *ptr = new complex;

    // ***  Arrow operator (->)

    // (*ptr).setdata(3,34); is exaxtaly same as

    ptr->setdata(3, 34);

    // [ Here Arrow operator (->) ptr pointer JIS CLASS KE
    // OBJECT KO POINT KRR RHA H USKA setdata() function run kr do ]

    // (*ptr).getdata();  is as good as
    ptr->getdata();


    // Array of Objects
    complex *ptr1 = new complex[3];
    ptr1->setdata(87,58);
    ptr1->getdata();



    return 0;
}
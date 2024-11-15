#include<iostream>
using namespace std;

                // CONSTRUCTOR OVERLOADING //DEFAULT ARGUMENTS
    class complex{
        int a,b,c;
        public:
        complex(int x,int y=4, int d=69){
            a = x;
            b = y;
            c = d;
        }
        void printdata(){
            cout<<"complex number is "<<a<<" + "<<b<<"i"<<c<<endl;
        }

        complex (){
            a = 1;
            b = 1;
            c = 1;
        }

        complex(int f, int j=89){
            a = f;
            b = a;
            c = j;
        }
    };
int main(){

    complex c1;
    c1.printdata();

    complex c2(5,5,8);
    c2.printdata();

    complex c3(4,8,7);
    c3.printdata();   
    return 0;
}
#include<iostream>

using namespace std;

int c = 48;

int main(){

    // ***********Build in data types********

    // int a, b , c;

    // cout<<"Enter the value of a"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b"<<endl;
    // cin>>b;
    // c = a + b;

    // cout<<"The sum is" <<c<<endl;
    // cout<<"The value of global is" <<::c;

        // **********float double and long double Literals*********

    float d=22.4f;
    long double e=22.4l;
    cout<<"the size of 22.4 is "<<sizeof(22.4)<<endl;
    cout<<"the size of 22.4f is "<<sizeof(22.4f)<<endl;
    cout<<"the size of 22.4F is "<<sizeof(22.4F)<<endl;
    cout<<"the size of 22.4l is "<<sizeof(22.4l)<<endl;
    cout<<"the size of 22.4L is "<<sizeof(22.4L)<<endl;

    // cout<<"value of d is"<<d<<endl<<"value of e is"<<e;

        // **********Reference variables*********

    // int x =650;
    // int & y =x;
    // cout<<x<<endl;
    // cout<<y<<endl;

        // **********Typecasting*********
    int a=30;
    float b=30.36;
    char d='d';

    cout<<"value of a is "<<a<<endl;
    cout<<"value of a is "<<float(a)<<endl;
    cout<<"value of b is "<<int(b)<<endl;
    cout<<"value of d is "<<float(d)<<endl;
    int c=int(d);

    cout<<"The expresion is "<< a + b<<endl;
    cout<<"The expresion is "<< a +int(b) <<endl;
    cout<<"The expresion is "<< a +int(d) <<endl;

    int x= 130;
    cout<<char (x);

    return 0;
}
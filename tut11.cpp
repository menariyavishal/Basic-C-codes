#include<iostream>
using namespace std;

int main(){
    // Poiters----> data types which holds the address of other data types

    int a=6;
    int *b =&a;

        //  &--->(Address of) operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;


        // *--->(value at) Dereference operator

    cout<<"the value at address b is "<<*b<<endl;

    // char a='v';
    // char*b =&a;
    // cout<<"The address of a is "<<b<<endl;
    // cout<<"The address of a is "<<*b<<endl;


    return 0;
}
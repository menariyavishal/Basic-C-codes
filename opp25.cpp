#include<iostream>
using namespace std;

int main(){
    // Basic Example 

    int a = 6;
    
    int * ptr = &a;

    cout<<"The value of a is "<<*(ptr)<<endl;

    // new operator
    int *p = new int (552);
    cout<<"The value at address p is "<<*(p)<<endl;

    int *arr = new int [4];
    arr[0] = 12;
    arr[1] = 123;
    arr[2] = 128;
    arr[3] = 1789;

    //delete operators
    delete[] arr;

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    cout<<"The value of arr[3] is "<<arr[3]<<endl;



    return 0;
}
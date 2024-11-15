#include<iostream>
using namespace std;

int sum(int a, int b){
    int c= a + b;
    return c;
}
// this will not swap a and b 
void swap(int a, int b){   // temp a  b
    int temp = a;           //5    5  4
    a = b;                  //5    4  4
    b = temp;               //5    4  5
}

// Call by reference using pointers
void swapPointer(int* a, int* b){   // temp a  b
    int temp = *a;           //5    5  4
    *a = *b;                  //5    4  4
    *b = temp;               //5    4  5
}

// Call by reference using C++ reference variables
void swapreferenceVar(int &a, int &b){   // temp a  b
    int temp = a;           //5    5  4
    a = b;                  //5    4  4
    b = temp;               //5    4  5
}

int main(){
    int x =5, y =4;
//    cout<<"the sum of 5 and 4 is "<<sum(a,b);
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    // swap(x, y); // this will not swap a and b
    // swapPointer(&x , &y); //this will swap a and b using pointer reference
    swapreferenceVar(x , y); //this will swap a and b using reference variables
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;



    return 0;
}
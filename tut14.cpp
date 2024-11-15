#include<iostream>
using namespace std;

// Function prototype
// syntx---->type function-name(arguments);

// int sum(int a , int b);----> //--->Acceptable
// int sum(int a ,  b);----> //---> Not Acceptable
int sum(int  , int);  //---> Acceptable
// void d(void); //Acceptable 
void d(); //Acceptable 

int main(){
    int num1, num2;
    cout<<"enter first number "<<endl;
    cin>>num1;
    cout<<"enter second number "<<endl;
    cin>>num2;
    // num1 and num2 are Actual parameters 
    cout<<"the sum is "<<sum(num1 ,num2);
    d();

    return 0;
}

int sum(int a , int b){
    // Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c=a+b;
    return c;
}

void d(){
    cout<<endl<<"Your coding is quiet good";
}
#include<iostream>
using namespace std;

inline int product(int x ,int y){  //use inline function only, when there are just few lines of codes.
    // do not use below lines with inline function
    // static int n =0;    //This will executes only once
    // n= n+1;         //next time this function is run, the value of c will be retained
    return x*y;

}
    //Default arguments
float amountCredites(int presentRs, float BYAJ =1.05){  //write defalut arguments on extreme Right
    return presentRs*BYAJ;
}

    //Constant argumemts
    // int area(const char *d){

    // }

int main(){
    // int a ,b;
    // cout<<"enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"the product is "<<product(a,b)<<endl;
   int Paisa = 100000;
   cout<<" if you have "<<Paisa <<"then you will get "<<amountCredites(Paisa) <<"after 1 year"<<endl;
   cout<<" if you are Vaniya "<< Paisa <<"then you will get "<<amountCredites(Paisa, 1.3) <<"after 1 year"<<endl;
    return 0;
}
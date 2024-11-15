// C++ Function templates & Function templates with parameters

#include<iostream>
using namespace std;

// template <class T1, class T2>
// float avd(T1 a, T2 b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T=float>
void exchange(T &a , T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    // float v;
    // v = avd('l',5.450000);
    // cout<<"the average is "<<v;

    int x = 5, y = 9;
    exchange(x,y);
    cout<<"the value of x after swap is"<<x<<endl;    
    cout<<"the value of y after swap is"<<y<<endl;    


    return 0;
}
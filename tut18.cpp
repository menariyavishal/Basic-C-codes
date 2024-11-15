#include<iostream>
using namespace std;
        //Function overloading*********
    int prodcut(int a, int b){
        cout<<"product of 2 numbers "<<endl;
        return (a*b);
    }


    int prodcut(int a, int b, float c){
        cout<<"product of 3 numbers "<<endl;
        return (a*b*c);
    }

    int prodcut(int a, int b, float c, int k){
        cout<<"product of 4 numbers "<<endl;
        return (a*b*c*k);
    }

 

int main(){
    cout<<"the product of 3 6 and 2.2 is "<<prodcut(3,6,2.2)<<endl;
    cout<<"the product of 3 6 is "<<prodcut(3,6)<<endl;
    cout<<"the product of 3  6 5 and 4 is "<<prodcut(3,6,5,4)<<endl;

    
    return 0;
}
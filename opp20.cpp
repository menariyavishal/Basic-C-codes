#include<iostream>
using namespace std;
//Ambiguity Resolution

class base1{
    public:
        void greet (){
            cout<<"How are you?"<<endl;
        }
    
};

class base2{
    public:
    void greet (){
            cout<<"Kaiso ho?"<<endl;
        }
};

class derived : public base1,public base2{
    int a;
    public:
        void greet(){
            base2 ::greet();  //this how you resolve ambiguity
            base1 ::greet();
        }
};

int main(){
    derived d;
    d.greet();
    
    return 0;
}
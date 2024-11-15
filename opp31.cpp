#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=44;
       virtual void display(){ //This is Virtual function
            cout<<"1. displaying base class variable :"<<var_base<<endl;
        }

};

class derivedClass : public BaseClass{
    public:
        int var_derived=66;
        void display(){
            cout<<"2. displaying base class variable :"<<var_base<<endl;
            cout<<"2. displaying derived class variable :"<<var_derived<<endl;
        }

};

int main(){

    BaseClass *bptr;
    BaseClass obj_base;

    derivedClass obj_derived;
    bptr = &obj_derived;
    bptr->var_base = 50;
    bptr->display();

    
    return 0;
}
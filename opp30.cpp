// Pointers to derived classes

#include<iostream>
using namespace std;
class base{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
        }
};

class derived : public base{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){

    base* base_class_pointer;
    base obj_base;
    derived obj_derived;

    base_class_pointer = &obj_derived; // pointing base class pointer to derived class
    base_class_pointer->var_base=55;
    base_class_pointer->display();

    derived * derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_derived = 6870;
    derived_class_pointer->var_base = 70;
    derived_class_pointer->display();


    return 0;
}
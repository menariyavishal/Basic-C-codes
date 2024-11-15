#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // Creating s constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initializ the objects of its class.
    // It is automatically invoked whenever an object is created.

    complex (void);     //constructor declaration

    void printdata(){
        cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

complex :: complex(void){   //-----> This is a default constructor as it takes no parameter.
    a=0;
    b=0;

    
    
    
}

int main(){
    complex c;
    c.printdata();
    
    return 0;
}


/*  Characteristics of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever an object is created
3. They cannot return values and do not have return types
4. It can have default argyments
5. We cannot refer to thier address

*/
#include<iostream>
using namespace std;
                // DESTRUCTORS
    // Destructor never takes an argument nor it return any value

    int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;

    }

    ~num(){ //This is the syntx of destructor

        cout<<"This is the time when my destrutor is called for object number "<<count<<endl;
        count--;

    }
};
int main(){
    cout<<"We are inside our main function "<<endl;\
    cout<<"Creating first object n1 "<<endl;
    num n1;

    //this is a block and  the scope of anything inside the block is within the block

    {
        cout<<"entering the blockc"<<endl;
        cout<<"creting two more objects "<<endl;
        num n2, n3;
        cout<<"exitng the block"<<endl;

    }
    cout<<"back to main"<<endl;
    
    return 0;
}
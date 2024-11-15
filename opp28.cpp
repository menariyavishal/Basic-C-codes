#include<iostream>
using namespace std;
class A{
    int a;
    public:
        // A& setdata(int a)
        void setdata(int a)
        {
          this->  a = a;
        //   return *this;
        }

        void getdata(){
            cout<<"the value of a is "<<a<<endl;
        }

};
int main(){
    // (this) is a keyword which is a pointer which points to the objects
   // which invokes the member function
    A a;
    // a.setdata(58).getdata();
    a.setdata(58);
    a.getdata();
    return 0;
}
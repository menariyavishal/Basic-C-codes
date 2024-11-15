#include<iostream>
using namespace std;

template <class T>
class a1{
    public:
        T var;
        a1(T a ){
            var = a;
        }
    void display();
};

template <class T>      //The function can be defined outside of the class with the scope resolution operator (::)
void a1<T>::display(){
        cout<<"vlaue of var is "<<var<<endl;
    
}

int main(){
    a1<int> vis(5);
    vis.display();
    return 0;
}
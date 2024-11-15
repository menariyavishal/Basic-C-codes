// #include<iostream>
// using namespace std;

// class Y;

// class X{
//     int data;
//     public:
//         void setdata(int value){
//             data = value;
//         }
//         friend void add(X,Y);
// };

// class Y{
//     int num;
//     public:
//         void setdata(int value){
//             num = value;
//         }
//         friend void add(X,Y);
// };

// void add(X o1, Y o2){
//     cout<<"The sum of objects of X and Y gives me "<< o1.data + o2.num;
// }

// int main(){
//     X a1;
//     a1.setdata(60);

//     Y b2;
//     b2.setdata(40);

//     add (a1,b2);

//     return 0;
// }



#include<iostream>
using namespace std;

class c2;

class c1 {
    int val1;
    public:
        void indata(int a){
            val1=a;
        }
        void display(void){
            cout<<val1<<endl;
        }
    friend void exchange(c1 &, c2 &);
};

class c2 {
    int val2;
    public:
        void indata(int a){
            val2=a;
        }
        void display(void){
            cout<<val2<<endl;
        }
        friend void exchange(c1 &, c2 &);

};

void exchange(c1 & x, c2 & y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(100);
    oc1.display();

    oc2.indata(125);
    oc2.display();

    exchange(oc1,oc2);

    cout<<"the value of c1 after exchanging becomes: ";
    oc1.display();
    cout<<"the value of c2 after exchanging becomes: ";
    oc2.display();
    

    
    
    
    return 0;
}
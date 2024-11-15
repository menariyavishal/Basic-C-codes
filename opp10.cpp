// #include<iostream>
// using namespace std;

// class complex{
//     int a,b;
//     public:

//     complex(int ,int);

//     void printvalue(){
//         cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };

// complex :: complex(int x, int y){   //This is a parametrized constructor as it accepts arguments 
//     a = x; 
//     b = y;
// }

// int main(){
//     //Implicit call
//     complex a(8,9);
//     a.printvalue();

//     //Explicit call
//     complex b =complex(6,3);
//     b.printvalue();
    
//     return 0;
// }




#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x, y;
    public:
    point(int a, int b){
        x = a; 
        y = b;
    }

    void displaypoint(){
        cout<<" The point in the plane is ("<<x<<" , "<<y<<")"<<endl;
    }
    friend point distance(point, point);
};

// creating a function which takes 2 point objects and computes the 
// distance between those points

point distance(point o1 , point o2){
    int c1 = ((o1.x - o2.x))  ;
    int c2 = ((o1.y - o2.y));
    int t1 = pow(c1,2);
    int t2 = pow(c2,2);

    int r = t1+t2;
    double d = sqrt(r); 
    cout<<d;    
}

int main(){
    point p(9,2), q(4,7); //Implicit call
    p.displaypoint();
    q.displaypoint();

    cout<<" The distance between 2 poitns is"<<endl;
    
       distance(p,q);
    
    
    
    return 0;
}



#include<iostream>
using namespace std;

class account
{
    private:
    int salary, bonus;
    

    public:
    int wh, lunch;

    void setData (int s,int b);
    void getData(){
        cout<<"the salary is "<<salary<<endl;
        cout<<"the bonus is "<<bonus<<endl;
        cout<<"the working hours are  "<<wh<<endl;
        cout<<"the lunch time  is after "<<lunch<<endl;
    }

};

void account :: setData (int s, int b){
    salary=s;
    bonus=b; 

}

// class animal
// {
//     public:
//     int legs, horns, hands;
   
//     void dog(int a, int b, int c);
//     void cow(int x ,int y, int z);

// };

// void animal :: dog(int a, int b, int c){
//     legs=a;
//     horns=b;
//     hands=c;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
 
// }

// void animal :: cow(int x ,int y, int z){
//      legs=x;
//     horns=y;
//     hands=z;
//     cout<<x<<endl;
//     cout<<y<<endl;
//     cout<<z<<endl;
// }

int main(){
    account open;
    int s=90000;
    int b=40000;
    // open.salary=200; //this will show error as it is private
   open.wh=8;
   open.lunch=1;

    
    open.setData(s,b);
    open.getData();
    // animal D;
    // D.dog(4,0,0);
    // animal C;
    // C.cow(4,2,0);
    
    return 0;
}
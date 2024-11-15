// #include<iostream>
// using namespace std;
//             //Arrays of objects
// class school {
//     int id;
//     int staff;
//     public:
//         void setid(void){
//             staff=50;
//             cout<<"enter the school id "<<endl;
//             cin>>id;
//         }
//         void getid(void ){
//             cout<<"the school id of this school is "<<id<<endl;
//         }
// };

// int main(){
// //     school principal,teachers,students,pions;
// //     principal.setid();
// //     principal.getid();

// school login[5];
// for(int i=0; i<5;i++){
//     login[i].setid();
//     login[i].getid();
// }
//     return 0;
// }


  // **********  Passing objects as Function Arguments********

  #include<iostream>
  using namespace std;
  
class complex{
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a=v1;
        b=v2;
    }

    void outcome(complex o1,complex o2){
        a = o1.a + o2.a ;
        b = o1.b + o2.b ;
    }

    void print(){
        cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

  int main(){
    complex a1,a2,a3;
    a1.setData(2,3);
    a1.print();
    a2.setData(5,8);
    a2.print();

    a3.outcome(a1,a2);
    a3.print();
    return 0;
  }
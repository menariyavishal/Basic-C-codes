#include<iostream>
using namespace std;

int main(){
    // Breaks in c+--->( jha pr break hoga vha se loop exit krr lega )
    cout<<"from 1 to 50 "<<endl;
    // for (int i = 0; i <=50; i++)
    // {
    //     /* code */ 
      
    //     cout<<i<<endl;
    //        if(i>10){
    //         break;
    //     }

    // }

        // Continue in c++---->(continue uss value ko skip krke aage bd jata h)
    for (int i = 0; i <=50; i++)
    {
        /* code */ 
       if(i<20){
        continue;
       }
        cout<<i<<endl;

       
    }
    
    return 0;
}
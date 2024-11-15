#include<iostream>
using namespace std;

int main(){

            //  ****** Arrays in c++******

    
   int marks[] = {564, 589, 55, 213,588, 594};
//    cout<<marks[0]<<endl;
//    cout<<marks[1]<<endl;
//    cout<<marks[2]<<endl;
//    You can change the value of an array
    // marks[3]= 6969;
//    cout<<marks[3]<<endl;
//    cout<<marks[4]<<endl;
//    cout<<marks[5]<<endl;

//    int othermarks[5];
//    othermarks[0] =894;
//    othermarks[1] =8945;
//    othermarks[2] =8964;
//    othermarks[3] =82594;
//    othermarks[4] =89884;

//     cout<<othermarks[0]<<endl;
//    cout<<othermarks[1]<<endl;
//    cout<<othermarks[2]<<endl;
//    cout<<othermarks[3]<<endl;
//    cout<<othermarks[4]<<endl;
    
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"the marks "<<i<<"is "<<marks[i]<<endl;
    // }

    // int a=0;
    // while (a<6)
    // {
    //     cout<<"the value of marks "<<a<<"is "<<marks[a]<<endl;
    //     a++;
    // }

    // int x= 0;
    // do
    // {
    //    cout<<"the value of marks "<<x <<"is "<<marks[x]<<endl;
    //    x++;
    // } while (x<6);
    
    // Pointers and Arrays

    // int* p= marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;

    // cout<<"the value of *p is "<<*p<<endl;
    // cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    // cout<<"the value of *(p+4) is "<<*(p+4)<<endl;
    // cout<<"the value of *(p+5) is "<<*(p+5)<<endl;

    int *p=marks;
    int i=0;
    while (i<6)
    {
        cout<<"the value of "<<*p <<"is" <<marks[i]<<endl;
        *p++;
        i++;
    }
    
    

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    /*Loops in C++:
    There are 3 types of loops in C++:
    1. For loop
    2. while loop
    3. do-while loop
    */ 

//    For loop in C++:

// Syntax for for loop
// for(initialization; condition; updation)
// {
//     loop body(C++ code);
    
// }



// for(int i= 0; i<=50; i++ )
// {
//          cout<<i<<endl;
// }

// example of infinite  for loop
// for(int i= 1; 2<=50; i++ )
// {
//          cout<<i<<endl;
// }

// while loop in C++
// syntax :
// while(condition)
// {
//      C++ statements;
// }

// int i=1;
// while(i<=50){
//     cout<<i<<endl;
//     i++;
// }

// do while loop in C++
// syntax:
// do
// {
//     C++ statements;
// } while(condition);

// int i= 1;
// do{
//     cout<<i<<endl;
//     i++;
// } while(false);

// Printing multiplication of 6 using for loop
// for( int i=6; i<=60; i++){
//     cout<<i<<endl;
//     i++;
//     i++;
//     i++;
//     i++;
//     i++;
// }

// Printing multiplication of 6 using while loop
int i=6;
while(i<=60){
    cout<<i<<endl;
    i++;
    i++;
    i++;
    i++;
    i++;
    i++;
} 

    return 0;
}
// working with files ---> Reading and writing Files

#include<iostream>
#include<fstream>

/*
The useful classes for working with files in C++ are :
1. fstreambase
2. ifstream  --> derived from fstreambase  (for input)
3. ofstream  --> derived from fstreambase  (for output)

*/

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file :
// 1. Using the consturctor 
// 2. Using the member function [open()] of the class

using namespace std;

int main(){
    string vb = "How are you";
    string vb2;
    // Opening files using constuctor and writing it
    ofstream the("smple34.txt"); // write operator
    the<<vb;

    // Opening files using constuctor and Reading it
    ifstream goku("smple34b.txt");
    // goku>>vb2;
    getline (goku,vb2);
    cout<<vb2;

    return 0;
}
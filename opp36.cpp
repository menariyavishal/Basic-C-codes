// Opening files in C++ with the help of [open()] member function

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream yup;
    yup.open("smple34b.txt");
    yup<<"hey' buddy how are you "<<endl;
    yup<<"hey' buddy how are you good or not? "<<endl;
    yup<<"I think it is a good day. "<<endl;
    yup.close();

    ifstream cup;
    cup.open("smple34b.txt");
    string lelo;
    // cup>>lelo;
    // cout<<lelo;

    while(cup.eof()==0){  //----> eof [end of file]
        getline(cup,lelo);
        cout<<lelo<<endl;
    }
    cup.close();

    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with bapu stream
    ofstream bapu("smple34.txt");

    // creating a nam string anf filing it with the string entered by the user
    cout<<"Enter your name";
    string nam;
    cin>>nam;
    
    // Writng a string to the file
    bapu<<"Your name is " + nam <<" and you are a unique person ";
    bapu.close();

    ifstream kal("smple34.txt");
    string judja;
    getline(kal,judja);
    cout<<judja;
    kal.close();


    return 0;
}
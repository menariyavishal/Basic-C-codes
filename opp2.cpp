 // OOPs - classes and objects

    // C++ --> initially called --> C with classes by (stroustroup)
    // class --> extension of structrues (in c)
    // strutures had limitations
    //      - members are public
    //      - no methods
    // classes --> structures and more
    // classes --> can have methods and properties
    // classes --> can make few members as private and few as public
    // structures in C++ are  typedefed

    // you can declare objects along with the class declaration like this:

    /* class students{
        class defination (methods, properties, variables..etc)
    } vishal, anurag , lalit, vikas ; */

    // private variables are not accessable from anyware they can only accessed by a method declared in class

    // Nesting of members functions
    

#include<iostream>
#include<string>
using namespace std;

class binary{
    private: //By default variables in class are private
    string s;
    void chk_bin(void);
    public:
    void read(void);
    void ones(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number "<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for ( int i = 0; i < s.length() ; i++)
    {
       if(s.at(i)!='0' && s.at(i)!='1'){
        cout<<"Incorrect binary format "<<endl;
        exit(0);
       }
    }
    
}

void binary :: ones(void){
    chk_bin(); //this is called Nesting of members function
     for ( int i = 0; i < s.length() ; i++){
        if(s.at(i)=='0'){
            s.at(i) ='1';
        }
        else{
            s.at(i)='0';
        }
     }
}

void binary :: display(void){
    cout<<"Displaying the binary number "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
   binary b;
   b.read();
//    b.chk_bin();
   b.display();
   b.ones();
    b.display();

    return 0;
}
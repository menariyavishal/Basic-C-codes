#include <iostream>
using namespace std;
class base
{
protected: // Protected members works as private (cannot be accessed directly) members but they can be inherited
    int a;

private:
    int b;
};

/*
For a protected member:
                                Public derivation          Private derivation       Protected derivation
    1. Private members              Not inherited               Not inherited           Not inherited
    2. Protected members            protected                   private                 protected
    3. Public members               public                      private                 protected


*/

class derived : protected base
{


};


int main()
{
    base b;
    derived d;

    // cout<<d.a;

    return 0;
}
// Templates in C++

#include<iostream>
using namespace std;

template <class T>  //You can specify any variable name rather than [T] in the template syntax.
class vector{
    public:
        T * arr;
        int size;
    vector(int a){
        size = a;
        arr = new T[size];
    }

    T dotProduct(vector &v){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
        
    }
};

int main(){
    // vector v1(3);
    // v1.arr[0] = 5;
    // v1.arr[1] = 4;
    // v1.arr[2] = 1;

    // vector v2(3);
    // v2.arr[0] = 3;
    // v2.arr[1] = 2;
    // v2.arr[2] = 1;
    // int ans = v2.dotProduct(v1);
    // cout<<ans<<endl;
    vector <float> v1(3);
    v1.arr[0] = 1.1;
    v1.arr[1] = 0.4;
    v1.arr[2] = 1.89;

    vector <float> v2(3);
    v2.arr[0] = 3.2;
    v2.arr[1] = 2.78;
    v2.arr[2] = 1.55;
    float ans = v2.dotProduct(v1);
    cout<<ans<<endl;

    return 0;
}
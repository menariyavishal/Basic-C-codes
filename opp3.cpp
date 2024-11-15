#include<iostream>
using namespace std;

class market {
    int itemno[100];
    int itemprice[100];
    int counter;
    public:
    void starttag(void) {counter=0;}
    void setprice(void);
    void displayprice(void);
    int sum(int a);

};

void market :: setprice(void){
    cout<<"Enter the itemno "<<counter+1<<endl;
    cin>>itemno[counter];
    cout<<"Enter the itemprice "<<endl;
    cin>>itemprice[counter];
    counter++;
}

void market ::displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of itemno "<<itemno[i]<<"is "<<itemprice[i]<<endl;
    }  
}

int market :: sum(int a){
    for (int i = 0; i < counter; i++)
    {
       
       a++;
    return i+a;
    }
   
}
int main(){
    market shop;
  shop.starttag();
 for (int i =0; i < 3; i++)
 {
    cout<<i<<endl;
    shop.setprice();
 }
 shop.displayprice();

 cout<<"total price is "<<endl;
    shop.sum(1);

    return 0;
}
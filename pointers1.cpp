#include<iostream>
using namespace std;
void func(int *p){
    p = p+1;
      cout<<"in function "<<p<<endl;
    cout<<"in function "<<*p<<endl;
}
int main(){
    int a =5;
    int *p =&a;
    cout<<"before "<<p<<endl;
    cout<<"before "<<*p<<endl;
     func(p);
        cout<<"after "<<p<<endl;
    cout<<"after "<<*p<<endl;
    // because of call by reference value only in function changes;
    return 0;
}
#include<iostream>
using namespace std;
void func(int *p){
    *p = *p+1;
    // *p means value at pointer p which is increased by 1
    // so 6 is printed
     
}
int main(){
    int a =5;
    int *p =&a;
    cout<<"before "<<p<<endl;
    cout<<"before "<<*p<<endl;
     func(p);
        cout<<"after "<<p<<endl;
    cout<<"after "<<*p<<endl;
    return 0;
}
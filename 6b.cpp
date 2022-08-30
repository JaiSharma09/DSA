#include<iostream>
using namespace std;

int main(){
    int n =8;
    int count=0;
    while(n!=0){
        if(n&1==1){
            count++;  
        }
      n=  n>>1;
    }
    if(count==1){
        cout<<"Power of 2";
    }
    else{
        cout<<"Not a power of 2";
    }
    return 0;
}
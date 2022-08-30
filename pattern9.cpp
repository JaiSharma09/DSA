#include<iostream>
using namespace std;

int main(){
    int  n=9;
    for(int i=1; i<=n;i++){
        for(int j =1; j<=n-i;j++){
            cout<<" ";
        }
        if(i==1 || i==n){
          for(int j =1; j<=i; j++){
              cout<<j<<" ";
          }
        }
        else{
            cout<<"1";
            for(int j=1; j<=2*(i-1)-1;j++){
                cout<<" ";
            }
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
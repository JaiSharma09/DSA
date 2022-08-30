#include<iostream>
using namespace std;

int main(){
    int n =5;
    for(int i =1; i<=n; i++){
        if(i==1){
              cout<<"1";
        }
        else{
            cout<<i;
        for(int j =1; j<=i-1;j++){
           cout<<"*"<<i;
        }
    
    }
    cout<<endl;
    }
    for(int i =1; i<=n;i++){
        if(i!=n){
            cout<<n-i+1;
            for(int j =1; j<=n-i;j++){
                cout<<"*"<<n-i+1;
            }
        }
        else{
            cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}
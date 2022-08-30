// hollow pyramid
#include<iostream>
using namespace std;

int main(){
    int n =8;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        if(i==1|| i==n){
            for(int j=1; j<=i; j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"*";
            for(int j =1; j<=2*(i-1)-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
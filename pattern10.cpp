#include<iostream>
using namespace std;

int main(){
    int n =5;
    for(int i=1; i<=n; i++){
       if(i==1||i==n){
           for(int j =i;j<=n;j++){
               cout<<j;
           }
       }
       else{
           cout<<i;
           for (int j = 1; j <=(n-i-1); j++)
           {
               cout<<" ";
           }
           cout<<n;

       }
       cout<<endl;
    }
    return 0;
}
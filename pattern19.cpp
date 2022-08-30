#include<iostream>
using namespace std;

int main(){
    int n =4;
    int counter= 1;
    for(int i =1; i<=n; i++){
            cout<<counter;
            counter++;
        for(int j =1; j<=i-1;j++){
           cout<<"*"<<counter;
    counter++;
        }
    cout<<endl;
    }
    counter = counter-n;
    cout<<counter;
    counter++;
 for(int i =1; i<=n-1;i++){
     cout<<"*"<<counter;
     counter++;
 }
 cout<<endl;
 for(int i =1; i<=n-1;i++){
     counter=counter-(2*(n-i))-1;
     cout<<counter;
     counter++;
for(int j =1;j<=n-i-1;j++){
cout<<"*"<<counter;
counter++;
}
cout<<endl;
 }
    return 0;
}
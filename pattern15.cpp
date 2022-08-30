// hollow diamond
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i =1; i<=n; i++){
        if(i==1){
              for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
            cout<<"*";
            cout<<endl;
        }
        else{
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j =1; j<=2*(i-1)-1;j++){
cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    }
    for(int i =1; i<=n;i++){
        for(int j=1; j<=i-1;j++){
            cout<<" ";
        }
        if(i!=n){
            cout<<"*";
            for(int j=1; j<=2*(n-i)-1;j++){
                cout<<" ";
            }
            cout<<"*";
        cout<<endl;
        }
        else{
        cout<<"*";
        }
    }
    return 0;
}
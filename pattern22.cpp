#include<iostream>
using namespace std;

int main(){
    int n =4;
    for(int i =1; i<=n; i++){
    int counter=0;
        if(i==1)
        cout<<"* ";
       else{
           cout<<"* ";
           for(int j =1; j<=2*(i-1)-1;j++){
            if(j<i){
                counter++;
                cout<<counter<<" ";
            }
            else{
                counter--;
                cout<<counter<<" ";
            }
           }
           cout<<"*";
       }
       cout<<endl;
    }
    for(int i =1; i<=n-1;i++){
       int counter=0;
        if(i==n-1)
        cout<<"*";
        else{
            cout<<"* ";
            for(int j =1; j<=(2*(n-1))-((2*i)+1);j++){
                if(j<n-i){
                  counter++;
                  cout<<counter<<" ";
                }
                else{
                    counter--;
                    cout<<counter<<" ";
                }
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
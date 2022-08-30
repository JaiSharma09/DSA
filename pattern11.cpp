#include<iostream>
using namespace std;

int main(){
    int n =8;
    for(int i =1;i<=n;i++){
    int counter=0;
        for(int j=1; j<=2*i-1;j++){
            if(j<=i)
            counter++;
            else
            counter--;
            cout<<counter;
        }
        
        cout<<endl;
    }
    return 0;
}
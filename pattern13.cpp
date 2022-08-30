#include<iostream>
using namespace std;

int main(){
    int n =5;
    int a = 65;
    for(int i =1;i<=n;i++){
    char b = char(a-1);
        for(int j=1; j<=2*i-1;j++){
            if(j<=i){
           b++;
            }
            else{
        b--;
            }
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}
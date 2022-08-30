#include<iostream>
using namespace std;

int main(){
    int n, rem,rem1,ans=0,a=1;
    cin>>n;
    while(n!=0){
        rem=n%10;
ans=rem*a+ans;
        n=n/10;
        a=a*10;
    }
        cout<<ans;

    return 0;
}
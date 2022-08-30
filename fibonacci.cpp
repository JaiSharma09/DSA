#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int n1=0, n2=1;
    int ans=0;
    cout<<n1<<" "<<n2<<" ";
    for(int i =3;i<=n;i++){
        ans = n2+n1;
         cout<<ans<<" ";
         n1=n2;
         n2=ans;
    }

    return 0;
}
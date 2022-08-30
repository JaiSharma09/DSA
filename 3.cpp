//digits to numbers
#include<iostream>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    int a[n];
    int b=1;
for (int i = 0; i <n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    ans= a[n-i-1]*b+ans;
b=b*10;

}
cout<<ans;

    return 0;
}
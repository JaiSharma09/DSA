#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int sum1=0;
    for (int i = 0; i < n; i++)
    {
        sum1= sum1+arr[i];
    }
    int sum2= ((n-1)*(n))/2;
    int ans= sum1-sum2;
    cout<<ans;
    return 0;
}
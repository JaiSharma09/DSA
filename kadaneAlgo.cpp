#include<iostream>
#include<limits.h>
using namespace std;
int Kadane(int arr[], int n){
    int SF = INT_MIN;
    int EH =0;
    for (int i = 0; i < n; i++)
    {
        EH = EH + arr[i];
        SF = max(SF, EH);
        if(EH<0)
        EH=0;
    }
        return SF;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
cout<<Kadane(arr, n);
    return 0;
}
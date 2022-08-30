#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
// int m =(n/2)*2;
// both can be used
for(int i =0; i<n-1;i+=2){
int temp = arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
for(int i =0; i<n; i++){
    cout<<arr[i];
}
    return 0;
}
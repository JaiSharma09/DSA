#include<iostream>
using namespace std;
void check(int arr[], int n, int x){
    int i,j;
        for( i =0; i<n-1;i++){
for(j =i+1; j<n;j++){
    if(arr[i]+arr[j]==x){
        cout<<arr[i]<<" "<<arr[j]<<endl;
    }
}
        }
}
int main(){
    int n,i,j,x;
    cin>>n;
    cout<<"Enter the sum you want"<<endl;
    cin>>x;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for( i =0; i<n; i++){
        cin>>arr[i];
    }
check(arr, n, x);
    return 0;
}
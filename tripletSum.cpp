#include<iostream>
using namespace std;

int main(){
    int n, sum;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter sum you want"<<endl;
    cin>>sum;
    for(int i =0; i<n-2; i++){
        for(int j= i+1; j<n-1; j++){
            for(int k =j+1; k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<"The pair is "<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                }
            }
        }
    }
    return 0;
}
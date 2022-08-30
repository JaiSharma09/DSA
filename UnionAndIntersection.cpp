#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cout<<"Enter number of elements of array 1"<<endl;
    cin>>n;
    cout<<"Enter number of elements of array 1"<<endl;
    cin>>m;
    int arr1[n];
    int arr2[m];
    cout<<"Enter elements of array 1"<<endl;
    for(int i =0;i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of array 1"<<endl;
        for(int i =0;i<m; i++){
        cin>>arr2[i];
    }
    int i =0;
    int j =0;
    cout<<"The union is ";
   while(i<n &&j <m){
       if(arr1[i]<arr2[j]){
                cout<<arr1[i]<<" ";
              i++;
            }
            else if(arr1[i]==arr2[j]){
                cout<<arr2[j]<<" ";
                i++;
                j++;
            }
            else{
                cout<<arr2[j]<<" ";
                j++;
            }
        }
        while(i<n){
            cout<<arr1[i]<<" ";
            i++;
        }
        while(j<m){
            cout<<arr2[j]<<" ";
            j++;
        }
        cout<<endl;
        i=0, j=0;
        cout<<"The intersection is ";
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    return 0;
}
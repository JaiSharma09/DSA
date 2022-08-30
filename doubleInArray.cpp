#include<iostream>
#include<algorithm>
using namespace std;
bool binarySearch(int arr[], int n, int s, int e, int target){
         int mid=s+(e-s)/2;
       while(s <= e){
             if(target == arr[mid])
                 return true;
             if(arr[mid] > target)
                 e=mid-1;
             else
                 s=mid+1;
            mid=s+(e-s)/2;
        }
         return false;
    }
bool checkIfExist(int arr[], int n){
         sort(arr, arr+n);
         for(int i=0; i<n; i++){
             if(arr[i] >= 0 && binarySearch(arr, n, i+1, n-1, 2*arr[i]))
                 return true;
             if( arr[i]<0 && arr[i]%2 ==0 && binarySearch (arr, n, i+1, n-1, arr[i]/2))
                 return true;
         }
         return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(checkIfExist(arr, n)){
        cout<<"Yes double exsist";
    }
    else{
        cout<<"Chla ja bsdk";
    }
    return 0;
}
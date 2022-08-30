#include<iostream>
using namespace std;
int getpivot(int arr[], int n){
      int s =0; 
      int e = n-1;
    while(s<e){
        int mid = s +(e-s)/2;
        if(arr[mid]>=arr[0]){
            s= mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int target){
    int start=s;
    int end=e;
    while(start <= end){
    int mid=(start+end)/2;
         if(arr[mid] ==target){
             return mid;
         }
         if(target<arr[mid]){
             end=mid-1;
         }
         else{
             start=mid+1;
         }
    }
    return -1;
    
}
int searchElement(int arr[], int n, int target){
    int pivot = getpivot(arr, n);
    if(target>=arr[pivot] && target<=arr[n-1]){
        return binarySearch(arr, pivot, n-1, target);
    }
    else{
        return binarySearch(arr, 0 , pivot, target);
    }
}
int main(){
    int n, target;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
cin>>target;
cout<<searchElement(arr, n, target);
    return 0;
}
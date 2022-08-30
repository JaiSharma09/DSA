#include<iostream>
using namespace std;
int fixedPoint(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start <= end){
    int mid= start+(end-start)/2;
         int midElement=arr[mid];
         if(arr[mid] ==mid){
             return mid;
         }
         if(arr[mid]>mid){
             end=mid-1;
         }
         else{
             start=mid+1;
         }
    } 
    return -1;
}
int main(){
    int arr[]={0, 1, 3, 4, 7};
    int n=5;
 cout<<fixedPoint(arr, n);
    return 0;
   }
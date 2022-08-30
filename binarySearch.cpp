#include<iostream>
using namespace std;
bool binarySearch(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    while(start <= end){
    int mid=(start+end)/2;
        //  int midElement=arr[mid];
         //element found
         if(arr[mid] ==target){
             cout<<"The index of the element is "<<mid<<endl;
             return true;
         }
         //checki
         if(target<arr[mid]){
             end=mid-1;
         }
         else{
             start=mid+1;
         }
    //    mid=(start+end)/2;
    }
    return false;
    
}
int main(){
    int arr[]={2,4,6,8,9,11,23};
    int n=7;
   int target=23;
    if(binarySearch(arr, n, target)){
        cout<<"Element found"<<endl;
    }
   else{
        cout<<"element not found "<< endl;
   }
    return 0;
   }
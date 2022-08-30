#include<iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int key){
    int mid = e+(s-e)/2;
if(s>e)
return false;
    if(arr[mid]==key)
    return true;
    if(arr[mid]>key)
    return binarySearch(arr, s, mid-1, key);
    else
    return binarySearch(arr, mid+1, e, key);
    
}
int main(){
    int s, e ;
    int key=6;
    int arr[]={1, 2, 3, 4, 5, 6};
    if (binarySearch(arr, 0, 5, key))
    {
        cout<<"Found";
    }
    else
    cout<<"Not Found";
    
    return 0;
}
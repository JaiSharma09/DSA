#include<iostream>
using namespace std;
void sortArray(int arr[], int n){
    if(n==0 || n==1)
    return;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        swap(arr[i], arr[i+1]);
    }
    sortArray(arr, n-1);
    
}
int main(){
    int n=5;
    int arr[]={2, 4, 3, 6, 1};
      sortArray(arr, n);
      for (int i = 0; i < n; i++)
      {
        cout<<arr[i]<<" ";
      }
      
    return 0;
}
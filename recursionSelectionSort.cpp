#include<iostream>
using namespace std;
void selectionSort(int arr[], int n, int begin){
if(begin>=n-1)
return;
int minIndex = begin;
for (int i = begin; i < n; i++)
{
    if(arr[i]<arr[minIndex])
    minIndex=i;
}
swap(arr[minIndex], arr[begin]);
selectionSort(arr, n, begin+1);

}
int main(){
    int n=5;
    int arr[]={2, 4, 1, 6, 0};
    selectionSort(arr, 5, 0);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
#include<iostream>
using namespace std;
bool isPossible(int arr[], int n, int m , int mid){
int student =1;
int pages =0;
for (int i = 0; i < n; i++)
{
    if (pages+arr[i]<=mid)
    {
        pages = pages+arr[i];
    }
    else{
        student++;
        if (student>m || arr[i]>mid)
        {
            return false;
        }
        pages=arr[i];
    }
}
    return true;

}
int allocationBooks(int arr[], int n, int m){
int s=0;
int sum =0;
for (int i = 0; i < n; i++)
{
    sum=sum+arr[i];
}
int e= sum;
int ans =-1;
while (s<=e)
{
int mid = s+(e-s)/2;
    if (isPossible(arr, n, m, mid))
    {
       ans = mid;
       e =mid-1;
    }
    else
   s =mid +1; 
    
}
return ans;
}
int main(){
    int n, m;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<allocationBooks(arr, n, m);
    return 0;
}
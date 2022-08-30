#include<iostream>
using namespace std;
bool isPossible(int arr[], int n, int k, int mid){
   int painterCount=1;
   int paint=0;
   for (int i = 0; i < n; i++)
   {
    if (paint+arr[i]<=mid)
    {
        paint = paint+arr[i];
    }
    else{
        painterCount++;
         if (painterCount>k)
         {
            return false;
         }
        paint = arr[i];   
    }
    
   }
   return true;
}
int painterPartition(int arr[], int n, int k){
    int s =0;
    int sum =0;
    int ans =-1;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    while (s<=e)
    {
       int mid = s+(e-s)/2;
       if (isPossible(arr, n, k, mid))
       {
        ans = mid;
        e= mid-1;
       }
       else
       s=mid+1;
        
    }
    return ans;
    
}
int main(){
  int n, k;
  cin>>n;
  cin>>k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
 cout<< painterPartition(arr, n, k);

    return 0;
}
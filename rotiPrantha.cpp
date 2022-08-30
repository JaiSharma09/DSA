#include<iostream>
using namespace std;
bool isPossible(int arr[], int n , int m , int mid){
int time =0;
for (int i = 0; i < n; i++)
{
    time = time+arr[i]*i;
}

}
int rotiPrantha(int arr[], int n , int m){
   int s =0;
   int e =(m*(m+1))/1;
   int ans =-1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(isPossible(arr, n, m, mid)){
           ans = mid;
           e = mid-1;
        }
        else
        s = mid+1;
    }
    return ans;
}
int main(){
    int n,m;
    cin>>m;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    
    return 0;
}
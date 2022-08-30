#include<iostream>
using namespace std;
int binarySearch(int arr[][3], int n , int m, int target){
    int s =0; int e=n*m-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        int element = arr[mid/m][mid%m];
        if(element == target){
            return arr[mid/m][mid%m];
        }
        if(element<target){
         s = mid+1;
        }
        else{
               e = mid+1;
        }
    }
    return -1;
}
int main(){
    int n=3, m=3;
    int arr[n][m];
    cout<<"Enter the array elements";
for(int i =0; i<n; i++){
   for(int j =0; j<m; j++){
       cin>>arr[i][j];
   }
} 
int target = 5;
cout<<binarySearch(arr, n, m, target);
    return 0;
}
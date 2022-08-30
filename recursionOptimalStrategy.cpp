#include<iostream>
using namespace std;
int optimalStrategy(int arr[], int i, int j){
    if(i>j)
    return 0;
    int choice1 = arr[i]+min(optimalStrategy(arr, i+2, j),optimalStrategy
    (arr, i+1, j-1) );
  int choice2 = arr[j]+min(optimalStrategy(arr, i, j-2),optimalStrategy
    (arr, i+1, j-1) );
    int ans = max(choice1, choice2);
    return ans;
    }
int main(){
    int arr[]={20, 30, 2, 2, 2, 10};
    int n =6;
   int i=0;
   int j=n-1;
    cout<< optimalStrategy(arr,i, j );
    return 0;
} 
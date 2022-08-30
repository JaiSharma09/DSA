#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, sum;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter sum you want";
    cin>>sum;
    sort(arr, arr+n);
    int i =0; 
      int j = n-1;
      while(i<j){
          if(arr[i]+arr[j]==sum){
              cout<<"Pair is "<<arr[i]<<" "<<arr[j]<<endl;
            //   break;
            i++;
          }
          else {
          if (arr[i]+arr[j]<sum){
              i++;
          }
          else
          j--;
      }
      }
          return 0;
}
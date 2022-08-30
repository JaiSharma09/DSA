#include<iostream>
#include<unordered_map>

using namespace std;
int majority(int arr[], int n){
  unordered_map<int , int> m;
  for (int i = 0; i < n; i++)
  {
    m[arr[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    if (m[arr[i]]>n/2)
    {
        return arr[i];
    }
    
  }
  return -1;
}
int main(){

   int arr[] = {1, 2, 2, 3, 3, 3};
   int n =5;
   cout<<majority(arr, n);
    return 0;
}
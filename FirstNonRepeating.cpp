#include<iostream>
#include<unordered_map>
using namespace std;
int firstRepeating(int arr[],int n){

    unordered_map<int,int>count;
    for(int i=0;i<n;i++){
         int currentElement=arr[i];
         count[currentElement]++;
    }
    for(int i=0;i<n;i++){
         int currentElement=arr[i];
         if(count[currentElement]==1)
             {
                  return currentElement;
             } 
    }
    return -1;
}
int main(){
       int arr[] = {5, 5, 3,4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = firstRepeating(arr, n);
    cout <<result;
    return 0;
}
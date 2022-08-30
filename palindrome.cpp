#include<iostream>
using namespace std;
bool palindrome(int arr[], int size){
for (int i = 0; i < size; i++)
{
    if(arr[i]!=arr[size-i-1]){
          return false; 
    }
}
return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int ans=palindrome(arr, n);
if (ans==false){
    cout<<"Lodha lele";
}
else{
    cout<<"Palindome";
}
    return 0;
}
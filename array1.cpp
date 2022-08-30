#include<iostream>
using namespace std;
void print(int arr[], int n){
    arr[0]=12;
for(int i =0; i<n; i++){
cout<<arr[i]<<endl;
}
}
int main(){
    int arr[]={1, 2, 3, 5};
    print(arr, 4);
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    return 0;
}
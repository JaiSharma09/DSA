#include<iostream>
using namespace std;

int main(){
    int n;
    int count;
    bool flag=true;
    cout<<"Enter a number";
    cin>>n;
    int arr[n];
    int m;
    cout<<"Enter a number to search";
    cin>>m;
    cout<<"Enter Numbers";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
for(int i =0;i<n;i++){
if(arr[i]==m){
 flag=true;
 count=i;
 break;
}
else{
    flag=false;
}
}
if(true){
    cout<<"The index of number is"<<endl;
    cout<<count;
}
else{
    cout<<"Number not found";
}
    return 0;
}
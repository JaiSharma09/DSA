#include<iostream>
using namespace std;

int main(){
    int n, m;
cin>>n;
cin>>m;
int arr[n][m];
for(int i =0; i<n; i++){
    for(int j =0; j<m; j++){
        cin>>arr[i][j];
    }
}
for(int i =0; i<n; i++){
for(int j =0; j<m; j++){
    if(i%2==0){
        cout<<arr[i][j]<<" ";
    }
    else{
        cout<<arr[i][m-j-1]<<" ";
    }
}
}
    return 0;
}
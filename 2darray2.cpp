#include<iostream>
using namespace std;

int main(){
    int n;
int m;
cin>>n;
cin>>m;
int arr[n][m];
for(int i =0; i<n; i++){
for(int j =0; j<m; j++){
    cin>>arr[i][j];
}
}
for(int i =0; i<m;  i++){
int sum=0;
for(int j =0; j<n; j++){
sum=sum+arr[j][i];
}
cout<<sum<<" ";
}
    return 0;
}
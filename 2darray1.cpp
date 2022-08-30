#include<iostream>
using namespace std;

int main(){
    int n, m, target;
    cin>>n;
    cin>>m;
    cin>>target;
    int arr[n][m];
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n; i++){
        for(int j =0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==target){
                cout<<"true";
                return 0;
            }
        }
        
    }
    
   
}
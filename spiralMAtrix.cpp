#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"Enter n";
cin>>n;
cout<<"Enter m";
cin>>m;
int arr[n][m];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin>>arr[i][j]; 
    }
    
}

int start_row=0,start_column=0,end_row=n-1,end_column=m-1;
while (start_column<=end_column && start_row<=end_row)
{
    for(int i = start_column; i<= end_column; i++){
cout<<arr[start_row][i]<<" ";
    }
    start_row++;
    for(int i = start_row; i<= end_row; i++){
cout<<arr[i][end_column]<<" ";
    }
    end_column--;
    for(int i = end_column; i>= start_column; i--){
cout<<arr[end_row][i]<<" ";
    }
    end_row--;
    for(int i = end_row; i>= start_row; i--){
cout<<arr[i][start_column]<<" ";
    }
    start_column++;
}
    return 0;
}


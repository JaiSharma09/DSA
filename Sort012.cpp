#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
int zero=0, one=0, two=0;
for(int i =0; i<n; i++){
    if(arr[i]==0)
    zero++;
     else if(arr[i]==1)
   one++;
    else if(arr[i]==2)
    two++;
}
int i =0;
while(zero--){
arr[i]=0;
i++;
}
while(one--){
arr[i]=1;
i++;

}
while(two--){
arr[i]=2;
i++;
}
for(int i =0; i<n; i++){
    cout<<arr[i];
}
    return 0;
}
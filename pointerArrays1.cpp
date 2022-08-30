#include<iostream>
using namespace std;

int main(){
    int i =0;
    int arr[]={1, 2, 3};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<&arr<<endl;
    cout<<i[arr]<<endl;
    cout<<i[arr+1]<<endl;
    // value for both arr and &arr will be same
    // array is self referencing
    // so it will print same address
    return 0;
}
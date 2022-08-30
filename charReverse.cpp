#include<iostream>
#include<string.h>
using namespace std;
void reverse(char arr[]){
    int s = 0;
    int n = strlen(arr);
    int e = n-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main(){
    char arr[10]="naughty";
    reverse(arr);
    cout<<arr;
    return 0;
}
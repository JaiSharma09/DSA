#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n =-1234;
    int count=0;
    while(n!=0){
    int rem = n%10;
count = rem + count*10;
    n=n/10;
    }
    if (count<INT_MIN || count>INT_MAX)
    {
    cout<<"Naughty";
    }
    else{
    cout<<count;
    }
    return 0;
}
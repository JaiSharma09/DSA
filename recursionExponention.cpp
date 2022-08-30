#include<iostream>
using namespace std;
int exponent(int n, int m){
    if (m==0)
    {
        return 1;
    }
    int smallerAns = exponent(n, m/2);
    if(m&1){
       return smallerAns*smallerAns*n;
    }
    else
    return smallerAns*smallerAns;
    
}
int main(){
    int n, m;
    cin>>n>>m;
    cout<<exponent(n, m);
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    float f = 10.5;
    float q = 2.5;
    float *p = &f;
    (*p)++;
    *p = q;
    cout<<*p<<" "<<f<<" "<<q;
    return 0;
}
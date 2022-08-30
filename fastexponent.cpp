#include<iostream>
using namespace std;
int power(int x, int y)
{
    int res = 1;
    while (y)
    {    
        if (y &1)
            res = (res * x); 
        y = y >> 1;
        // or y=y/2
        x = (x * x);
    }
    return res;
}
int main(){
    int a =5;
    int b =4;
    cout<<power(a, b);
    return 0;
}
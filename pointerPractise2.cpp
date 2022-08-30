#include<iostream>
using namespace std;
int f(int x, int* y ,int** z){
  **z=**z+1;
//   4 + 1=5
 int p=**z;
//  p=5
*y=*y+2;
// 5+2=7
int q =*y;
// q=7
x =x +3;
// 4+3=7
// as copy of x is passed so its value will be 4 
// in other case the pointer points to the updated value
// but x is not a pointer so its value will be 4
return x+p+q;
// 7+7+4
}
int main(){
    int c, *b, **a;
    c=4;
    b=&c;
    a=&b;
    cout<<f(c, b, a);
    return 0;
}
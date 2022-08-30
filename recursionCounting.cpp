#include<iostream>
using namespace std;
void counting(int n){
    if (n<1)
    {
        return ;
    }
    counting(n-1) ;
    cout<<n<<" ";
    
}
int main(){
    int n;
    cin>>n;
   counting(n);
    return 0;
}
#include<iostream>
using namespace std;
int factorial(int n){
     if ( n<=1){
          return 1 ;
     }
    return n*(factorial(n-1));
}
int main(){
    int n =5;
      for(int i=0; i<n; i++){
    
          for(int j =0; j<=i;j++){
              cout<<factorial(i)/(factorial(j)*factorial(i-j));
          }
          cout<<endl;
      }
    return 0;
}
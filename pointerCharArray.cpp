#include<iostream>
using namespace std;

int main(){
    char sentence[] = "My name is Jai";
    char *ptr = sentence;
           cout<<ptr<<endl;
           cout<<*ptr<<endl;
           cout<<&ptr<<endl;
    return 0;
}
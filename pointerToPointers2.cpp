#include<iostream>
using namespace std;
void function1(int **p){
    p =p+1;
}
void function2(int **p){
    *p =*p+1;
}void function3(int **p){
    **p =**p+1;
}
int main(){
    int a =5;
    int *p = &a;
    int **q =&p;

    cout<<"before "<<q<<endl;  
    cout<<"before "<<*q<<endl;
    cout<<"before "<<**q<<endl;

    cout<<endl;

function1(q);

    cout<<"after 1 "<<q<<endl;
    cout<<"after 1 "<<*q<<endl;
    cout<<"after 1 "<<**q<<endl;

    cout<<endl;

function2(q);

    cout<<"after 2 "<<q<<endl;
    cout<<"after 2 "<<*q<<endl;
    cout<<"after 2 "<<**q<<endl;

    cout<<endl;

function3(q);

    cout<<"after 3 "<<q<<endl;
    cout<<"after 3 "<<*q<<endl;
    cout<<"after 3 "<<**q<<endl;

    return 0;
}
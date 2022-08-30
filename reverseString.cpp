#include<iostream>
using namespace std;
int length(char name[]){
    int len=0;
    for(int i =0; name[i]!='\0';i++){
        len++;
    }
    return len;
}
void reverse(char name[], int n){
    int s =0;
    int e =n-1;
    while(s<e){
        swap(name[s], name[e]);
        s++;
        e--;
    }
}
int main(){
    char name[20]="Jai";
    int lengthh = length(name);
    reverse(name, lengthh);
    cout<<name;
    return 0;
}
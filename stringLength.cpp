#include<iostream>
using namespace std;
int length(char name[]){
    int len=0;
    for(int i =0; name[i]!='\0';i++){
        len++;
    }
    return len;
}
int main(){
    char name[20]="Jai";
    cout<<length(name);
    return 0;
}
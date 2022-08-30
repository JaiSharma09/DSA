#include<iostream>
#include<strings.h>
using namespace std;
int getLength(char arr[]){
    int length =0;
    int index=0;
    while(arr[index]!='\0'){
        length++;
        index++;
    }
    return length;
}
int main(){
    char arr[10]="Jai";
      cout<<"Size of string is "<<getLength(arr)<<endl;
      cout<<"Size of string is "<<strlen(arr);

    return 0;
}
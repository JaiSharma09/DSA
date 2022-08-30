#include<iostream>
using namespace std;
char toLower(char ch){
   if(ch>='a' && ch<='z'){
       return ch;
   }
   else{
      char temp = ch-'A'+'a';
       return temp;
   }
}
int length(char name[]){
    int len=0;
    for(int i =0; name[i]!='\0';i++){
        len++;
    }
    return len;
}
bool palindrome(char name[], int n){
    int s =0;
    int e =n-1;
    while(s<e){
        if(toLower(name[s])!=toLower(name[e])){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
int main(){
//    cout<< toLower('l');
    char name[20]="Nitin";
    int len=length(name);
    if(palindrome(name, len)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}
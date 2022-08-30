#include<iostream>
using namespace std;
void reverse( string &s, int i, int j){
    // we have to pass it using refernce variable 
    // as wothout it all the operations will be on new string s
if(i>j)
return;
swap(s[i], s[j]);
i++;
j--;
reverse(s, i, j);
}
int main(){
    string name ="jai";
    reverse(name, 0, name.length()-1);
    cout<<name;
    return 0;
}
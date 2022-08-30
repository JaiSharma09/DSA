#include<iostream>
using namespace std;
bool palindrome(string str, int i, int j){
    if(i>j)
    return true;
    if(str[i]!=str[j])
    return false;
    else
    return palindrome(str, i+1, j-1);
}
int main(){
    string name ="babbab";
  
    if(palindrome(name, 0, name.length()-1))
   cout<<"Palindrome";
    else
    cout<<"Not a Palindrome";
    return 0;
}
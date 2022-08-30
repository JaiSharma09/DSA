#include<iostream>
using namespace std;
bool rotation(string s1, string s2){
    if (s1.length()!=s2.length())
    {
        return false;
    }
    string temp = s2+s2;
    if (temp.find(s1)==temp.npos)
    {
        return false;
    }
    else 
    return true;
}
int main(){
    string s1 = "babbar";
    string s2 = "barbab";
   if (rotation(s1, s2))
   {
    cout<<"True";
   }
   else{
    cout<<"False";
   }
   
    return 0;
}
#include<iostream>
using namespace std;
string removeOcc(string s, string part){
  while (s.length()!=0 && s.find(part)<s.length())
  {
    s.erase(s.find(part), part.length());
  }
  return s;
    
}
int main(){
    string s;
    string part;
    cin>>s;
   cin>>part;
cout<<removeOcc(s, part);
    return 0;
}
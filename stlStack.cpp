#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("Jai");
    s.push("Naughty");
    s.push("Lol");
   cout<<"First element is "<<s.top()<<endl;
//    last in first out
s.pop();
   cout<<"First element is "<<s.top()<<endl;
   cout<<"Size of stack "<<s.size()<<endl;
   cout<<"Empty or not "<<s.empty()<<endl;
    return 0;
}

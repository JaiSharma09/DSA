#include<iostream>
#include<queue>
using namespace std;

int main(){
        queue<string> s;
    s.push("Jai");
    s.push("Naughty");
    s.push("Lol");
   cout<<"First element is "<<s.front()<<endl;
//    last in first out
s.pop();
   cout<<"First element is "<<s.front()<<endl;
   cout<<"Size of stack "<<s.size()<<endl;
   cout<<"Empty or not "<<s.empty()<<endl;
    return 0;
}
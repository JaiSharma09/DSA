#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

m[1] = "Jai";
m[13] = "LOL";
m[2] = "Naughty";
m.insert({5, "Gigachad"});

// sorted in case of map
for(auto i:m){
    cout<<i.first<<" "<<i.second;
    cout<<endl;
}

cout<<"Finding 13 : "<<m.count(13);

cout<<"After erase "<<endl;
m.erase(13);
for(auto i:m){
    cout<<i.first<<" "<<i.second;
    cout<<endl;
}

auto it = m.find(5);
for (auto i = it; i!=m.end(); i++)
{
  cout<<(*i).first<<" "<<endl;
}

    return 0;
}
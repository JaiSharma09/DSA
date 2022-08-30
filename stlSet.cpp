#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(2);
    s.insert(8);

// will print 1 element only 1 time and in ascending order
for(int i : s){
    cout<<i<<" ";
    }
cout<<endl;

    set<int>:: iterator it = s.begin();
    it++;
    s.erase(it);
    for(int i : s){
    cout<<i<<" ";
    }
cout<<endl;

    cout<<"5 is present or not "<<s.count(5)<<endl;
    cout<<"4 is present or not "<<s.count(4)<<endl;

set<int>:: iterator itr =s.find(5);
cout<<"Value present at itr is "<<*itr;
cout<<endl;

for (auto it = itr; it!= s.end(); it++){
    cout<<*it<<" ";
}

    return 0;
}
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

//     for(int i =0; i<d.size(); i++){
//         cout<<d.at(i)<<" ";
//     }
// cout<<endl;

//     d.pop_back();
//     for(int i =0; i<d.size(); i++){
//         cout<<d.at(i);
//     }
cout<<"First : "<<d.front()<<endl;
cout<<"Last : "<<d.back()<<endl;
cout<<"Empty or not "<<d.empty()<<endl;

cout<<"Size before erase is "<<d.size()<<endl;
d.erase(d.begin(), d.begin()+1);
cout<<"Size after erase is "<<d.size()<<endl;
    return 0;
}
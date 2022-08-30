#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity is " << v.capacity()<<endl; 

    v.push_back(1);
    cout << "Capacity is " << v.capacity()<<endl;

    v.push_back(2);
    cout << "Capacity is " << v.capacity()<<endl;

    v.push_back(3);
    cout << "Capacity is " << v.capacity()<<endl;
    cout<<" size is "<<v.size()<<endl;;

    cout<<"Element at index 2 is "<<v.at(2)<<endl;
    cout<<"First and last element are "<<v.front()<<" "<<v.back()<<endl;

cout<<"Before pop back : "<<endl;
    for(int i =0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
cout<<endl;

    v.pop_back();
cout<<"After pop back : "<<endl;
   for(int i =0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
cout<<endl;
    cout<<"Size before clear is "<<v.size()<<endl;
    cout<<"Capacity before clear is "<<v.capacity()<<endl;

    v.clear();
    cout<<"Size after clear is "<<v.size()<<endl;
    cout<<"Capacity after clear is "<<v.capacity()<<endl;

// vector<int> v(5, 1); means vector with size 5 all elements 1
    return 0;
}
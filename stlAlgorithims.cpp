#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
cout<<"Using binary search"<<endl;
cout<<binary_search(v.begin(), v.end(), 7);
cout<<endl;
int a = 3;
int b =5;
 
 cout<<"Max = "<<max(a, b);
 cout<<endl;

 swap(a, b);
 cout<<a;
cout<<endl;

 string abcd = "abcd";
 reverse(abcd.begin(), abcd.end());
 cout<<"String is " <<abcd;
cout<<endl;

 rotate(v.begin(), v.begin()+1, v.end());
cout<<"After rotate "<<endl;
for(int i : v){
    cout<<i;
    }
    cout<<endl;

    sort(v.begin(), v. end());
    for(int i:v){
        cout<<i;
            }
    return 0;
}
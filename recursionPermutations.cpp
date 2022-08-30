#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> num, vector<vector<int>> &ans, int index){
if(index>=num.size()){
    ans.push_back(num);
}
for (int i = index; i < num.size(); i++)
{
    swap(num[index], num[i]);
    solve(num, ans, index+1);
    // we are again swapping as when we make bac from abc
    // we have to again conver it to abc for furthrt change it to cba
    swap(num[index], num[i]);
}

}
vector<vector<int>> permutations(vector<int> num){
    vector<vector<int>> ans;
    int index =0;
    solve(num, ans, index);
    return ans;
}
int main(){
    
    return 0;
}
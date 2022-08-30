#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> vec, vector<int> output,int index, vector<vector<int>>&ans ){
    if (index>ans.size())
    {
        ans.push_back(output);
        return;
    }
    solve(vec, output, index+1, ans);
    int element=vec[index];
    output.push_back(element);
     solve(vec, output, index+1, ans);

    
}
vector<vector<int>>subset(vector<int>& vec){
vector<vector<int>> ans;
vector<int> output;
int index =0;
solve(vec, output, index, ans);
}
int main(){
    vector<int> vec= {10, 23, 12, 3, 4, 2};
     vector<vector<int>> answer =subset(vec);
     
    return 0;
}
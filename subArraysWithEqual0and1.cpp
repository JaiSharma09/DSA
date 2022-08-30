#include<iostream>
#include<unordered_map>
using namespace std;
int SubarrayEqual0and1(int arr[], int n){
    int count =0;
    int ans =0;
unordered_map<int, int> Map;
Map[0]=1;
for (int i = 0; i < n; i++)
{
    count+=(arr[i]==1?1:-1);
    ans =ans + Map[count];
    Map[count]++;
}
return ans;
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
   int a = SubarrayEqual0and1(arr, n);
   cout<<a;
    return 0;
}
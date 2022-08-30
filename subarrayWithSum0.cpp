#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
int main()
{
    int arr[] = {2, 1, 3, -4, 5};
    int sum =0;
    int n = sizeof(arr)/sizeof(arr[0]);
     vector<int> prefixSum(n);
     for (int i = 0; i < n; i++)
     {
        sum = sum +arr[i];
        prefixSum[i]=sum;
     }
    
unordered_map<int , bool>m;
for (int i = 0; i < n; i++)
{
    if (prefixSum[i] ==0)
    {
       cout<<"Subarray exsist";
    }
    else if (m[prefixSum[i]]==true)
    {
       cout<<"Subarray exsist";
    }
    else{
        m[prefixSum[i]]=true;
    }
    
    
}
    return 0;
}
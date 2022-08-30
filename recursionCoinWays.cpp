#include<iostream>
using namespace std;
int solve(int coins[], int amount, int size, int currentCoin){
if(amount==0)
return 1;
if (amount<0)
    return 0;
int ways =0;
for (int i = currentCoin; i < size; i++)
{
    ways = ways + solve(coins, amount-coins[i], size, i);
}
return ways;
}
int main(){
    int coins[]={1, 2};
    int amount =4;
    int size =2;
    int ans = solve(coins, amount, size, 0);
    cout<<ans;
    return 0;
}
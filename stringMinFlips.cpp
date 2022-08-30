#include<iostream>
using namespace std;
char flips(char expected){
    if(expected=='0'){
        return '1';
    }
    else
    return '0';
}
int minFlips(string s, char expected){
int count=0;
for (int i = 0; i < s.length(); i++)
{
    if(s[i]!=expected){
        count++;
    }
    expected= flips(expected);
}
return count;
}
int main(){
    string str ="0111";
int ans0 = minFlips(str, '0');
int ans1 = minFlips(str, '1');
int ans =  min(ans0, ans1);
cout<<ans;
    return 0;
}
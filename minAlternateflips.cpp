#include<iostream>
using namespace std;
char flip(char expected){
    if(expected=='0'){
        return '1';
    }
        else
        return '0';
}
int flips(string s, char expected){
    int count =0;
    for(int i =0; i<s.length();i++){
        if(s[i]!=expected){
            count++;
        }
        expected = flip(expected);
    }
    return count;
}
int main(){
    string s ="0010";
   int ans1=flips(s, 0);
   int ans2=flips(s, 1);
   int minn = min(ans1, ans2);
   cout<<minn;
    return 0;
}
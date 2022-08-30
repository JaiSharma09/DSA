#include<iostream>
using namespace std;
char getMaxOcc(string s){
    int arr[26]={0};
    int number=0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch>='a'&& ch<='z')
        {
            number = ch-'a';
        }
        else
        number= ch-'A';
        arr[number]++;
    }
    int maxi=-1, ans =0;
     for (int i = 0; i < 26; i++)
     {
        if (maxi<arr[i])
        {
            maxi=arr[i];
            ans=i;
        }
        
     }
     char finalAns = ans +'a';
      return finalAns;
    
}
int main(){
    string s;
    cin>>s;
    cout<<getMaxOcc(s);
    return 0;
}
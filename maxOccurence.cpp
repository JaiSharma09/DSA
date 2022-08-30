#include<iostream>
using namespace std;
char maxOcc(string s){
    int arr[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        // int num =0;
       char ch=s[i];
       int num= ch-'a';
       arr[num]++;
    }
    int maxi=-1, ans =0;
for(int i =0; i<26;i++){
if(maxi<arr[i]){
    ans=i;
    maxi=arr[i];
}
}
   return 'a'+ans; 
}
int main(){
    string s ="hello";
    char c = maxOcc(s);
    cout<<c;
    return 0;
}
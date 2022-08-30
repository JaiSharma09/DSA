#include<iostream>
using namespace std;
bool checkAnagram(string a, string b){
    int freq[26]={0};
    for(int i =0;i<a.length();i++){
       char ch=a[i];
       int index=ch-'a';
       freq[index]++;
    }

      for(int i =0;i<b.length();i++){
       char ch=b[i];
       int index=ch-'a';
       freq[index]--;
      }
    for(int i =0; i<26; i++){
        if(freq[i]!=0){
            return false;
        }

    }
    return true;
}
int main(){
    string a ="babbar";
    string b ="rbbba";
    cout<<checkAnagram(a, b);
    return 0;
}
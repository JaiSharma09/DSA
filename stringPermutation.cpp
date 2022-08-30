#include<iostream>
using namespace std;
bool checkEqual(int arr1[26], int arr2[26]){
      for (int i = 0; i < 26; i++)
      {
          if(arr1[i]!=arr2[i]){
              return 0;
          }
      }
      return 1;
}
bool permutation(string s1, string s2){
    int arr[26]={0};
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        int num = ch - 'a';
        arr[num]++;
    }
    int i =0;
    int arr2[26]={0};
    int windowSize = s1.length();
    while(i<windowSize && i<s2.length()){
        int num = s2[i]-'a';
        arr2[num]++;
        i++;
    }
    if(checkEqual(arr, arr2)){
        return 1;
    }
    while(i<s2.length()){
       char newChar = s2[i];
         int num = newChar-'a';
        arr2[num]++;
        char oldChar = s2[i-windowSize];
           num = oldChar-'a';
           arr2[num]--;
        i++;

            if(checkEqual(arr, arr2)){
        return 1;
    }
    }
    return 0;
}
int main(){                                                                                                                         
    string s1 = "naughty";
    string s2 = "yth";
    if(permutation(s2, s1)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
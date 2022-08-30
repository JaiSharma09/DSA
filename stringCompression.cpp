#include<iostream>
#include<vector>
using namespace std;
   void compress(vector<char>& chars) {
            int i =0;
    int ansIndex =0;
    int n=chars.size();
    while (i<n)
    {
        int j =i+1;
        while (j<n && chars[i]==chars[j])
        {
            j++;
        }
       int count = j-i;
       chars[ansIndex]=chars[i];
       cout<<chars[ansIndex];
       ansIndex++;
       
       if (count>1)
       {
        string cnt = to_string(count);
        for(char ch :cnt){
            chars[ansIndex]=ch;
            cout<<chars[ansIndex];
            ansIndex++;

        }
       }
       i=j;
    }
    }
int main(){
    vector<char> vec={ 'a', 'b', 'b', 'b', 'c', 'c'};
compress(vec);
    return 0;
}
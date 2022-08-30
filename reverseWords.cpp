 #include<iostream>
 #include<algorithm>
 using namespace std;
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i = 0,j = 0;
        while(j<s.size()+1)
        {
            if(s[j] == ' ' || j == s.size())
            {
                reverse(s.begin()+i,s.begin()+j);
                i = j+1;
            }
            j++;
        }
        i = 0;
        while(s[i] == ' ')
        {
                i++;
        }
        s.erase(s.begin(),s.begin()+i);
        
        i = s.size()-1;
        while(s[i] == ' ')
        {
            i--;
        }
        s.erase(s.begin()+i+1,s.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                int k = i+1;
                while(s[k] == ' ')
                {
                    k++;
                }
                s.erase(s.begin()+i+1,s.begin()+k);
            }
        }
        return s;
    }
 int main(){
    string s;
    getline(cin, s);
cout<<reverseWords(s);
    return 0;
 }
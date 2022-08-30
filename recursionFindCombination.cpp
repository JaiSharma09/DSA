#include<iostream>
using namespace std;
void findCombinations(string str, int index, string output){
    if(index == str.length()){
        cout<<output<<endl;
        return;
    }
    char ch = str[index];
    // without space
    output.push_back(ch);
    findCombinations(str, index+1, output);

    output.push_back(' ');
    if(str[index+1]!= '\0')
    // if we are at i+1 index and we print again the space will print after last
    // the number will be same as earlier
    findCombinations(str, index+1, output);
}
int main(){
    string str = "123";
    string output ="";
    int index =0;
    findCombinations(str, index, output);
    return 0;
}
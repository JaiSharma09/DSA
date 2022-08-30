#include <iostream>
#include <vector>
using namespace std;
void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{

    // base case
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
        // we are poping out the elements as for 2 and 3 when we print a for d e and f
        // we have to delete a and do the same for b and c
        // so we are poping them out
    }
}
vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
        return ans;
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}
int main()
{
    string name = "23";
    vector<string> answer = letterCombinations(name);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}







#include <iostream>
using namespace std;
void findSequence(int leftSum, int rightSum, char *output, int i, int j)
{
    if (i > j)
    {
        if (leftSum == rightSum)
        {
            cout << output<<endl;
        }
            return;
    }
        // put 0, 0
        output[i] = '0';
        output[j] = '0';
        findSequence(leftSum, rightSum, output, i + 1, j - 1);
        // put 0, 1
        output[i] = '0';
        output[j] = '1';
        findSequence(leftSum, rightSum+1, output, i + 1, j - 1);
        // put 1, 0
        output[i] = '1';
        output[j] = '0';
        findSequence(leftSum+1, rightSum, output, i + 1, j - 1);
        // put 1, 1
        output[i] = '1';
        output[j] = '1';
        findSequence(leftSum+1, rightSum+1, output, i + 1, j - 1);
}
int main()
{
    int n;
    cin >> n;
    char *arr = new char[2 * n];
    findSequence(0, 0, arr, 0, 2*n-1);
    return 0;
}
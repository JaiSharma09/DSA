#include <iostream>
using namespace std;
int minimumSwapToK(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] <= k)
            count++;
    }
    int bad = 0;
    for (int i = 0; i < count; i++){
        if (arr[i] > k)
            bad++;
    }
    int ans = bad;
    for (int i = 0, j = count; j < n; i++, j++)
    {
    
        if (arr[i] > k)
            bad--;
        if (arr[j] > k)
            bad++;
        ans = min(ans, bad);
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 5, 6, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int result = minimumSwapToK(arr, n, k);
    cout <<result;
    return 0;
}

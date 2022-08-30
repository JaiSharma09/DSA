#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int target)
{
     int start = 0;
     int end = n - 1;
     int ans = -1;
     while (start <= end)
     {
          int mid = start + (end - start) / 2;
          int midElement = arr[mid];
          if (midElement == target)
          {
               ans = mid;
               end = mid - 1;
          }
          else if (target < midElement)
          {
               end = mid - 1;
          }
          else
          {
               start = mid + 1;
          }
     }
     return ans;
}
int lastocc(int arr[], int n, int target)
{
     int start = 0;
     int end = n - 1;
     int ans = -1;
     while (start <= end)
     {
          int mid = start + (end - start) / 2;
          int midElement = arr[mid];
          if (midElement == target)
          {
               ans = mid;
               start = mid + 1;
          }
         else if (target < midElement)
          {
               end = mid - 1;
          }
          else
          {
               start = mid + 1;
          }
     }
     return ans;
}
int main()
{
     int arr[] = {2, 4, 4, 4, 6, 7, 8};
     int n = 7;
     int target = 4;
     cout << "First occurrence is : ";
     cout << firstocc(arr, n, target);
     cout << endl;
     cout << "Last occurrence is : ";
     cout << lastocc(arr, n, target);
     cout << endl;
     int a = firstocc(arr, n, target);
     int b = lastocc(arr, n, target);
     cout << "Number of occurence are : ";
     cout << (b - a) + 1;
     return 0;
}
#include<iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int x = arr[n - 1];
    for (int i = n - 1; i > 0; i--){
    arr[i] = arr[i - 1];
    }
    arr[0] = x;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    cout << "Enter the array elements"<<endl;
    for (int i = 0; i < n; i++)
        cin>> arr[i];
 
    rotate(arr, n);
 
    cout << "\nRotated array is\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
 
    return 0;
}
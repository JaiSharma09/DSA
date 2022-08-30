#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool swapped = false;
    int arr[n];
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  
for(int i =1; i<n; i++){
    int j;
    int temp =arr[i];
    for( j =i-1; j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1]= temp;
}
  
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
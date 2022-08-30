
#include <bits/stdc++.h>
using namespace std;
 
void findCommon(int ar1[], int ar2[], int ar3[], int n1,
                int n2, int n3)
{
    int i = 0, j = 0, k = 0;
 

    while (i < n1 && j < n2 && k < n3) {
    
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            cout << ar1[i] << " ";
            i++;
            j++;
            k++;
        }
 

        else if (ar1[i] < ar2[j])
            i++;
 
        else if (ar2[j] < ar3[k])
            j++;
 
        else
            k++;
    }
}
 

int main()
{
   int n1, n2, n3;
   cin>>n1;
   int arr1[n1];
   cout<<"Enter the elements of array1"<<endl;
 for (int i = 0; i < n1; i++)
 {
     cin>>arr1[i];
 }
 cin>>n2;
    int arr2[n2];
   cout<<"Enter the elements of array2"<<endl;
 for (int i = 0; i < n2; i++)
 {
     cin>>arr2[i];
 }
    cin>>n3;
    int arr3[n3];
   cout<<"Enter the elements of array3"<<endl;
 for (int i = 0; i < n1; i++)
 {
     cin>>arr3[i];
 }
    cout << "Common Elements are ";
    findCommon(arr1, arr2, arr3, n1, n2, n3);
    return 0;
}
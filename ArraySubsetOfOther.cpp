#include<iostream>
#include<unordered_map>
using namespace std;
bool subset(int arr1[], int arr2[], int n, int m){
    unordered_map<int , int>m1;
    for (int i = 0; i < n; i++)
    {
        m1[arr1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        m1[arr2[i]]--;
        if (m1[arr2[i]]<0)
        {
            return false;
        }   
    }
    return true;
}
int main(){
    int arr1[]={1, 2, 3, 4, 5, 8};
    int n = 6;
    int arr2[]={3, 4, 8};
    int m =3;
   if( subset(arr1, arr2, n, m)){
    cout<<"Exsist";
   }
   else 
   cout<<"No";
    return 0;
}
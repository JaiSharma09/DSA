#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target) {
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == target)
            return mid;
        if(arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e-s)/2;    
    }
    return -1;
}

int findPosition(int arr[], int target) {
    int s = 0, e = 1;
    int val = arr[0];

    while(val < target) {
        s = e;
        e = 2*e;
        val = arr[e];
    }

    return binarySearch(arr, s, e, target);
}

int main() {
   
    
    int arr[] = {2,4,6,8,9,11,23};
    // int n = 7;
    int target = 23;


    cout << findPosition(arr, target) << endl;
    return 0;
}
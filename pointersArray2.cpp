#include <iostream>
using namespace std;

int main()
{
    char ch[5] = "abcd";
    char *p = ch;
    cout << *p << endl;
    cout << p << endl;
    // pointer will print whole array in case of characters

    int arr[] = {1, 2, 3, 4};
    int *p1 = arr;
    cout << *p1 << endl;
    cout << p1 << endl;
    // this will print adress of the array

    char charc = 'a';
    char *ptr = &charc;
    cout << ptr << endl;
    // it will print the characters till null character as it has only 1 characeter a so it will print random values after 
    return 0;
}
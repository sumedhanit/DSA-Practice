#include <bits/stdc++.h>
using namespace std;
int linear(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "elemnt found at:" << i + 1;
            return 0;
        }
        // else{
        //     cout<<"elemnt not fount";
        //     return 0;
        // }
    }
    cout << "elemnt not fount";
}
int main()
{
    int A[20], n, key, i;
    cout << "enter number you want to print :";
    cin >> n;
    cout << "enter array elementy" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "enter search number:";
    cin >> key;
    linear(A, n, key);
    return 0;
}
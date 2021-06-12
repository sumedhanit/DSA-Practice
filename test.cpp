#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key, flag = 0;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            cout << "Element Found at : " << endl;
        }
    }
    if (flag)
    {
        cout << "element not found" << endl;
    }

    return 0;
}

// git add . or filename
// git commit -m "name"
// git push -u origin main
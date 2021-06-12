#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[20], i, key, n, mid;
    cout << "enter how many number do you want to print:" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter number do you want to search:" << endl;
    cin >> key;

    for (i = 0; i < n; i++)
    {
        int l = 0;
        int h = n;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (a[mid] == key)
            {
                cout << "element fount at:" << mid;
                return 0;
            }

            else if (a[mid] > key)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return 0;
}
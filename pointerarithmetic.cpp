#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int *p = a;

    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout << *p << endl;
    p = p + 2;
    cout << *p << endl;
    p = p - 2;
    cout << *p << endl;
    
    return 0;
}
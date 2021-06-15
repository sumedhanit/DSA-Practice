#include <bits/stdc++.h>
using namespace std;
void add(void);
int main()
{
    //TNRS
    int a, b, c;
    cout << "enter two number:" << endl;
    cin >> a >> b;
    c = add(a, b);
    cout << "sum is:" << c;

    return 0;
}
// void add()
// {
//  int a, b, c;
//     cout<< "enter two number:" << endl;
//     cin >> a >> b;
//     c = a + b;
//     cout << "sum is:" << c;
// }
// void add(int a, int b)
// {
//     int c;
//     c = a + b;
//     cout << "sum is:" << c;
}
// int add()
// { //tsrn
//     int a, b, c;
//     cout << "enter two number:" << endl;
//     cin >> a >> b;
//     c = a + b;
//     return c;
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
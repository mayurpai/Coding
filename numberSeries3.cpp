#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, i;
    cin >> n;
    int a[n];
    a[0] = 3;
    a[1] = 8;
    for (i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[i] = a[i - 2] + 3;
        }
        else
            a[i] = a[i - 2] + 3;
    }
    if (n % 2 == 0)
        cout << a[n - 1] << "";
    else
        cout << a[n - 1] << "";
    return 0;
}
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
    if (n == 1 || n == 2)
    {
        cout << 0;
        exit(0);
    }
    int a[n];
    a[0] = 0;
    a[1] = 0;
    for (i = 2; i < n; i++)
    {
        if (i % 2 == 0)
            a[i] = i / 2 + 7;
        else
            a[i] = a[i - 2] + 6;
    }
    cout << a[n - 1];
    return 0;
}

// 0,0,7,6,14,12,21,18
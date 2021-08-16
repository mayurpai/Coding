#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int i, n, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = n; j > n - i; j--)
            cout << " ";
        for (j = n - i; j >= 1; j--)
            cout << j;
        int k = 2;
        for (j = 0; j < n - i - 1; j++)
            cout << k++;
        cout << endl;
    }
    return 0;
}
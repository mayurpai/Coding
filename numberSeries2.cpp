#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << 6 * (n / 2 - 1);
    else
        cout << 7 * (n / 2);
    return 0;
}
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
    cout << (n % 2 == 0 ? 6 * (n / 2 - 1) : 7 * (n / 2));
    return 0;
}
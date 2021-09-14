// Number Appearing Once

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, min, max, num, ans = 0;
    cin >> n >> min >> max;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        ans ^= num;
    }
    cout << ans;
    return 0;
}
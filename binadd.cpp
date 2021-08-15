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
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int maxLen = 0, ps1 = 0, ps2 = 0, temp[2 * n + 1];
    memset(temp, -1, sizeof(temp));
    for (int i = 0; i < n; i++)
    {
        ps1 += a[i];
        ps2 += b[i];
        int curr_diff = ps1 - ps2;
        int diff = n + curr_diff;
        if (curr_diff == 0)
            maxLen = i + 1;
        else if (temp[diff] == -1)
            temp[diff] = i;
        else
        {
            int len = i - temp[diff];
            if (len > maxLen)
                maxLen = len;
        }
    }
    cout << maxLen << endl;
    return 0;
}
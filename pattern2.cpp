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
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count + (float(j) / 10) << " ";
            count += 1;
        }
        cout << endl;
    }
    return 0;
}

// 1.1
// 2.1 3.2
// 4.1 5.2 6.3
// 7.1 8.2 9.3 10.4
// 11.1 12.2 13.3 14.4 15.5

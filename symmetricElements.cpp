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
    int a[n][2];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if ((a[i][0] == a[j][1]) && (a[i][1] == a[j][0]))
                cout << "{" << a[j][0] << "," << a[i][0] << "}" << endl;
        }
    }
    return 0;
}
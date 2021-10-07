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
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            (j % 2 == 0) ? cout << "  " : cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            (j % 2 == 0) ? cout << "  " : cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            (j % 2 == 0) ? cout << "  " : cout << j << " ";
        }
        for (int j = n - i - 1; j >= 1; j--)
        {
            (j % 2 == 0) ? cout << "  " : cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

//         1
//       1   1
//     1   3   1
//   1   3   3   1
// 1   3   5   3   1
//   1   3   3   1
//     1   3   1
//       1   1
//         1
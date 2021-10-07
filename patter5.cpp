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
        for (int j = i; j >= i; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

//         1
//       2 1
//     3 1 2
//   4 1 2 3
// 5 1 2 3 4

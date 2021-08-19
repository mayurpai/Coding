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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i, j, k, count = 0;
    if (n == 0)
        return -1;
    else if (n > 0 && n < 3)
        return 0;
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] > arr[j] && arr[j] > arr[k])
                    {
                        count++;
                    }
                }
            }
        }
    }
    if (count == 0)
        return 0;
    else
        cout << count;
}
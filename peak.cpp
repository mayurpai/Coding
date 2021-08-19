#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] > arr[i + 1])
                sum += arr[i];
        }
        else if ((arr[i - 1] < arr[i]) && (arr[i] > arr[i + 1]))
            sum += arr[i];
    }
    cout << sum;

    return 0;
}
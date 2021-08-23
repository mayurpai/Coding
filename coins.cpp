#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    int a[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        temp ^= a[i];
    }
    cout << temp % 10;
    return 0;
}
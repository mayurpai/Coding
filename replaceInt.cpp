#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        (a[i] == 48 - '0') ? cout << "1 " : cout << a[i] << " ";
    }
    return 0;
}
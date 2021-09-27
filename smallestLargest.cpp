#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, small = INT_MAX, large = INT_MIN;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < small)
            small = a[i];
        if (a[i] > large)
            large = a[i];
    }
    cout << small << endl;
    cout << large << endl;
    return 0;
}
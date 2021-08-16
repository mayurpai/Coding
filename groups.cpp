#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, temp;
    cin >> n;
    if (n >= 100 && n <= 200)
    {
        if (n % 2 == 0)
        {
            n = n / 4;
            for (int i = 1; i <= 4; i++)
                cout << n << endl;
        }
        else
        {
            temp = n;
            temp = temp / 4;
            n = n % 4;
            for (int i = 1; i <= 3; i++)
                cout << temp << endl;
            cout << (temp + n) << endl;
        }
    }
    else
        cout << "INVALID INPUT";

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {6, 1, 3, 3, 3, 3};
    int t = 0, count = 1;
    int n = sizeof(a) / sizeof(int);
    int m, k;
    cin >> m >> k;
    for (int i = 0; i < (n - m - 1); i++)
    {
        if (a[i] == a[i + m])
        {
            t++;
            if (t == m)
            {
                t = 0;
                count++;
                if (count == k)
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
        else
        {
            t = 0;
            count = 1;
        }
    }
    cout << "NO";
    return 0;
}
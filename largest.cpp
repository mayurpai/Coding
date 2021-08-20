#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[] = {5, 4, 7, 23, 8, 1};
    int i, j, k, count = 0;
    int n = sizeof(a) / sizeof(a[0]);
    if (n == 0)
        return -1;
    else if (n > 0 && n < 3)
        return 0;
    else
    {
        for (int i = 0, j = i + 1; i < n - 2, j < n - 1; i++, j++)
            for (int k = j + 1; k < n; k++)
                if (a[i] > a[j] && a[j] > a[k])
                    count++;
    }
    cout << count;
}
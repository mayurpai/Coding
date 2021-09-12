#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    char str[7][4] = {"mon", "tue", "wed", "thu", "fri", "sat", "sun"};
    char inp[3];
    cin >> inp;
    int i = 0;
    cin >> n;
    for (i = 0; i < 7; i++)
        if (strcmp(str[i], str[6]) == 0)
            break;
    int res = 1;
    int rem = 6 - i;
    n = n - rem;
    if (n > 0)
        res += n / 7;
    cout << res;
    return 0;
}
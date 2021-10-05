#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 2; i <= n + 1; i++)
        if (checkPrime(i) && i * 2 > n + 1)
            ans++;
    if (n <= 2)
        ans--;
    cout << ans << endl;
    return 0;
}

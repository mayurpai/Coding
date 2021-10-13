#include <bits/stdc++.h>

using namespace std;

int divCalculator(int n)
{
    int result = 0;
    if (n == 1)
        return result;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == (n / i))
                result += i;
            else
                result += (i + n / i);
        }
    }
    return (result + 1 + n);
}

int main()
{
    int n = 6;
    cout << divCalculator(n);
    return 0;
}

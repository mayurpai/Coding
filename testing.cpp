#include <bits/stdc++.h>

using namespace std;

int checker(int n)
{
    int count = 0, i = 0, evenSum = 0, oddSum = 0, d;
    while (n > 0)
    {
        d = n % 10;
        n = n / 10;
        (i++ % 2 == 0) ? evenSum += d : oddSum += d;
    }
    if (evenSum > oddSum)
        return evenSum;
    else
        return oddSum;
}

int main()
{
    int returnValue, n = 123456;
    returnValue = checker(n);
    cout << returnValue;
    return 0;
}

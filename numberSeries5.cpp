#include <bits/stdc++.h>
using namespace std;

int main()
{
    int prime(int n);
    int fib(int n);
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << n;
        exit(0);
    }
    (n % 2 == 0) ? cout << prime(n >> 1) : cout << fib((n >> 1) + 2);
    return 0;
}

int prime(int n)
{
    int flag = 0, count = 0;
    for (int i = 1; i <= 100; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                flag = 0;
            else
                flag = 1;
        }
        if (flag == 1)
            count++;
        if (count == n)
            return i;
    }
}

int fib(int n)
{
    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

// 1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17…..
// 1  2  3  4  5  6  7  8  9  10  11  12  13  14
#include <bits/stdc++.h>

using namespace std;

void patternOne(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// *
// * *
// * * *
// * * * *
// * * * * *

void patternTwo(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        k += 2;
        cout << endl;
    }
}
// *
// * * *
// * * * * *
// * * * * * * *
// * * * * * * * * *

void patternThree(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

void patternFour(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

void patternFive(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        k += 2;
        cout << endl;
    }
}
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

void patternSix(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

void patternSeven(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

void patternEight(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

void patternNine(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1 << " ";
        }
        cout << endl;
    }
}
//         1
//       2 3
//     3 4 5
//   4 5 6 7
// 5 6 7 8 9

void patternTen(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1 << " ";
        }
        for (int j = i; j >= 2; j--)
        {
            cout << i + j - 2 << " ";
        }
        cout << endl;
    }
}
//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

void patternEleven(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

void patternTwelve(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << char(j + 64) << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << char(j + 64) << " ";
        }
        cout << endl;
    }
}
//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A

void patternThirteen(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        k += 2;
        cout << endl;
    }
    k -= 4;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "  ";
        }
        for (int j = k; j >= 1; j--)
        {
            cout << "* ";
        }
        k -= 2;
        cout << endl;
    }
}
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

void patternFourteen(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << j << " ";
        }
        k += 2;
        cout << endl;
    }
    k -= 4;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "  ";
        }
        for (int j = k; j >= 1; j--)
        {
            cout << j << " ";
        }
        k -= 2;
        cout << endl;
    }
}
//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9
//   7 6 5 4 3 2 1
//     5 4 3 2 1
//       3 2 1
//         1

void patternFifteen(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << i << " ";
        }
        k += 2;
        cout << endl;
    }
    k -= 4;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = k; j >= 1; j--)
        {
            cout << i << " ";
        }
        k -= 2;
        cout << endl;
    }
}
//         1
//       2 2 2
//     3 3 3 3 3
//   4 4 4 4 4 4 4
// 5 5 5 5 5 5 5 5 5
//   4 4 4 4 4 4 4
//     3 3 3 3 3
//       2 2 2
//         1

void patternSixteen(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
}
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int factorial(int n)
{
    int result = 1;
    for (int c = 1; c <= n; c++)
        result = result * c;
    return result;
}

void patternSeventeen(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        }
        cout << endl;
    }
}
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

void patternEighteen(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

void patternNineteen(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
//   1 2 3 4 3 2 1
//     1 2 3 2 1
//       1 2 1
//         1

void patternTwenty(int n)
{
    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            (j == mid) ? cout << "  " : cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            (j == mid) ? cout << "  " : cout << j << " ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            (j == mid) ? cout << "  " : cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            (j == mid) ? cout << "  " : cout << j << " ";
        }
        cout << endl;
    }
}
//         1
//       1 2 1
//     1 2   2 1
//   1 2   4   2 1
// 1 2   4 5 4   2 1
//   1 2   4   2 1
//     1 2   2 1
//       1 2 1
//         1

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    patternOne(n);
    cout << endl;
    patternTwo(n);
    cout << endl;
    patternThree(n);
    cout << endl;
    patternFour(n);
    cout << endl;
    patternFive(n);
    cout << endl;
    patternSix(n);
    cout << endl;
    patternSeven(n);
    cout << endl;
    patternEight(n);
    cout << endl;
    patternNine(n);
    cout << endl;
    patternTen(n);
    cout << endl;
    patternEleven(n);
    cout << endl;
    patternTwelve(n);
    cout << endl;
    patternThirteen(n);
    cout << endl;
    patternFourteen(n);
    cout << endl;
    patternFifteen(n);
    cout << endl;
    patternSixteen(n);
    cout << endl;
    patternSeventeen(n);
    cout << endl;
    patternEighteen(n);
    cout << endl;
    patternNineteen(n);
    cout << endl;
    patternTwenty(n);
    cout << endl;
    return 0;
}
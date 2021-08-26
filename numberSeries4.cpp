#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    (n % 2 == 0) ? cout << pow(3, n / 2) : cout << pow(2, n / 2);
    return 0;
}
// 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 …
// 1  2  3  4  5  6  7  8   9   10  11  12   13   14   15   16
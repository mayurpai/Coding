#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, y = 0, distance = 10;
    cin >> n;
    char c = 'R';
    while (n)
    {
        switch (c)
        {
        case 'R':
            x = x + distance;
            distance = distance + 10;
            c = 'U';
            break;
        case 'U':
            y = y + distance;
            distance = distance + 10;
            c = 'L';
            break;
        case 'L':
            x = x - distance;
            distance = distance + 10;
            c = 'D';
            break;
        case 'D':
            y = y - distance;
            distance = distance + 10;
            c = 'A';
            break;
        case 'A':
            x = x + distance;
            distance = distance + 10;
            c = 'R';
            break;
        }
        n--;
    }
    cout << x << " " << y;
    return 0;
}
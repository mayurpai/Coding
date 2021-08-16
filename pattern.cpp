#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, i, j, space, temp;
    cin >> rows;
    for (i = rows; i >= 1; --i)
    {
        temp = i;
        for (space = 0; space < rows - i; ++space)
            cout << " ";
        for (j = i; j <= 2 * i - 1; ++j)
        {
            cout << temp;
            temp--;
        }
        for (j = 2; j <= i; ++j)
            cout << j;
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char c;
    cin >> n;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ((i + j) % 2 == 0) ? cout << c << " " : cout << "B ";
        }
        cout << endl;
    }
    return 0;
}
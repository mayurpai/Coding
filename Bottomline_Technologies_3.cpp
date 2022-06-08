#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> apples;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        apples.push_back(input);
    }
    int sum = 0;
    vector<int>::iterator it = apples.end() - 1;
    for (int i = 0; i != apples.size(); i++)
    {
        sum += apples[i];
        if (sum == *it)
        {
            cout << (i + 1);
        }
    }

    return 0;
}
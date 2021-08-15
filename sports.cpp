#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i = 0, nameCount = 1;
    cin >> n;
    float height[n + n];
    string name[n + n];
    cin >> name[0];
    // while (strcmp(name[i].c_str(), "q") != 0 && strcmp(name[i].c_str(), "Q") != 0)
    for (int i = 1; i < n + n; i++)
    {
        cin >> name[i];
        nameCount++;
    }
    for (int i = 0; i < nameCount; i++)
        cin >> height[i];
    for (int i = 0; i < nameCount; i++)
    {
        for (int j = 0; j < nameCount - i - 1; j++)
        {
            if (height[j] < height[j + 1])
            {
                swap(height[j], height[j + 1]);
                swap(name[j], name[j + 1]);
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << name[i] << endl;
    return 0;
}
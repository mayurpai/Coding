#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    map<string, int> freq;
    int n;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        if (freq[str] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << str << freq[str] << endl;
        }
        freq[str]++;
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    getline(cin, str);
    int n;
    int charArr[123] = {0};
    // for (n = 0; n < str.length(); n++)
    //     ;
    n = strlen(str.c_str());

    for (int i = 0; i < n; i++)
        charArr[str[i]]++;

    for (int i = 0; i < 123; i++)
    {
        if (charArr[i] != 0 && i != ' ')
        {
            cout << (char)i << " " << charArr[i] << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int valid = 0, invalid = 0, i = 0;
    string mobileNums[5];
    const regex pattern("[0-9]{10}");
    cin >> mobileNums[0];
    // while (strcmp(mobileNums[i].c_str(), "q") != 0 && strcmp(mobileNums[i].c_str(), "Q") != 0)
    for (int i = 1; i < 5; i++)
    {
        cin >> mobileNums[i];
        if (regex_match(mobileNums[i], pattern))
            continue;
        else
            invalid++;
    }
    if (i < 5)
        cout << invalid;
    else
        cout << "INPUT LIMIT IS 5";
    return 0;
}
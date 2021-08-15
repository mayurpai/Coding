#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int valid = 0;
    int invalid = 0;
    int i = 0;
    int count = 0;
    string mobileNums[5];
    const regex pattern("[0-9]{10}");
    while (strcmp(mobileNums[i].c_str(), "q") != 0)
    {
        count++;
        cin >> mobileNums[i];
        if (regex_match(mobileNums[i], pattern))
            continue;
        else
            invalid++;
    }
    if (--count <= 5)
        cout << --invalid;
    else
        cout << "INPUT LIMIT IS 5";
    return 0;
}
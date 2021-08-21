#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, flag = 1;
    cin >> n;
    if (n >= 100 && n <= 200)
    {
        if (n % 2 == 0)
        {
            flag = 0;
            n = n / 4;
        }
        else
        {
            temp = n;
            temp = temp / 4;
            n = n % 4;
        }
        for (int i = 1; i <= 3; i++)
            cout << temp << endl;
        if (flag)
            cout << temp + n;
        else
            cout << n;
    }
    else
        cout << "INVALID INPUT";

    return 0;
}
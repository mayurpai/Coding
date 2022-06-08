#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int evenCount = 0;
    int oddCount = 0;
    cin >> N;
    int j;
    if (N % 2 == 0)
    {
        evenCount = 1;
    }
    else
    {
        oddCount = 1;
    }
    for (j = 1; j <= (N / 2); j++)
    {
        if (N % j == 0)
        {
            if (j % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }
    }
    if (evenCount == oddCount)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    // OR
    // if ((n - 4) % 2 == 0)
    //     cout << "True";
    // else
    //     cout << "False";
    return 0;
}
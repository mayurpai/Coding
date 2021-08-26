#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, N = 10;
    cin >> n;
    if (n == 0 || n > 10)
    {
        cout << "INVALID INPUT" << endl;
        cout << "NUMBER OF CANDIES LEFT : 10";
        return 0;
    }
    cout << "NUMBER OF CANDIES SOLD : " << n << endl;
    cout << "NUMBER OF CANDIES AVAILABLE : " << N - n << endl;
    return 0;
}
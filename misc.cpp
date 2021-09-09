#include <bits/stdc++.h>
#include <cmath>

using namespace std;
int main()
{
    int x;
    float y;
    cin >> x;
    cin >> y;
    (isnan(x) || isnan(y)) ? cout << "Error" : cout << (float)x + y;
    return 0;
}
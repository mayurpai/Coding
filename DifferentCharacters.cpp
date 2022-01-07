#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int N, count = 0;
    cin >> N;
    char S[N];
    for (int i = 0; i < N; i++)
        cin >> S[i];
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            (S[i] != S[j]) ? count++ : 0;
    cout << count;
    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

int findMinCoins(int S[], int n, int N)
{
    int T[N + 1];
    T[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        T[i] = INT_MAX;
        int result = INT_MAX;
        for (int c = 0; c < n; c++)
        {
            if (i - S[c] >= 0)
                result = T[i - S[c]];
            if (result != INT_MAX)
                T[i] = min(T[i], result + 1);
        }
    }
    return T[N];
}

int main()
{
    int S[] = {59049, 46656, 7776, 6561, 1296, 729, 216, 81, 36, 9, 6, 1};
    int n = sizeof(S) / sizeof(S[0]);
    int N;
    cin >> N;
    int coins = findMinCoins(S, n, N);
    if (coins != INT_MAX)
        cout << coins;
    return 0;
}
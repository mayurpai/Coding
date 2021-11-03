#include <bits/stdc++.h>
using namespace std;

int countPairs(int X[], int Y[], int M, int N)
{
    int count = 0;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (pow(X[i], Y[j]) > pow(Y[j], X[i]))
            {
                cout << X[i] << "^" << Y[j] << " > " << Y[j] << "^" << X[i] << endl;
                count++;
            }
    return count;
}
int main()
{
    // int X[] = {2, 1, 6};
    // int Y[] = {1, 5};
    int X[] = {2, 3, 4, 5};
    int Y[] = {1, 2, 3};
    int M = sizeof(X) / sizeof(int);
    int N = sizeof(Y) / sizeof(int);
    cout << countPairs(X, Y, M, N);
    return 0;
}
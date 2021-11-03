#include <bits/stdc++.h>
using namespace std;

int inversionCount(int arr[], int N)
{
    int count = 0;
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++)
            if (arr[i] > arr[j])
            {
                cout << arr[i] << " > " << arr[j] << endl;
                count++;
            }
    return count;
}
int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    // int arr[] = {2, 3, 4, 5, 6};
    // int arr[] = {10, 10, 10};
    int N = sizeof(arr) / sizeof(int);
    cout << inversionCount(arr, N);
    return 0;
}
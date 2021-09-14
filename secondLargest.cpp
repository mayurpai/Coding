// Second Largest

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int secondLargest = -9998;
    int firstLargest = -9999;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > firstLargest)
            firstLargest = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] != firstLargest)
            secondLargest = arr[i];
    }
    cout << secondLargest;
    return 0;
}
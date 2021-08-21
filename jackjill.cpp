#include <bits/stdc++.h>
using namespace std;

int equal(int temp[], int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
        temp[i] == arr[i] ? flag = 1 : flag = 0;
    return flag;
}
int main()
{
    int count = 0;
    int arr[] = {2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];
    memset(temp, 1 /, sizeof(arr));
    // while (!equal(temp, arr, n))
    // {
    for (int i = 0; i < n; i++)
    {
        // temp[i] = temp[i] + 1;
        // count++;
        cout << temp[i] << endl;
    }
    // }
    cout << count - 1;
    return 0;
}

/*INCOMPLETE CODE*/
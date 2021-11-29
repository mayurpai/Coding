#include <iostream>
#include <cstring>

using namespace std;

int check(int n, char *arr[])
{
    int tempCount = 1, count = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i][k] == arr[j][k])
            {
                tempCount++;
                if (tempCount == n)
                {
                    count++;
                    tempCount = 1;
                }
            }
            else
            {
                tempCount = 0;
            }
        }
        k++;
    }
    return count;
}

int main()
{
    int n = 4;
    char *arr[] = {"That", "This", "Those", "Thin"};
    // char *arr[] = {"Dhat", "Ahis", "Those", "Shin"};
    // char *arr[] = {"That", "This", "Those", "Space"};
    // char *arr[] = {"Thin", "Thin", "Thin", "Thin"};
    cout << check(n, arr);
    return 0;
}

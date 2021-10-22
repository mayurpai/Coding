#include <stdio.h>
int main()
{
    int A[] = {-3, -2, 1, 0, 8, 7, 1};
    // int A[] = {7,1,11,8,4,10};
    int N = sizeof(A) / sizeof(int);
    int M = 3;
    int count = 0;
    if (N == 1)
        return 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            if ((abs(A[i] - A[j])) % M == 0)
                count++;
        }
    }
    if (count == 0)
        printf("1");
    else
        printf("%d", count);
return 0;
}

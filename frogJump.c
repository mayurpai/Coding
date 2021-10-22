#include <stdio.h>
int main()
{
    int blocks[] = {1, 5, 5, 2, 6};
    // int blocks[] = {2, 6, 8, 5};
    // int blocks[] = {1,1};
    // int blocks[] = {3, 1, 5, 9, 2};
    int frogOne = 0, frogTwo = 0, j = -1;
    int n = sizeof(blocks) / sizeof(int);
    if (n == 1)
        return 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (blocks[i] <= blocks[i + 1])
            frogTwo += 1;
        if (j >= 0 && (blocks[j] >= blocks[j + 1]))
        {
            frogOne -= 1;
            j++;
        }
    }
    printf("%d", frogTwo - frogOne + 1);
    return 0;
}

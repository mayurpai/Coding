#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i;
    char a[100], b[100], c[100];

    gets(a);
    gets(b);
    gets(c);

    for (i = 0; a[i]; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            a[i] = '*';
    }

    for (i = 0; b[i]; i++)
    {
        if ((b[i] >= 'a' && b[i] <= 'z') || (b[i] >= 'A' && b[i] <= 'Z'))
            if (!(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' || b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U'))
                b[i] = '@';
    }

    for (i = 0; c[i]; i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
            c[i] -= 32;
    }

    cout << a << b << c;
    return 0;
}
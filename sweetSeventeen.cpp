#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[5];
    cin >> str;
    int sum = 0;
    int len = strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            sum += (str[i] - 48) * pow(17, len - 1);
        else if (str[i] >= 'A' && str[i] <= 'G')
            sum += (str[i] - 65 + 10) * pow(17, len - 1);
        else if (str[i] >= 'a' && str[i] <= 'g')
            sum += (str[i] - 97 + 10) * pow(17, len - 1);
        len--;
    }
    cout << sum;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    char first = str[0];
    int i = 1, counter = 0;
    while (i < str.size())
    {
        if (str[i] == '1' && first == '0')
        {
            while (str[i] == '1')
                i++;
            if (str[i] == '0')
                counter++;
        }
        first = str[i];
        i++;
    }
    cout << counter << endl;
    return 0;
}

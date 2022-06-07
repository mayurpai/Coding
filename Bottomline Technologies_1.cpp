#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    for (int i = 0; i < strlen(input.c_str()); i++)
    {
        if (i == 0 || i == 1 || i == 2 || i == 3)
        {
            if (!(input[i] >= 'A' && input[i] <= 'Z'))
            {
                cout << "False";
                return 0;
            }
        }
        else if ((i == 4) && input[i] != '0')
        {
            cout << "False";
            return 0;
        }
        else
        {
            if (!((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= '0' && input[i] <= '9')))
            {
                cout << "False";
                return 0;
            }
        }
    }
    cout << "True";
    // OR
    // regex expression("^[A-Z][4]0[A-Z0-9][6]$");

    // if (regex_match(input, expression))
    //     cout << "True";
    // else
    //     cout << "False";
    return 0;
}
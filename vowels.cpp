#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int j = 0, letterA = 0, letterE = 0, letterI = 0, letterO = 0, letterU = 0;
    string inputString;
    char *outputString;
    getline(cin, inputString);
    if (inputString.size() != 0)
    {
        for (int i = 0; i < inputString.length(); i++)
        {
            if (inputString[i] >= '0' && inputString[i] <= '9')
            {
                cout << "0";
                exit(0);
            }
            else if (inputString[i] == 'a' || inputString[i] == 'A')
                letterA++;
            else if (inputString[i] == 'e' || inputString[i] == 'E')
                letterE++;
            else if (inputString[i] == 'i' || inputString[i] == 'I')
                letterI++;
            else if (inputString[i] == 'o' || inputString[i] == 'O')
                letterO++;
            else if (inputString[i] == 'u' || inputString[i] == 'U')
                letterU++;
            else
                outputString[j++] = inputString[i];
        }
        for (int i = 0; i < j; i++)
        {
            cout << outputString[i];
        }
        cout << endl;
        cout << "a : " << letterA << endl;
        cout << "e : " << letterE << endl;
        cout << "i : " << letterI << endl;
        cout << "o : " << letterO << endl;
        cout << "u : " << letterU << endl;
    }
    else
        cout << "INVALID INPUT";
    return 0;
}
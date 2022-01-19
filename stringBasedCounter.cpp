#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string inputString;
    int count = 0;
    getline(cin, inputString);
    istringstream ss(inputString);
    string word;

    while (ss >> word)
    {
        for (int i = 0; i < strlen(word.c_str()); i++)
        {
            count++;
        }
        cout << count << "\n";
        count = 0;
    }
    return 0;
}
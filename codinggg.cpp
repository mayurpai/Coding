#include <bits/stdc++.h>

using namespace std;

int countPal(char *input1, int input2)
{
    int length, flag = 0, count = 0;
    istringstream ss(input1);
    string word;
    while (ss >> word)
    {
        length = strlen(word.c_str());
        for (int i = 0; i < length; i++)
        {
            if (word[i] != word[length - i - 1])
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }
        if (!flag)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char inputString[50];
    cin.getline(inputString, 50);
    cout << countPal(inputString, strlen(inputString));
    return 0;
}
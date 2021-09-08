#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str[16] = {"break", "case", "continue", "default", "defer", "else", "for",
                      "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};

    int flag = 0;
    string ip;
    cin >> ip;
    for (int i = 0; i < 16; i++)
    {
        if (strcmp(ip.c_str(), str[i].c_str()) == 0)
        {
            flag = 1;
            break;
        }
    }
    (flag) ? (cout << ip << " Is A Keyword") : (cout << ip << " Isn't A Keyword");
    return 0;
}

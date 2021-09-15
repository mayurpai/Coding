#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int startPos = input.find("A");
    int finalPos = input.find("Z");
    string output = input.substr(startPos, finalPos + 1);
    cout << strlen(output.c_str());
    return 0;
}
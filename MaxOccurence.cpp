#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    unordered_map<string, int> counter;
    int count = 0;
    int maxCount = INT_MIN;
    string maxOcc;
    string inputString;
    getline(cin, inputString);
    istringstream ss(inputString);
    string word;
    while (ss >> word)
        counter[word]++;
    for (unordered_map<string, int>::iterator itr = counter.begin(); itr != counter.end(); itr++)
    {
        if (itr->second >= maxCount)
        {
            maxOcc = itr->first;
            maxCount = itr->second;
        }
    }
    cout << "The Length Of '" << maxOcc << "' = " << maxOcc.length() << endl;
    cout << "It Has Occurred: " << maxCount << " Times!";
    return 0;
}
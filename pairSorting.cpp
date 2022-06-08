#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<pair<int, string>> markSheet;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin >> marks;
        getline(cin, name);
        markSheet.push_back(make_pair(marks, name));
    }
    cout << "Asc Sorting" << endl;
    sort(markSheet.begin(), markSheet.end());
    for (vector<pair<int, string>>::iterator it = markSheet.begin(); it != markSheet.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    cout << "Dsc Sorting" << endl;
    sort(markSheet.begin(), markSheet.end());
    for (vector<pair<int, string>>::iterator it = markSheet.end() - 1; it != markSheet.begin() - 1; it--)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
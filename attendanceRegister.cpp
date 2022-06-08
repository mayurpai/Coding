#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<string> attendanceReg;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        string name;
        getline(cin, name);
        attendanceReg.push_back(name);
    }
    cout << "Asc Sorting";
    sort(attendanceReg.begin(), attendanceReg.end());
    for (vector<string>::iterator it = attendanceReg.begin(); it != attendanceReg.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
    cout << "Dsc Sorting" << endl;
    sort(attendanceReg.begin(), attendanceReg.end());
    for (vector<string>::iterator it = attendanceReg.end() - 1; it != attendanceReg.begin() - 1; it--)
    {
        cout << *it << endl;
    }

    return 0;
}
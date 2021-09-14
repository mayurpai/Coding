// Duplicate Elements

#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s1;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        s1.insert(num);
    }
    for (set<int>::iterator itr = s1.begin(); itr != s1.end(); itr++)
        cout << *itr << " ";
    return 0;
}
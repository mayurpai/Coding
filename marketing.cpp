#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string name;
    cin >> name;
    char x;
    cin >> x;
    if (x == 'N')
    {
        cout << "TOTAL MEMBERS : 1\n";
        cout << "COMISSION DETAILS\n";
        cout << name << " : 250 INR\n";
    }
    else
    {
        string child, temp = "";
        cin >> child;
        vector<string> v;
        for (int i = 0; i < child.size(); i++)
        {
            if (child[i] == ',')
            {
                v.push_back(temp);
                temp = "";
            }
            else if (child[i] != ' ')
            {
                temp += child[i];
            }
        }
        v.push_back(temp);
        cout << "TOTAL MEMBERS : " << v.size() + 1 << "\n";
        cout << "COMISSION DETAILS\n";
        cout << name << " : " << v.size() * 500 << " INR\n";
        for (auto i : v)
        {
            cout << i << " : "
                 << "250 INR\n";
        }
    }

    return 0;
}
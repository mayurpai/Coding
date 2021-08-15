#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string c[3] = {"Espresso Coffee", "Cappuccino Coffee", "Latte Coffee"};
    string t[8] = {"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon Tea", "Green Tea", "Organic Darjeeling Tea"};
    string s[4] = {"Hot and Sour Soup", "Veg Corn Soup", "Tomato Soup", "Spicy Tomato Soup"};
    string b[3] = {"Hot Chocolate Drink", "Badam Drink", "Badam-Pista Drink"};
    string str = "Welcome to CCD!\nEnjoy Your : ";
    char ch;
    int item, i;
    cin >> ch;
    cin >> item;
    if (ch == 'c')
    {
        for (i = 0; i < 3; i++)
        {
            if (item == i + 1)
            {
                cout << "Welcome to CCD!\nEnjoy Your " << c[i] << " !";
                break;
            }
        }
        if (i == 3)
            cout << "INVALID OPTION!" << endl;
    }
    else if (ch == 't')
    {
        for (i = 0; i < 8; i++)
        {
            if (item == i + 1)
            {
                cout << "Welcome to CCD!\nEnjoy Your " << t[i] << " !";
                break;
            }
        }
        if (i == 8)
            cout << "INVALID OPTION!" << endl;
    }
    else if (ch == 's')
    {
        for (i = 0; i < 4; i++)
        {
            if (item == i + 1)
            {
                cout << "Welcome to CCD!\nEnjoy Your " << s[i] << " !";
                break;
            }
        }
        if (i == 4)
            cout << "INVALID OPTION!" << endl;
    }
    else if (ch == 'b')
    {
        for (i = 0; i < 3; i++)
        {
            if (item == i + 1)
            {
                cout << "Welcome to CCD!\nEnjoy Your " << b[i] << " !";
                break;
            }
        }
        if (i == 3)
            cout << "INVALID OPTION!" << endl;
    }
    else
        cout << "INVALID OPTION!" << endl;
    return 0;
}
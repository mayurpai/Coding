#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[50], smallest = 'z', largest = 'A';
    cin.getline(str, 50);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && str[i] < smallest)
            smallest = str[i];
        if (str[i] != ' ' && str[i] > largest)
            largest = str[i];
    }
    cout << smallest << " " << largest << endl;
    cout << (int)smallest + (int)largest << endl;
    return 0;
}
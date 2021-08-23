// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, sum = 0;
//     cin >> n;
//     while (n != 0)
//     {
//         sum += n % 10;
//         n = n / 10;
//         sum -= n % 10;
//         n = n / 10;
//     }
//     !sum ? cout << "Yes" : cout << "No";

//     return 0;
// }

// FASTER WAY :

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    !(n % 11) ? cout << "Yes" : cout << "No";
    return 0;
}
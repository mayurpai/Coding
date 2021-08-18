#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    float path[8] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    string busStops[8] = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    string sourceBusStop, destinationBusStop;
    cin >> sourceBusStop;
    // cin.ignore();
    cin >> destinationBusStop;
    int source, destination;
    float result = 0;
    // sourceBusStop = toupper(sourceBusStop);
    // destinationBusStop = toupper(destinationBusStop);
    if (sourceBusStop == destinationBusStop)
    {
        cout << "INVALID INPUT";
        return 0;
    }
    for (int i = 0; i <= 7; i++)
    {
        if (busStops[i] == sourceBusStop)
            source = i;
        if (busStops[i] == destinationBusStop)
            destination = i;
    }
    int i = source + 1;
    while (i != destination + 1)
    {
        result += path[i];
        i = (i + 1) % 8;
    }
    cout << (ceil)(result * 0.005) << ".0 INR";
    return 0;
}
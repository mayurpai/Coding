#include <bits/stdc++.h>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    unordered_map<char, int> winner;
    int n, homeScore, awayScore, goalScored = 0;
    cin >> n;
    char homeTeam, awayTeam, specChar, winnerChar;
    for (int i = 1; i <= (n * (n - 1)) / 2; i++)
    {
        cin >> homeTeam >> awayTeam >> homeScore >> specChar >> awayScore;
        if (homeScore > awayScore)
            winner[homeTeam] += 3;
        else if (homeScore < awayScore)
            winner[awayTeam] += 3;
        else
        {
            winner[homeTeam]++;
            winner[awayTeam]++;
        }
    }
    unordered_map<char, int>::iterator itr;
    for (itr = winner.begin(); itr != winner.end(); itr++)
    {
        int temp = itr->second;
        if (temp > goalScored)
        {
            winnerChar = itr->first;
            goalScored = temp;
        }
    }
    cout << winnerChar << "\n"
         << goalScored;
}
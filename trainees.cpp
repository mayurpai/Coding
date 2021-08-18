#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int oxyLevels[12], traineeOne = 0, traineeTwo = 0, traineeThree = 0, fitTrainee = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> oxyLevels[i];
        if (oxyLevels[i] < 1 && oxyLevels[i] > 100)
            cout << "INVALID INPUT";
        else
        {
            if (i == 0 || i == 3 || i == 6)
                traineeOne += oxyLevels[i];
            if (i == 1 || i == 4 || i == 7)
                traineeTwo += oxyLevels[i];
            if (i == 2 || i == 5 || i == 8)
                traineeThree += oxyLevels[i];
        }
    }
    oxyLevels[9] = traineeOne / 3;
    oxyLevels[10] = traineeTwo / 3;
    oxyLevels[11] = traineeThree / 3;
    for (int i = 9; i <= 11; i++)
        if (oxyLevels[i] > fitTrainee)
            fitTrainee = oxyLevels[i];
    for (int i = 9; i <= 11; i++)
    {
        if (oxyLevels[i] == fitTrainee)
            cout << "Trainee Number : " << (i % 9) + 1 << endl;
        if (oxyLevels[i] < 70)
            cout << "Trainee Is Unfit";
    }
    return 0;
}
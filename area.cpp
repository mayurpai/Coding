#include <iostream>
using namespace std;

int main()
{
	float temp, cost = 0;
	int interiorWall = 18, exteriorWall = 12, numInt, numExt;
	cin >> numInt >> numExt;
	int v = numInt + numExt;
	for (int i = 1; i <= v; i++)
	{
		cin >> temp;
		if (numInt != 0)
		{
			cost += temp * interiorWall;
			numInt--;
		}
		else if (numExt != 0)
		{
			cost += temp * exteriorWall;
			numExt--;
		}
	}
	cout << "Total Estimated Cost : " << cost << " INR";
	return 0;
}

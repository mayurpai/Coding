#include <iostream>
using namespace std;

int main()
{
	int n, age, seniorCount = 0, notSeniorCount = 0;
	cin >> n;
	if (n >= 1 && n <= 10)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> age;
			if (age >= 10 && age <= 100)
			{
				if (age > 60 && seniorCount < 5)
					seniorCount++;
				else
					notSeniorCount++;
			}
			else
			{
				cout << "INVALID INPUT" << endl;
				return 0;
			}
		}
		cout << "QUEUE 1 TIME : " << notSeniorCount * 15 << endl;
		cout << "QUEUE 2 TIME : " << seniorCount * 15 << endl;
	}
	else
		cout << "INVALID INPUT" << endl;
	return 0;
}

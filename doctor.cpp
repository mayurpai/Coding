#include<iostream>
using namespace std;

int main() {
	int age, count = 0, cost = 0;
	do {
		cin >> age;
		if (age <= 0 || age >= 120) {
			cout << "INVALID INPUT" << endl;
			return 0;
		}
		if (age <= 17)
			cost += 200;
		else if (age > 17 && age < 40)
		    cost += 400;
		else if (age >= 40)
			cost += 300;
		count++;
	} while (cin.get() != '\n' && count < 20);
	cout << "Total Income : " << cost << " INR" << endl;
	return 0;
}

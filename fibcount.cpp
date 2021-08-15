#include<iostream>
using namespace std;

int main () {
	int a = 1, b = 1, c = 0, n, evenCount = 0, oddCount = 0;
	cin >> n;
	if (n>5 && n <= 20) {
		for (int i=0; i<n; i++) {
			cout << a << "\t";
			if (a % 2 == 0)
				evenCount++;
			else
				oddCount++;
			c = a + b;
			a = b;
			b = c;		
		}
		cout << endl;
		cout << "EVEN COUNT : " << evenCount << endl;
		cout << "ODD COUNT : " << oddCount << endl;
	}
	else
		cout << "INVALID INPUT" << endl;
	return 0;
} 

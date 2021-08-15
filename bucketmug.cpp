#include<iostream>
using namespace std;

int main() {
	int X, Y, C, temp;
	cin >> X >> Y;
	if (X > Y) {
		X = X * 0.8;
		C = X / Y;
		
		if (X % Y == 0) 
			cout << "BUCKET FULL!\n" << "NUMBER OF MUGS : " << C << endl;
		else 
			cout << "BUCKET FULL!\n" << "NUMBER OF MUGS : " << C+1 << endl;
	}
	else
		cout << "INVALID INPUT" << endl;
	return 0;
}

#include<iostream>
#include<cstring>
using namespace std;

int fact(int n) {
	if (n<=1) 
		return 1;
	return n*fact(n-1);
}
int main () {
	int numTeams, temp, matches, i = 0;
	cin >> numTeams;
	if (numTeams < 3 || numTeams > 12) { 
		cout << "INVALID INPUT" << endl;
		return 0;
	}
	temp = numTeams;
	string teamName[numTeams];
	// cin.get() != 'q' && cin.get() != 'Q'
	while (temp != 0) { 
		cin >> teamName[i];
		i++;
		temp--;
	} 
	matches = (fact(numTeams))/(fact(numTeams-2)*fact(2));
	cout << "TOTAL MATCHES : " << matches << endl;
	for (int i=0; i<numTeams; i++) {
		for (int j=i+1; j<numTeams; j++) {
			cout << teamName[i] << " VS " << teamName[j] << endl;
		}
	}
	return 0;
}

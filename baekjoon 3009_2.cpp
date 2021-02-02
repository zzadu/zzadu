#include <iostream>
using namespace std;

int main() {
	int x[1000] = { 0 }, y[1000] = { 0 }, xn[3], yn[3];

	for (int i = 0; i < 3; i++) {
		cin >> xn[i] >> yn[i];
		x[xn[i]]++;
		y[yn[i]]++;
	}

	int fourthX, fourthY;

	for (int i = 0; i < 3; i++) {
		if (x[xn[i]] == 1) fourthX = xn[i];
		if (y[yn[i]] == 1) fourthY = yn[i];
	}

	cout << fourthX << ' ' << fourthY << "\n";

	return 0;
}
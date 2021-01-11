#include <iostream>
#include <math.h>
using namespace std;

int pow(int x, int y) {
	int value = 1;
	for (int i = 0; i < y; i++) value *= x;

	return value;
}

int star(int nn, int n) {
	int row = n - ((nn - 1) / n);
	int col = n - ((nn - 1) % n);

	if (nn == 0) return 0;

	if (row % 3 == 2 && col % 3 == 2) cout << ' ';
	else if ((row - 1) / 3 % 3 == 1 && (col - 1) / 3 % 3 == 1) cout << ' ';
	else if ((row - 1) / pow(3, 2) % 3 == 1 && (col - 1) / pow(3, 2) % 3 == 1) cout << ' ';
	else if ((row - 1) / pow(3, 3) % 3 == 1 && (col - 1) / pow(3, 3) % 3 == 1) cout << ' ';
	else if ((row - 1) / pow(3, 4) % 3 == 1 && (col - 1) / pow(3, 4) % 3 == 1) cout << ' ';
	else if ((row - 1) / pow(3, 5) % 3 == 1 && (col - 1) / pow(3, 5) % 3 == 1) cout << ' ';
	else if ((row - 1) / pow(3, 6) % 3 == 1 && (col - 1) / pow(3, 6) % 3 == 1) cout << ' ';
	else if ((row - 1) / pow(3, 7) % 3 == 1 && (col - 1) / pow(3, 7) % 3 == 1) cout << ' ';
	else cout << '*';

	if (nn % n == 1) cout << '\n';

	return star(nn - 1, n);
}

int main() {

	int n;
	cin >> n;

	star(n * n, n);

	return 0;
}
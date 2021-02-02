#include <iostream>
using namespace std;

int main() {
	int square[3][2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) cin >> square[i][j];
	}

	int maxLen = 0, ind1 = 0, ind2 = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			int len = (square[i][0] - square[j][0]) * (square[i][0] - square[j][0]) + (square[i][1] - square[j][1]) * (square[i][1] - square[j][1]);
			if (len > maxLen) {
				maxLen = len;
				ind1 = i;
				ind2 = j;
			}
		}
	}

	int x = 0, y = 0;

	for (int i = 0; i < 3; i++) {
		if (i == ind1 || i == ind2) {
			x += square[i][0];
			y += square[i][1];
		}
		else {
			x -= square[i][0];
			y -= square[i][1];
		}
	}

	cout << x << ' ' << y << "\n";

	return 0;
}
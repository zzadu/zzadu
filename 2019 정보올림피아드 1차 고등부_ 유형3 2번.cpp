#include <iostream>
using namespace std;

int jump(int x, int y) {
	int jumpN = 1, max = 0;
	for (int i = x; i <= y; i++) {
		int j, start = i;
		for (j = 0; ; j++) {
			if (!start) break;
			if (start - jumpN < 0) jumpN = 1;
			start -= jumpN;
			jumpN *= 2;
		}
		if (max < j) max = j;
	}

	return max;
}

int main() {
	int x, y;
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		cout << jump(x, y) << "\n";
	}

	return 0;
}
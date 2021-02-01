#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min = 9999;

	for (int i = 0; i <= w; i++) {
		if (i == 0 || i == w) {
			for (int j = 0; j <= h; j++) {
				int len = sqrt((x - i) * (x - i) + (y - j) * (y - j));
				if (len < min) min = len;
			}
		}
	}

	for (int i = 0; i <= h; i++) {
		if (i == 0 || i == h) {
			for (int j = 0; j <= w; j++) {
				int len = sqrt((x - j) * (x - j) + (y - i) * (y - i));
				if (len < min) min = len;
			}
		}
	}
	cout << min << "\n";

	return 0;
}
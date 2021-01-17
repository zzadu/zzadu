#include <iostream>
using namespace std;

int hotel(int h, int n) {
	int weight = 1;

	if (n > h) {
		while (n > h) {
			n -= h;
			weight++;
		}
	}

	return n * 100 + weight;
}

int main() {
	int t;
	cin >> t;

	int h, w, n;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		cout << hotel(h, n) << "\n";
	}

	return 0;
}
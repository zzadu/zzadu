#include <iostream>
using namespace std;

int gcd(int h, int l) {
	if (h % l == 0) return l;
	else {
		return gcd(l, h % l);
	}
}

int main() {
	int t, a, b;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a * b / gcd(a, b) << "\n";
	}

	return 0;
}
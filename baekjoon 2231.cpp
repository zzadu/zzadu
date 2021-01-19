#include <iostream>
using namespace std;

int main() {
	int n, i;
	cin >> n;

	for (i = 1; i < n; i++) {
		int sum = i;
		for (int j = 1000000; j >= 10; j /= 10) {
			sum += (i % j) / (j / 10);
		}
		if (sum == n) break;
	}

	if (i == n) cout << 0 << "\n";
	else cout << i << "\n";

	return 0;
}
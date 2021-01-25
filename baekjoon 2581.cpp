#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int sum = 0, min = n;
	for (int i = m; i <= n; i++) {
		int div = 1;
		for (int j = 1; j < i; j++) if (i % j == 0) div = j;
		if (div == 1) {
			sum += i;
			if (min > i) min = i;
		}
	}

	if (sum == 0) cout << -1 << "\n";
	else cout << sum << "\n" << min << "\n";

	return 0;
}
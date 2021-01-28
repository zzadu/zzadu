#include <iostream>
using namespace std;

int arr[1000000] = { 0 };

int main() {
	int m, n;
	cin >> m >> n;

	for (int i = 2; i * i < n + 1; i++) {
		if (arr[i] == 0) {
			for (int j = i + 1; j < n + 1; j++) if (j % i == 0) arr[j]++;
		}
	}

	for (int i = m; i < n + 1; i++) if (arr[i] == 0 && i != 1) cout << i << "\n";

	return 0;
}
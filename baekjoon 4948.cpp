#include <iostream>
using namespace std;

int prime[246912] = { 0 };

int main() {
	int n;

	while (cin >> n) {
		if (!n) break;
		int m = n * 2, primeNum = 0;

		for (int i = 2; i * i < m + 1; i++) {
			if (prime[i] == 0) {
				for (int j = 2; i * j < m + 1; j++) prime[i * j]++;
			}
		}

		for (int i = n + 1; i < m + 1; i++) if (prime[i] == 0) primeNum++;

		cout << primeNum << "\n";
	}

	return 0;
}
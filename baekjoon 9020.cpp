#include <iostream>
using namespace std;

int isPrime(int p) {
	for (int i = 2; i < p; i++) {
		if (p % i == 0) return 0;
	}

	return 1;
}

int main() {
	int t;
	cin >> t;

	for (int j = 0; j < t; j++) {
		int n;
		cin >> n;

		int primeO = n / 2, primeT = n / 2;

		while (true) {
			int i = 0;
			i += isPrime(primeO) + isPrime(primeT);
			if (i == 2) break;
			primeO--;
			primeT++;
		}

		cout << primeO << ' ' << primeT << "\n";
	}

	return 0;
}
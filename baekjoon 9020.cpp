#include <iostream>
using namespace std;

int isPrime(int p) {
	int div = 1;
	for (int i = 2; i < p; i++) {
		if (p % i == 0) div = i;
	}

	if (div == 1) return 1;
	else return 0;
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
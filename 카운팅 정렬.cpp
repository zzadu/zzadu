#include <iostream>
using namespace std;

int a[10000000] = { 0 }, number[10000] = { 0 }, acc[10000] = { 0 }, b[10000000] = { 0 };

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		number[a[i]]++;
	}

	for (int i = 0; i < 10000; i++) {
		if (number[i]) {
			int sum = 0;
			for (int j = 0; j < i + 1; j++) {
				if (number[j]) sum += number[j];
			}
			acc[i] = sum;
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		int index = a[i];
		b[acc[index] - 1] = index;
		acc[index]--;
	}

	for (int i = 0; i < n; i++) cout << b[i] << "\n";


	return 0;
}
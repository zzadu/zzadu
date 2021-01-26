#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	
	for (int i = 2; i < n + 1; i++) {
		if (n % i == 0) {
			do {
				n /= i;
				cout << i << "\n";
			} while (n % i == 0);
		}
	}

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int n, num;
	cin >> n;

	int prime = 0;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num != 1) {
			int div = 1;
			for (int j = 1; j < num; j++) if (num % j == 0) div = j;
			if (div == 1) prime++;
		}
	}

	cout << prime << "\n";


	return 0;
}
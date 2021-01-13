#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int pack = 5000;
	for (int five = 0; five <= 1000; five++) {
		for (int three = 0; three <= 1666; three++) {
			if (5 * five + 3 * three == n) {
				if (five + three < pack) pack = five + three;
			}
		}
	}

	if (pack == 5000) cout << "-1" << "\n";
	else cout << pack << "\n";

	return 0;
}
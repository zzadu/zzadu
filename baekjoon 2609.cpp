#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	int a, b, d, m;
	cin >> a >> b;

	int l = (a > b ? b : a), h = (a > b ? a : b);

	for (int i = l; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			cout << i << "\n";
			break;
		}
	}

	for (int i = 1; ; i++) {
		if (l * i >= h) {
			if ((l * i) % h == 0) {
				cout << l * i << "\n";
				break;
			}
		}
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int a, b;

	while (cin >> a >> b) {
		if (!a) break;
		if (a % b == 0) cout << "multiple\n";
		else if (b % a == 0) cout << "factor\n";
		else cout << "neither\n";
	}

	return 0;
}
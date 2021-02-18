#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	else return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	int n, circle[100];
	cin >> n;

	for (int i = 0; i < n; i++) cin >> circle[i];
	
	for (int i = 1; i < n; i++) {
		int div = gcd(circle[0], circle[i]);
		cout << circle[0] / div << "/" << circle[i] / div << "\n";
	}

	return 0;
}
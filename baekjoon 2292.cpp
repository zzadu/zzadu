#include <iostream>
using namespace std;

int bee(int n) {
	if (n == 1) return 0;
	int sum = 2;
	for (int i = 1; ; i++) {
		if (n >= sum && n < sum + 6 * i) return i;
		sum += 6 * i;
	}
}

int main() {
	int n;
	cin >> n;

	int num = bee(n);
	
	cout << num + 1 << "\n";

	return 0;
}
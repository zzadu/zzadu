#include <iostream>
using namespace std;

int fraction(int& n, int& i) {

	while (n > 0) {
		if (n - i <= 0) break;
		n -= i;
		i++;
	}
	int sum = i + 1;

	return sum - n;
}

int main() {
	int n, i = 1;
	cin >> n;

	int f = fraction(n, i);

	if (i % 2 == 0) cout << n << '/' << f << "\n";
	else cout << f << '/' << n << "\n";


	return 0;
}
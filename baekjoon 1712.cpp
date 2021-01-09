#include <iostream>
using namespace std;

int main() {
	 long long a, b, c;

	cin >> a >> b >> c;
	
	int i = 0;
	if (b >= c) {
		cout << -1 << "\n";
	}
	else {
		i = a / (c - b) + 1;
		cout << i << "\n";
	}

	return 0;
}
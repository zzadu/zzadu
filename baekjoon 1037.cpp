#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int n, a[50];
	cin >> n;
	
	for (int i = 0; i < n; i++) cin >> a[i];

	int max = 1, low = 1000001;

	if (n == 2) cout << a[0] * a[1] << "\n";
	else {
		for (int i = 0; i < n; i++) {
			if (a[i] > max) max = a[i];
			if (a[i] < low) low = a[i];
		}
		cout << max * low << "\n";
	}

	return 0;
}
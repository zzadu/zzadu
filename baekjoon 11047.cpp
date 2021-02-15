#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k, arr[10];
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int coin = 0;

	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] <= k) {
			k -= arr[i];
			i++;
			coin++;
		}
		if (!k) break;
	}

	cout << coin << "\n";
	return 0;
}
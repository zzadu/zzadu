#include <iostream>
using namespace std;

int apart(int k, int n, int arr[][14]) {
	int sum = 0;

	if (k > 1) {
		for (int i = 1; i < k + 1; i++) {
			for (int j = 0; j < n; j++) {
				int peoSum = 0;
				for (int l = 0; l < j + 1; l++) peoSum += arr[i - 1][l];
				arr[i][j] = peoSum;
			}
		}
	}

	for (int i = 0; i < n; i++)	sum += arr[k - 1][i];

	return sum;
}


int main() {
	int t;
	cin >> t;

	int arr[1000][14] = { {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}, {0} };
	for (int i = 0; i < t; i++) {
		int k, n;
		cin >> k;
		cin >> n;

		if (k > 0) cout << apart(k, n, arr) << "\n";
		else cout << arr[0][n] << "\n";
	}

	return 0;
}
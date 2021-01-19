#include <iostream>
using namespace std;

int sum(int arr[], int n, int m) {
	int s, max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				s = arr[i] + arr[j] + arr[k];
				if (s > max && s <= m) max = s;
			}
		}
	}

	return max;
}

int main() {
	int n, m;
	cin >> n >> m;

	int arr[100] = { 0 };
	for (int i = 0; i < n; i++) cin >> arr[i];

	cout << sum(arr, n, m) << "\n";


	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000] = { 0 };

int binary(int arr[], int low, int high, int b) {
	int mid = (low + high) / 2;

	if (low > high) return 0;
	if (arr[mid] == b) return 1;
	else if (arr[mid] > b) return binary(arr, low, mid - 1, b);
	else if (arr[mid] < b) return binary(arr, mid + 1, high, b);
}
 
int main() {
	ios_base::sync_with_stdio(false);
	std::cin.tie(NULL); std::cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);

	int m, b;
	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> b;
		int low = 0, high = n - 1;
		cout << binary(arr, low, high, b) << "\n";
	}

	return 0;
}
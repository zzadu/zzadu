#include <iostream>
using namespace std;

int arr[1000001] = { 0 };

int card(int n, int arr[]) {
	int i, index = 0;
	
	for (i = 0; ; i++) {
		arr[index++] = 0;
		arr[n + i] = arr[index];
		arr[index++] = 0;
		if (arr[n + i - 1] == 0) break;
	}

	return arr[n + i];
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) arr[i] = i + 1;

	if (n == 1) cout << "1\n";
	else cout << card(n, arr) << "\n";

	return 0;
}
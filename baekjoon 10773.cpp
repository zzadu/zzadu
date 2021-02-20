#include <iostream>
using namespace std;

int arr[100000] = { 0 };

int main() {
	int k;
	cin >> k;

	int index = 0, a;
	while (k--) {
		cin >> a;
		if (a == 0) {
			arr[index--] = 0;
		}
		else arr[++index] = a;
	}
	int sum = 0;
	for (int i = 1; i <= index; i++) sum += arr[i];

	cout << sum << "\n";

	return 0;
}
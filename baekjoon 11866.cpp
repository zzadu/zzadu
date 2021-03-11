#include <iostream>
using namespace std;

void yo(int arr[], int result[], int n, int k);

int main() {
	int n, k, arr[1000], result[1000];

	cin >> n >> k;

	for (int i = 0; i < n; i++) arr[i] = i + 1;

	yo(arr, result, n, k);

	cout << "<";
	for (int i = 0; i < n; i++) {
		cout << result[i];
		if (i != n - 1) cout << ", ";
	}
	cout << ">";

	return 0;
}

void yo(int arr[], int result[], int n, int k) {
	int index = -1, resultI = 0, term = 0;

	while (resultI != n) {
		if (index == n - 1) index = -1;
		
		if (arr[index + 1] == 0) index++;
		else {
			index++;
			term++;
			
			if (term == k) {
				result[resultI++] = arr[index];
				arr[index] = 0;
				term = 0;
			}
		}
	}

}
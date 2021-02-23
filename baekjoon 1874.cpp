#include <iostream>
using namespace std;

long arr[200000], ab[200000];
char pm[200000] = { 0 };

void seq(int n, long arr[], long ab[], char pm[]) {
	int index = 0, abI = -1, pmI = 0;

	for (int i = 1; i <= n; i++) { // ab
		ab[++abI] = i;
		pm[pmI++] = '+';
		for (int j = index; j < n; j++) { // arr
			if (arr[j] == ab[abI]) {
				ab[abI--] = 0;
				pm[pmI++] = '-';
				index = j + 1;
			}
			else break;
		}
	}
}


int main() {
	int n;
	cin >> n;

	int max = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[max] < arr[i]) max = i;
	}

	seq(n, arr, ab, pm);
	
	if (ab[0] == 0) {
		for (int i = 0; pm[i] != 0; i++) cout << pm[i] << "\n";
	}
	else cout << "NO\n";

	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, peo[1000];
	cin >> n;

	for (int i = 0; i < n; i++) cin >> peo[i];
	sort(peo, peo + n);

	int t = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j <= i; j++) sum += peo[j];
		t += sum;
	}

	cout << t << "\n";

	return 0;
}
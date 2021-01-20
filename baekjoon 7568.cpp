#include <iostream>
using namespace std;

void ranking(int arr[][2], int n) {
	int up;

	for (int i = 0; i < n; i++) {
		up = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) up++;
		}

		cout << up + 1<< ' ';

	}

}

int main() {
	int n, arr[50][2];
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) cin >> arr[i][j];
	}

	ranking(arr, n);


	return 0;
}
#include <iostream>
#include <string>
using namespace std;

void queue(string order, int q[], int& inputI, int& outputI) {
	if (order == "front") {
		if (outputI >= inputI) cout << "-1\n";
		else cout << q[outputI + 1] << "\n";
	}
	else if (order == "back") {
		if (outputI >= inputI) cout << "-1\n";
		else cout << q[inputI] << "\n";
	}
	else if (order == "size") cout << inputI - outputI << "\n";
	else if (order == "empty") {
		if (outputI >= inputI) cout << "1\n";
		else cout << "0\n";
	}
	else if (order == "pop") {
		if (outputI >= inputI) cout << "-1\n";
		else cout << q[++outputI] << "\n";
	}
	else {
		int num;
		cin >> num;
		q[++inputI] = num;
	}
}

int q[2000000];

int main() {
	ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int n;
	cin >> n;

	int inputI = -1, outputI = -1;
	string order;
	for (int i = 0; i < n; i++) {
		cin >> order;
		queue(order, q, inputI, outputI);
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

void st(string order, int stack[], int& index) {
	if (order == "top") {
		if (index == -1) cout << "-1\n";
		else cout << stack[index] << "\n";
	}
	else if (order == "size") cout << index + 1 << "\n";
	else if (order == "empty") {
		if (index == -1) cout << "1\n";
		else cout << "0\n";
	}
	else if (order == "pop") {
		if (index == -1) cout << "-1\n";
		else cout << stack[index--] << "\n";
	}
	else if (order == "empty") {
		if (index == -1) cout << "1\n";
		else cout << "0\n";
	}
	else {
		int num;
		cin >> num;
		index++;
		stack[index] = num;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);

	int n;
	cin >> n;

	int index = -1; int stack[10000];
	string order;
	for (int i = 0; i < n; i++) {
		cin >> order;
		st(order, stack, index);
	}

	return 0;
}
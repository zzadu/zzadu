#include <iostream>
#include <cstring>
using namespace std;

bool stack(int& index, char a[], char p[], char b) {
	if (b == '(' || b == '[') {
		if (index < 0) return 0;
		else {
			a[++index] = b;
			return 1;
		}
	}
	else if (b == ')') {
		if (a[index] != '(') return 0;
		else {
			a[index--] = '0';
			return 1;
		}
	}
	else if (b == ']') {
		if (a[index] != '[') return 0;
		else {
			a[index--] = '0';
			return 1;
		}
	}

	return 1;
}

int main() {

	char a[100] = { 0 }, p[101];

	while (true) {
		cin.getline(p, 101);

		if (p[0] == '.') break;

		int index = 0;

		for (int j = 0; j < strlen(p); j++) {
			if (!stack(index, a, p, p[j])) {
				index = -1;
				break;
			}
		}

		if (index == 0) cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
}
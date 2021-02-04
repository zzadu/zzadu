#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int tri[3];

	while (cin >> tri[0] >> tri[1] >> tri[2]) {
		if (!tri[0]) break;

		int max = 0;
		for (int i = 1; i < 3; i++) {
			if (tri[i] > tri[max]) {
				max = i;
			}
		}
		swap(tri[max], tri[2]);

		if (tri[0] * tri[0] + tri[1] * tri[1] == tri[2] * tri[2]) cout << "right\n";
		else cout << "wrong\n";
	}

	return 0;
}
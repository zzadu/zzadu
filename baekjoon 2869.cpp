#include <iostream>
using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;

	int x = (v - a) / (a - b) + 1;

	if ((a - b) * (x - 1) + a == v) cout << x<< "\n";
	else cout << x + 1 << "\n";

	return 0;
}
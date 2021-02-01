#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min = 9999, len;

	len = x;
	if (len < min) min = len;
	len = w - x;
	if (len < min) min = len;
	len = y;
	if (len < min) min = len;
	len = h - y;
	if (len < min) min = len;

	cout << min << "\n";

	return 0;
}
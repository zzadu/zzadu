#include <iostream>
using namespace std;

int main() {
	double r;
	cin >> r;
	const double PI = 3.14159265358979323846;

	cout.setf(ios::fixed);
	cout.precision(6);
	cout << r * r * PI << "\n";
	cout << r * r * 2 << "\n";

	return 0;
}
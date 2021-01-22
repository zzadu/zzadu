#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i, jongmal = 0;

	for (i = 666; ; i++) {
		string number = to_string(i);
		int threeSix = 0;

		for (int j = 0; j < number.length() - 2; j++) {
			if (number[j] == '6' && number[j + 1] == '6' && number[j + 2] == '6') threeSix++;
		}
		
		if (threeSix > 0) jongmal++;
		if (jongmal == n) break;
	}

	cout << i << "\n";

	return 0;
}
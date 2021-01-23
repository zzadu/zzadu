#include <iostream>
#include <string>
using namespace std;

void swap(string& a, string& b) {
	string temp = a;
	a = b;
	b = temp;
}

int main() {
	string number;
	cin >> number;

	for (int i = 0; i < number.length(); i++) {
		int max = i;
		for (int j = i + 1; j < number.length(); j++) {
			if (number[max] < number[j]) max = j;
		}
		swap(number[max], number[i]);
	}

	cout << number << "\n";

	return 0;
}
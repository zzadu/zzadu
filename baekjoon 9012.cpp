#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;

	char ps[50];
	string s;

	for (int i = 0; i < t; i++) {
		int index = 0;
		cin >> s;

		for (int j = 0; j < s.length(); j++) {
			if (index < 0) break;
			if (s[j] == '(') ps[++index] = s[j];
			else ps[index--] = 0;
		}

		if (index == 0) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
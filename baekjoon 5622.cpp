#include <iostream>
#include <string>
using namespace std;

int convert(char a) {
    switch (a) {
    case 'A':
    case 'B':
    case 'C': return 2;
    case 'D':
    case 'E':
    case 'F': return 3;
    case 'G':
    case 'H':
    case 'I': return 4;
    case 'J':
    case 'K':
    case 'L': return 5;
    case 'M':
    case 'N':
    case 'O': return 6;
    case 'P':
    case 'Q':
    case 'R':
    case 'S': return 7;
    case 'T':
    case 'U':
    case 'V': return 8;
    case 'W':
    case 'X':
    case 'Y':
    case 'Z': return 9;
    }
}

int main() {
    string number;
    cin >> number;

    int size = number.length() / sizeof(char);
    int sum = 0;

    for (int i = 0; i < size; i++) sum += convert(number[i]) + 1;

    cout << sum << "\n";

    return 0;
}
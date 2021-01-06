#include <iostream>
#include <string>
using namespace std;

int convert(char a, int arr[]) {
    return arr[a - 'A'];
}

int main() {
    string number;
    int alphaNum[26] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };

    cin >> number;

    int size = number.length() / sizeof(char);
    int sum = 0;

    for (int i = 0; i < size; i++) sum += convert(number[i], alphaNum) + 1;

    cout << sum << "\n";

    return 0;
}
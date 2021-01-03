#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;

    getline(cin, p);

    int size = p.length() / sizeof(char);
    int space = 0;

    for (int i = 0; i < size; i++) {
        if (p[i] == ' ') space++;
        if (p[i] == ' ' && p[i + 1] == ' ') space--;
    }

    if (p[0] == ' ') space--;
    if (p[size - 1] == ' ') space--;

    cout << space + 1 << "\n";
    return 0;
}
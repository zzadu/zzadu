#include <iostream>
using namespace std;

void d(int n, int dn[]) {
    int next = n + (n % 10) + (n % 100 / 10) + (n % 1000 / 100) + (n  % 10000 / 1000) + n / 10000;

    if (next <= 10000) dn[next - 1]++;
}

void print(int dn[]) {
    for (int i = 0; i < 10000; i++) {
        if (dn[i] == 0) cout << i + 1 << "\n";
    }
}

int main() {
    int n, dn[10000] = { 0 };

    for (int i = 1; i <= 10000; i++) d(i, dn);
    print(dn);

    return 0;
}
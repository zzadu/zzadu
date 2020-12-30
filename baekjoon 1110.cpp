#include <iostream>
using namespace std;

int main() {
    int n, i = 0, cycle = -1;
    cin >> n;

    while (n != cycle) {
        if (i == 0) cycle = n;

        int sum = cycle % 10 + cycle / 10;

        if (sum >= 10) cycle = (cycle % 10) * 10 + sum % 10;
        else cycle = sum + (cycle % 10) * 10;

        i++;
    }

    cout << i;

    return 0;
}
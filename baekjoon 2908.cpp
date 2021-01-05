#include <iostream>
#include <string>
using namespace std;

string reverse(string a) {
    char temp = a[0];
    a[0] = a[2];
    a[2] = temp;

    return a;
}

int main() {
    string a, b;
    cin >> a >> b;

    a = reverse(a);
    b = reverse(b);

    if (a > b) cout << a << "\n";
    else cout << b << "\n";

    return 0;
}
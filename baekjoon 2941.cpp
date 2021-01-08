#include <iostream>
#include <string>
using namespace std;

int alpha(string alphabet, int size, int alNum) {
    for (int i = 1; i < size; i++) {

        if (alphabet[i] == '=') {
            if (alphabet[i - 1] == 'c' || alphabet[i - 1] == 's') alNum--;

            else if (alphabet[i - 1] == 'z') {
                if (i > 1 && alphabet[i - 2] == 'd') alNum -= 2;
                else alNum--;
            }
        }

        else if (alphabet[i] == '-') {
            if (alphabet[i - 1] == 'c' || alphabet[i - 1] == 'd') alNum--;
        }

        else if (alphabet[i] == 'j') {
            if (alphabet[i - 1] == 'l' || alphabet[i - 1] == 'n') alNum--;
        }
    }
    return alNum;
}

int main() {
    string alphabet;
    cin >> alphabet;

    int alNum = alphabet.size();

    alNum = alpha(alphabet, alphabet.size(), alNum);

    cout << alNum << "\n";

    return 0;
}
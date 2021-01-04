#include <iostream>
#include <cstring>
using namespace std;

void alpha(int size, char word[], int alphabet[]) {
    for (int i = 0; i < size; i++) {
        int ind = word[i];
        if (word[i] >= 'a' && word[i] <= 'z') ind = word[i] - 'a' + 'A';
        ind = ind - 'A';
        alphabet[ind]++;
    }
}

void print(int alphabet[]) {
    int max = 0;
    for (int i = 1; i < 26; i++) {
        if (alphabet[i] > alphabet[max]) max = i;
    }

    bool print = true;
    for (int i = 0; i < 26; i++) {
        if (alphabet[max] == alphabet[i]) {
            if (max != i) print = false;
        }
    }

    if (print) cout << (char)(max + 'A') << "\n";
    else cout << "? \n";
}

int main() {
    char word[1000000];
    cin >> word;
    int alphabet[26] = { 0 };

    int size = strlen(word) / sizeof(char);

    alpha(size, word, alphabet);
    print(alphabet);

    return 0;
}
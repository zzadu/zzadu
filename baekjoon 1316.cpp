#include <iostream>
#include <string>
using namespace std;

int groupCheck(string word, int i, int j) {
    for (int k = i + 1; k < j; k++) {
        if (word[k] != word[i]) return 1;
    }

    return 0;
}

int group(string word, int size) {
    int diff = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (word[i] == word[j]) diff += groupCheck(word, i, j);
        }
    }
    if (diff == 0) return 1;
    else return 0;
}

int main() {
    int test;
    string word;

    cin >> test;

    int sum = 0;
    for (int i = 0; i < test; i++) {
        cin >> word;
        sum += group(word, word.size());
    }

    cout << sum << "\n";

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string ox;
    int num;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> ox;

        int score = 0, sum = 0;

        int size = ox.size() / sizeof(char);

        for (int j = 0; j < size; j++) {
            if (ox[j] == 'X') score = 0;
            else score++;

            sum += score;
        }

        cout << sum << "\n";
    }

    return 0;
}
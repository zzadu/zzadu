#include <iostream>
using namespace std;

int average(int score[], int students) {
    int sum = 0;

    for (int i = 0; i < students; i++) {
        sum += score[i];
    }

    return (double)sum / students;
}

void print(double ave, int score[], int students) {
    int over = 0;
    for (int i = 0; i < students; i++) {
        if (score[i] > ave) over++;
    }

    cout << fixed;
    cout.precision(3);
    cout << (double)over / students * 100 << "% \n";
}

int main() {
    int test, students;

    cin >> test;

    for (int i = 0; i < test; i++) {
        cin >> students;

        int score[1000];
        for (int j = 0; j < students; j++) {
            cin >> score[j];
        }

        double ave = average(score, students);
        print(ave, score, students);
    }

    return 0;
}
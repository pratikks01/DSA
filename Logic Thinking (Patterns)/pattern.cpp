#include <bits/stdc++.h>

using namespace std;
void pattern1(int n) {
    // ****
    // ****
    // ****
    // ****
    for (int row = 1; row <= n; row++) {
        // for every row run the col
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        // When one row is printed, add a new line
        cout << endl;
    }
}
void pattern2(int n) {
    // *
    // **
    // ***
    // ****
    for (int row = 1; row <= n; row++) {
        // for every row run the col
        for (int col = 1; col <= n; col++) {
            cout << "*";
        }
        // When one row is printed, add a new line
        cout << endl;
    }
}

void pattern3(int n) {
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        cout << endl;
    }
}

void pattern4(int n) {
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << row << " ";
        }
        cout << endl;
    }
}

void pattern5(int n) {
    // ****
    // ***
    // **
    // *
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n + 1 - row; col++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    // 1234
    // 123
    // 12
    // 1
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n + 1 - row; col++) {
            cout << col;
        }
        cout << endl;
    }
}

void pattern7(int n) {
    for (int row = 1; row <= 2*n; row++) {
        for (int col = 1; col <= n + 1 - row; col++) {
            cout << col;
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    pattern6(n);
    cout << endl;

    return 0;
}

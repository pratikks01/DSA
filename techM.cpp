/*
Print all the prime numbers from 1 n
*/

#include <bits/stdc++.h>

using namespace std;
void printPrime(int n) {
    for (int i = 2; i <= n; i++) {
        bool flag = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) cout << i << " ";
    }
}
int main() {
    int n;
    cin >> n;
    printPrime(n);
    return 0;
}
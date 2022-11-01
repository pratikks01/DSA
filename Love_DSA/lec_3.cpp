#include <bits/stdc++.h>

using namespace std;
int main() {
    // decimal to binary conversion
    int n;
    cin >> n;
    int ans = 0;
    int p = 1;
    while (n > 0) {
        int last_bit = (n & 1);
        ans += last_bit * p;
        p = p * 10;
        n = n >> 1;
    }
    cout << ans << endl;

    return 0;
}
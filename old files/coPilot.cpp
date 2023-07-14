#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int firstJ, secondK;
    cin >> firstJ >> secondK;
    // int halfOfJ = firstJ/2;
    // int halfOfK = secondK / 2;
    // if (firstJ <= halfOfK)
    //     cout << "Yes" << endl;
    // else
    //     cout << "No" << endl;
    if (firstJ <= secondK / 2 || firstJ == secondK)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
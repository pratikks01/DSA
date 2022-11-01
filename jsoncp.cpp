// 1
#include <bits/stdc++.h>
#define int long long
#define double long double
#define endl '\n'

using namespace std;

class Solution {
   public:
    // 1
    void solve() {
        int x;
        cin >> x;
        if (x < 30)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    // 2
    void solve() {
        int a, x, g;
        cin >> a >> x >> g;
        if ((a + x) & 1 || (x + g) & 1 || (g + a) & 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    // 3
    void solve() {
        int n;
        cin >> n;
        string sinpString;
        cin >> sinpString;
        int ans = 0;
        for (int it = n - 2; it >= 0; it--)
            if (sinpString[it] == sinpString[it + 1]) ans++;
        cout << ans << endl;
    }

    // 4.1
    void solve() {
        map<char, int> m1;
        map<char, int> m2;
        int n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;

        for (int itr = 0; itr < n; itr++) m1[str1[itr]]++;

        for (int itr = 0; itr < n; itr++) m2[str2[itr]]++;
        int ans = 0, a = 0, z = 0;
        for (int itr = 0; itr < str1.length(); itr++) {
            if (m1.find(str1[itr]) != m1.end()) a = m1[str1[itr]];
            if (m2.find(str1[itr]) != m2.end()) z = m2[str1[itr]];

            ans = max(ans, min(a, z));
        }
        cout << ans << endl;
    }

    // 4.1
    void solve() {
        int n, res = 0;
        string strA, strB;
        cin >> n >> strA >> strB;
        map<char, int> mapA, mapQ;
        for (auto i : strA) mapA[i]++;
        for (auto i : strB) mapQ[i]++;

        for (char i = 'a'; i <= 'z'; ++i) res = max(res, min(mapA[i], mapQ[i]));

        cout << res << endl;
    }

    // void solve() {}
};

signed main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        ob.solve();
    }
    return 0;
}

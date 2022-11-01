/*
*PROBLEM:*

Given a directed graph with N nodes and M edges. Each node is associated with
lowercase english alphabet. Beauty of a path is defined as the number of most
frequently occurring alphabet.. Find the most beautiful path and return the
maximum beauty value it has.

*CONSTRAINTS:*

1 < N,M < 300000
*FUNCTION DESCRIPTION:* Complete the function beauty in code. Function must
Return an integer, the beauty of most beautiful path. If the value is very
large return -1.

Function beauty has the following parameter(s):

n: integer, number of nodes

m: integer, number of directed edges

S: string of length n where ith alphabet denotes the alphabets associated
with ith node

X: list of length m

Y: list of length m
X, Y: two integers arrays of length M, pair Xi, Yi denotes there is an edge
from node Xi to Yi.

Output

Return an integer, the beauty of most beautiful path. If the value is very
large return -1.

*EXAMPLE:*

Input:

n: 5

m: 4

s: abaca

x: [ 1, 1, 3, 4] y: [2, 3, 4, 5]

Output:- 3

Explanation - Path with maximum beauty is (1->3->4->5) ie (asca)
*/

#include <bits/stdc++.h>

using namespace std;
int beauty(int n, int m, string s, int x[], int y[]) {
    int ans = 0;
    int freq[26] = {0};
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < m; i++) {
        int a = x[i], b = y[i];
        int temp = freq[s[a - 1] - 'a'] + freq[s[b - 1] - 'a'];
        ans = max(ans, temp);
    }
    return ans;
}

int main() {
    int n = 5, m = 4;
    string s = "abaca";
    int x[m] = {1, 1, 3, 4};
    int y[m] = {2, 3, 4, 5};
    // cin >> n >> m;
    // cin >> s;
    // for (int i = 0; i < m; i++) {
    //     cin >> x[i] >> y[i];
    // }
    cout << beauty(n, m, s, x, y);
    return 0;
}

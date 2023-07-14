/*
// Stable sorting algorithm TC = O(NlogN), SC = O(1)
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n, x;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
        // cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
        cout << arr[i];


    return 0;
}
// Finding the minimum element form the given array  TC = O(N),  SC = O(1)
#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, x;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    int mini = *min_element(arr.begin(), arr.end());
    cout << "minimum element is : " << mini << endl;

    return 0;
}
*/
// #include <bits/stdc++.h>

// using namespace std;
// int sumOfNumbers(int n) {
//     if (n == 0) return 0;
//     return n + sumOfNumbers(n - 1);
// }
// int main() {
//     int n = 5;
//     cout << sumOfNumbers(n);

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// void solve(string s) {
//     unordered_map<char, int> m;
//     for (int i = 0; i < s.size(); i++) {
//         m[s[i]]++;
//     }
//     for (int i = 0; i < s.size(); i++) {
//         if (m.find(s[i]) != m.end()) {
//             cout << s[i];
//             if (m[s[i]] > 1) {
//                 cout << m[s[i]];
//             }
//         }
//         while (s[i] == s[i + 1] && i != s.size()) {
//             i++;
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     solve(s);
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;
class Solution {
   public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n) {
        // Your code here
        unordered_set<int> s;
        int preSum = 0;
        for (int i = 0; i < n; i++) {
            preSum = +arr[i];
            if (preSum == 0) return true;
            if (s.find(preSum) != s.end()) return true;
            s.insert(preSum);
        }
        return false;
    }
};
int main() { return 0; }
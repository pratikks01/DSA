// #include <bits/stdc++.h>

// using namespace std;
// class Solution {
//    public:
//     // Function to count the frequency of all elements from 1 to N in the
//     array.
//     // void frequencyCount(vector<int>& arr, int N, int P) {
//     //     // code here
//     //     unordered_map<int, int> mp;
//     //     for (int i = 0; i < N; i++) mp[arr[i]]++;

//     //     // for(auto x : mp)
//     //     //     cout<< x.first<<" "<<x.second;
//     //     for (int i = 0; i < N; i++) {
//     //         if (mp[i + 1]) {
//     //             arr[i] = mp[i + 1];
//     //         } else {
//     //             arr[i] = 0;
//     //         }
//     //     }
//     // }

//     // int firstNonRepeating(int arr[], int n) {
//     //     // Complete the function
//     //     unordered_map<int, int> mp;
//     //     for (int i = 0; i < n; i++) mp[arr[i]]++;

//     //     for (int i = 0; i < n; i++) {
//     //         int key = arr[i];
//     //         auto temp = mp.find(key);
//     //         if (temp->second == 1) return key;
//     //     }
//     //     return 0;
//     // }

//     // int firstRepeated(int arr[], int n) {
//     //     // code here
//     //     unordered_map<int, int> mp;
//     //     for (int i = 0; i < n; i++) mp[arr[i]]++;

//     //     for (int i = 0; i < n; i++) {
//     //         int key = arr[i];
//     //         auto temp = mp.find(key);
//     //         if (temp->second > 1) return i + 1;
//     //     }
//     //     return -1;
//     // }

//     bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int, int> mp;
//         set<int> ans;
//         // for (auto i : arr) mp[arr[i]]++;
//         for (int i = 0; i < arr.size(); i++) mp[arr[i]]++;

//         for (auto it = mp.begin(); it != mp.end(); it++)
//         ans.insert(it->second);

//         return ans.size() == mp.size() ? true : false;
//     }
//     vector<int> findDuplicates(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         vector<int> ans;
//         for (int i = 0; i < nums.size(); i++) mp[nums[i]]++;
//         for (auto it = mp.begin(); it != mp.end(); it++) {
//             if (it->second == 2) ans.push_back(it->first);
//         }
//         return ans;
//     }
// };
// int main() { return 0; }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        int n = s.length();
        int m = t.length();
        int dp[n + 1][m + 1];
        for (int i = 0; i <= n; i++) dp[i][0] = 1;

        for (int i = 1; i <= m; i++) dp[0][i] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == t[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        if (dp[n][m] == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

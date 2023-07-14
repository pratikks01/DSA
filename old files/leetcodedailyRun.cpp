/*
Alice has K strings, each consisting only of lowercase letters that she wanted
to send to her friend. To avoid anyone else from being able to see them, she
encodes every string using the following rule:

• For every letter x, if it is the letter of the alphabet starting from the
left, replace it with the th letter starting from the right. For example, the
string 'abcd' would be encoded to 'zyxw'

However, due to a bug, a certain number of messages (possibly none) were not
encoded. You are given a list of Nbistinct strings containing all the original
messages as well as the encoded messages. You do not know how many messages
Alice originally started with.

Task

Determine the minimum possible value of K denoting the the number of messages
Alice Initially started with.

Complete the function findMessages provided in the editor. This function takes
the following 2 parameters and returns the required answer. a

• N: Represents the total number of strings in the final array

• A Represents the final array of strings with N elements
*/

#include <bits/stdc++.h>

using namespace std;
int findMessage(int N, vector<string> A) {
    // Write your code here
    int ans = N;
    set<string> st;

    for (int i = 0; i < N - 1; i++) {
        string s;
        for (int j = 0; j < A[i].size(); j++) s += 'a' + ('z' - A[i][j]);
        if (st.find(s) != st.end()) ans -= 1;
        st.insert(A[i]);
    }
    return ans;
}
int main() {
    int N;
    cin >> N;
    vector<string> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << findMessage(N, A) << endl;

    return 0;
}
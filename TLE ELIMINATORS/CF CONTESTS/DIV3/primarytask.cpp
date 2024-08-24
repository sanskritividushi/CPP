#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        string s;
        cin >> s;

        // Compute prefix sums
        vector<long long> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
        }

        stack<int> st;
        long long total_score = 0;

        // Traverse the seats and compute scores
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                st.push(i);
            } else if (s[i] == 'R') {
                if (!st.empty()) {
                    int l = st.top();
                    st.pop();
                    total_score += prefix_sum[i + 1] - prefix_sum[l];
                }
            }
        }

        cout << total_score << endl;
    }
    return 0;
}

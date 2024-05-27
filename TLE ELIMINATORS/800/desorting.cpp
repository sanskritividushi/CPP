#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (!is_sorted(arr.begin(), arr.end())) {
            cout << 0 << endl;
        } 
        else {
            int mini = INT_MAX;
            for (int i = 0; i < n - 1; i++) {
                mini = min(mini, arr[i + 1] - arr[i]);
            }
            int operations = mini / 2 + 1;
            cout << operations << endl;
        }
    }
    return 0;
}

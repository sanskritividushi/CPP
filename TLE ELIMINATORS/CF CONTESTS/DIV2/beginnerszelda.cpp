#include <iostream>
using namespace std;

const int N = 1e6 + 5;
int freq[N];

void solve() {
    int n;
    cin >> n;

    fill(freq, freq + n + 1, 0);  // Reset frequency array

    for (int i = 1, a, b; i < n; i++) {
        cin >> a >> b;
        freq[a]++;
        freq[b]++;
    }

    int leaf_count = 0;
    for (int i = 1; i <= n; i++)
        if (freq[i] == 1)
            leaf_count++;

    cout << (leaf_count + 1) / 2 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}

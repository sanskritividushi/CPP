// #include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z, k;
        cin >> x >> y >> z >> k;

        int count = 0;
        for (int i = 1; i <= x; ++i) {
            if (k % i == 0 && k / i <= y) {
                int j = k / i;
                for (int l = 1; l <= z; ++l) {
                    if (k % (i * j) == 0 && k / (i * j) <= z) {
                        count += (x - i + 1) * (y - j + 1) * (z - k / (i * j) + 1);
                    }
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}

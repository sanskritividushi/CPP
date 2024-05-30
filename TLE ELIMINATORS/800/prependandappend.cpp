// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = n;
        int l = 0;
        int h = n - 1;
        while (l < h && s[l]!=s[h]) {
                // ans -= 2;
                l++;
                h--;

        }
        cout << h-l+1 << endl;
    }
    return 0;
}

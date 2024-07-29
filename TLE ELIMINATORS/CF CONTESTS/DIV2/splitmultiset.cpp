// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k; 
        int ops = 0;
        if (n == 1) {
            cout << 0 << endl;
            continue;
        } 
        else {
            int rem = n;
            while (rem > 0) {
                rem = rem - k + 1;
                ops++;
            }
        }
    cout << ops << endl;
    }

    return 0;
}

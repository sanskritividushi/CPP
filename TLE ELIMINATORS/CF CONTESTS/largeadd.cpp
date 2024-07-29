// #include <iostream>
#include <bits/stdc++.h>
// #include <string>
using namespace std;

void checkString() {
    int n;
    cin >> n;s
    string s= to_string(n);
    bool flag = true;
    if (s[0] != '1') {
        flag = false; 
    } else {
        for (int i = 1; i < s.size(); ++i) {
            if (i != s.size() - 1) {
                if (s[i] == '0') {
                    flag = false; 
                    break;
                }
            } else {
                if (s[i] > '8') {
                    flag = false;
                    break;
                }
            }
        }
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        checkString(); 
    }
    return 0;
}



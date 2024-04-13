// #include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int max_repetition = 1;
    int current_repetition = 1;
    
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            current_repetition++;
        } else {
            max_repetition = max(max_repetition, current_repetition);
            current_repetition = 1;
        }
    }
//incase repetiiton goes till the end
    max_repetition = max(max_repetition, current_repetition);
    cout << max_repetition << endl;
    
    return 0;
}

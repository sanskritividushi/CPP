//  #include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long int n = s.length();
    unordered_map<char, int> m;
    for(auto it:s){
        m[it]++;
    }
    long long odd = 0;
    for (auto it:m){
        if(it.second%2!=0){
            odd++;
        }
    }
    if(odd>1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        string ans[n];
        long long int l=0, r=n-1;
            for(auto it:m){
                while (it.second >= 2) {
                ans[l++] = it.first;
                ans[r--] = it.first;
                it.second -= 2;
            }
            if (it.second == 1) {
                ans[n / 2] = it.first;
            }
            }
            for (long long int i = 0; i < n; ++i) {
            cout << ans[i];
        }
    cout << endl;
    }

    return 0;
}

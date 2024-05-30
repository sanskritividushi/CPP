#include <iostream>
// #include <vector>
// #include <climits>
// #include <algorithm>
// using namespace std;
//  #include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> s[i];
        }
        int ans = n;
        int l = 0;
        int h = n - 1;
        while(l<=h){
            if(s[l]!=s[h]){
                ans -= 2;
                l++;
                h--;
            }
        }
        cout << ans << endl;
    }
}
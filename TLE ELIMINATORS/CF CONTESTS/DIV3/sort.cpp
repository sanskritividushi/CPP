// #include <iostream>
#include <vector>
#include <set>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        vector<vector<int>> x;
        vector<int> ans;
        for (int i = 1; i <= q; i++)
        {
            int l, r;
            cin >> l >> r;
            x.push_back({l-1, r-1});
        }
        for (int i = 0; i < q; i++){
            vector<int> counta(26, 0), countb(26, 0);
            for (int j = x[i][0]; j <= x[i][1]; j++){
                counta[a[j] - 'a']++;
                countb[b[j] - 'a']++;
            }
            int minswaps = 0;
            for (int i = 0; i < 26; i++){
                minswaps+= (abs(counta[i] - countb[i]));
            }
            ans.push_back(minswaps / 2);
        }
        for(auto it:ans){
            cout << it << endl;
        }
    }
}
#include <bits/stdc++.h>
// #include <iostream>
// #include <unordered_map>
// #include <set>
// // #include <math.h>
// #include <vector>
// #include <numeric> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        for (int i=0; i<n; i++){
            cin >> b[i];
        }
        int m;
        cin >> m;
        int d[m];
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
        }

        vector<int> changes;
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=b[i]){
                changes.push_back(b[i]);
            }
        }
        if(changes.size()>m){
            cout << "NO" << endl;
            continue;
        }
        int idx = 0;
        for(auto it:d){
            if(idx<changes.size() && it==changes[idx]){
                idx++;
            }
        }
        if(idx==changes.size()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

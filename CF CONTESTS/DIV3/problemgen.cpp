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
        int n, m;
        cin >> n >> m;

        string a;
        cin >> a;
        unordered_map<char, int> mp;
        for(auto it:a){
            mp[it]++;
        }
        int count = 0;
        for (auto it : mp)
        {
            if(it.second<m){
                count+=m-it.second;
            }
        }
        if(mp.size()<7){
            count+=m*(7-mp.size());
        }
        cout << count << endl;
    }
    return 0;
}
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> m;
        for(auto it:s){
            m[it]++;
        }
        int oddfreq = 0;
        for (auto it : m)
        {
            int freq=it.second;
            if(freq%2!=0){
                oddfreq++;
            }
        }
        if(k<oddfreq-1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
}
return 0;
}
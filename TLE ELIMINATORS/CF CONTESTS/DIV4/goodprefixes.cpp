#include <bits/stdc++.h>
// #include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int count = 0;
        long long int sum = 0;
        // unordered_map<int, int> m;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            // maxi = max(maxi, a[i]);
            sum = sum + a[i];
            maxi = max(maxi, a[i]);
            // m[sum] = maxi;
            if(sum-maxi==maxi){
                count++;
            }
        }
        // for(auto it:m){
        //     if(it.first==it.second){
        //         count++;
        //     }
        // }
        cout << count << endl;
    }
    return 0;
}
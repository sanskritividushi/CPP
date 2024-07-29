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
    cin>>t;
    while(t--){
        int n, f, k;
        cin>>n>>f>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int fav = arr[f - 1];
        // unordered_map<int, int> mp;
        // for(int i=0; i<n; i++){
        //     mp[arr[i]]++;
        // }

        sort(arr, arr + n);
        reverse(arr, arr + n);
        int countfav = count(arr, arr + n, fav);
        int low = -1, high = -1;
        for (int i = 0; i < n; i++){
            if(arr[i] == fav){
                if(low==-1){
                    low = i;
                }
                high = i;
            }
        }
        if (low < k) {
            if (high >= k) {
                cout << "MAYBE" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
        // for(auto it:arr){
        //     if(it==fav && mp[it]>1 && it<=k-1){
        //         cout << "MAYBE" << endl;
        //         break;
        //     }
        //     else if(it==fav && it>k){
        //         cout << "NO" << endl;
        //         break;
        //     }
        //     else{
        //         cout << "YES" << endl;
        //         break;
        //     }
        // }
    }
    return 0;
}
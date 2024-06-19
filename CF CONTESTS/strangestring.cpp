#include <bits/stdc++.h>
// #include <iostream>
#include <unordered_map>
// #include <set>
// // #include <math.h>
// #include <vector>
// #include <numeric> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        string ans="";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if(arr[0]==arr[n-1]){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for (int i = 0; i < n; i++){
                ans += 'R';
            }
            ans[1] = 'B';
            cout << ans << endl;
        }
    }
    return 0;
}
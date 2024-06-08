// #include <iostream>
#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, n;
        cin >> a >> b >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long int totaltime = b;
        for(auto it:arr){
            totaltime += min(it, a - 1);
        }
        cout << totaltime << endl;
    }
    return 0;
}

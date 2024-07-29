// #include <iostream>
#include <vector>
#include <set>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        long long int n, x;
        cin >> n >> x;
        
        long long int ans = 0;
        for (int a = 1; a <= x; ++a) {
            for (int b = 1; b <= x - a; ++b) {
                long long int checksum = x - a - b ;
                if(checksum<=0)break;
                long long int checkprod = n - a * b;
                if (checkprod<=0)break;
                long long int cval = min(checksum, checkprod/(a + b));
                if(cval>0)ans += cval;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
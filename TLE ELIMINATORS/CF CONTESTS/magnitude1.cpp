// #include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n); 
        int neg = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < 1) {
                neg++;
            }
        }
        int pos = n - neg;
        long long int sum = 0;
        if (neg==n) {
            for (int i = 0; i < n; i++) {
                sum += abs(a[i]);
            }
        }
        else {
            for (int i = 0; i < n; i++) {
            if((sum+a[i]) < 0){
                sum = abs(sum + a[i]);
            }
            else{
                sum += a[i];
            }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
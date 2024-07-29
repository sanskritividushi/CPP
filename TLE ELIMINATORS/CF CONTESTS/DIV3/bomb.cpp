#include <iostream>
#include <vector>
#include <string>
// #include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long int maximumval(vector<long long int>&a, vector<long long int>&b){
    int maxi = 0;
    int maxiind = -1;
    int check = 0;
    for (int i = 0; i < a.size(); i++)
        {
            if (a[i] > maxi)
            {
                maxi = a[i];
                maxiind = i;
            }
        }
    a[maxiind] = max(0LL, a[maxiind]-b[maxiind]);
    return maxi;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        vector<long long int> a(n), b(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        long long int ans = 0;
        while (k--){
            ans += maximumval(a,b);
        }
        cout << ans;
    }
}

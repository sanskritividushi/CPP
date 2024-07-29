// #include <iostream>
#include <bits/stdc++.h>
#include <map>
// #include <string>
using namespace std;
int dp[1001][1001];

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        if(a==b){
            cout << a.length() << endl;
            continue;
        }
        int n = a.length(), m = b.length();
        int ans = 0;
        memset(dp,0, sizeof(dp));
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(a[i-1]==b[j-1]){
                 dp[i][j]= 1+dp[i-1][j-1];
                //  if(dp[i][j]>ans)ans=dp[i][j];
            }
            else dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
            // else dp[i][j]=0;
            }
        }
        // int w = n - dp[n][m];
        // int w = n - ans;

        cout << max(n,m)+min(n,m)-dp[n][m] << endl;
    }
    return 0;
}
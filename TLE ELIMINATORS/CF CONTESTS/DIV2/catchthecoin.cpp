// #include <iostream>
#include <bits/stdc++.h>
// #include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int xi, yi;
        cin >> xi >> yi;
        if(yi<-1) cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}


// #include <iostream>
#include <bits/stdc++.h>
#include <map>
// #include <string>
using namespace std;
int dp[1001][1001];


#include <bits/stdc++.h>
// #include <iostream>
// #include <set>
// // #include <math.h>
// #include <vector>
// #include <numeric> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        vector<vector<int>> v={
            {a,b}, {a,-b}, {-a,b}, {-a,-b}, {b,a}, {b,-a}, {-b,a}, {-b,-a}
        };
        set<pair<int, int>> s1;
        set<pair<int, int>> s2;
        for(auto it:v){
            int x=xk+it[0];
            int y=yk+it[1];
            s1.insert({x,y});
            x=xq+it[0];
            y=yq+it[1];
            s2.insert({x,y});
        }
    int ans=0;
    for(auto it:s1){
        if(s2.find(it)!=s2.end()){
            ans++;
        }
    }
    cout << ans << endl;
    }
}
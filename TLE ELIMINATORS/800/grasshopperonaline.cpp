// #include <iostream>
// #include <climits>
// #include <algorithm>
// using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,k;
        cin >> x >> k;
        if(x%k!=0){
            cout << 1 <<endl;
            cout << x << endl;
            // return 0;
        }
        else{
            cout << 2 << endl;
            cout << x-1 << " " << 1 << endl;
        }
        }
    return 0;
}

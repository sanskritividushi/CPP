// #include <iostream>
// #include <vector>
// #include <climits>
// #include <algorithm>
// using namespace std;
 #include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long arr[n];
        long long maxi=0;
        for(long long i=0; i<n; i++){
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        vector<long long> b;
        vector<long long> c;
        for (long long i = 0; i < n; i++){
            if(arr[i]==maxi) c.push_back(maxi);
            else b.push_back(arr[i]);
        }
        if(b.size()==0){
            cout << -1 << endl;
            continue;
        }
        cout << b.size() << " " << c.size() << endl;
        for(int i=0; i<b.size(); i++){
            cout << b[i] << " ";
        }
        cout << endl;
        for(int i=0; i<c.size(); i++){
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
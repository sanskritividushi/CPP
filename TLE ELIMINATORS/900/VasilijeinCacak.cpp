#include <bits/stdc++.h>
// #include <iostream>
// #include <unordered_map>
// #include <set>
// // #include <math.h>
// #include <vector>
// #include <numeric> 
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n,k,x;
        cin>>n>>k>>x;
        long long int minsum = (k * (k + 1)) / 2;
        long long int maxsum = ((n - k )*(n -k + 1)) / 2;
        long long int nsum=(n*(n+1))/2;
        long long int high = nsum - maxsum;
        if(x>=minsum && x<=high){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
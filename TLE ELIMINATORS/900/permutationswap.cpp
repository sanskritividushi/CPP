#include <iostream>
#include <unordered_map>
#include <numeric>
#include <climits>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int index[n];
        for (int i = 0; i <n; i++)
        {
            index[arr[i] - 1] = i;
        }
        int k = 0;
        for (int i = 0; i < n; i++){
            int diff = abs(index[i] - i);
            k=__gcd(k, diff);
        }
        cout << k<< endl;
    }
    return 0;
}
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++){
        cin >>arr[i];
    }
    long long int ans = 0;
    long long int count = 0;
    for (long long int i = 1; i < n; i++){
        if(arr[i]<arr[i-1]){
            count = arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
            ans += count;
        }
    }
    cout << ans;
    return 0;
}
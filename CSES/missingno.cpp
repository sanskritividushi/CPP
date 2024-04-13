#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long arr[n - 1];
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    long long sum = (n * (n + 1)) / 2;
    for(auto it:arr){
        sum -= it;
    }
    cout << sum;
    return 0;
}
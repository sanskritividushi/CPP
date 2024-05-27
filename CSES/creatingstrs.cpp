// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int l = 0;
    int h = n - 1;
    int sum1 = 0, sum2 = 0;
    int count = 1;
    while (l <= h) {
        if (count % 2 != 0) {
            sum1 += arr[h];
            h--;
        } else {
            sum2 += arr[h];
            h--;
        }
        count++;
    }
    int minDiff = abs(sum1 - sum2);
    cout << minDiff << endl;
    return 0;
}

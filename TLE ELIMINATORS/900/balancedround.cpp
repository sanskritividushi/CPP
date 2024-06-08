//  #include <iostream>
#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>>k;
        int arr[n];
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int maxrange = 1;
        int range = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) <= k)
            {
                range++;
            }
            else{
                range = 1;
            }
            maxrange = max(maxrange, range);

        }
        cout << n - maxrange << endl;
    }
}
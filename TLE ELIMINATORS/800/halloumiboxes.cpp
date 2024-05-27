// #include <iostream>
// #include <algorithm>
// using namespace std;
#include <bits/stdc++.h>
using namespace std;

bool checkreverse(int arr[],int n){
    for (int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        long int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if(k>1){
            cout << "YES" << endl;
        }
        else if(checkreverse(arr,n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}


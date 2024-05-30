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
        int n;
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int blankspace = 0;
        int zeros = 0;
        for(int i=0; i<n; i++){
            if (arr[i] == 0)
            {
                zeros++;
            }
            else{
                blankspace=max(blankspace, zeros);
                zeros=0;
            }
        }
        if(arr[n-1]==0) blankspace = max(blankspace, zeros);
        cout << blankspace << endl;
    }
}
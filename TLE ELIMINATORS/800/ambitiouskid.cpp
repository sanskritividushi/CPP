//#include <iostream>
// #include <climits>
// #include <algorithm>
// using namespace std;
 #include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int mini = INT_MAX;
    for (int i = 0; i < n; i++){
        if(arr[i]==0){
            cout << 0 << endl;
            return 0;
        }
        else{
            mini = min(mini, abs(arr[i]));
        }
    }
    cout << mini << endl;
    return 0;
}
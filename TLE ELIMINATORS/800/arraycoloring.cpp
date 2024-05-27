#include <bits/stdc++.h>
// #include <iostream>
// #include <math.h>
// #include <vector>
// #include <numeric> 
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2==0)
                even++;
            else{
                odd++;
            }
        }
        if(odd%2==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    cout << endl;
    return 0;
}
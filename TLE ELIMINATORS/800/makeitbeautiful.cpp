// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int twos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if(arr[0]==arr[n-1]){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
            cout << arr[n - 1] << " " << arr[0] << " ";
            for (int i = 1; i < n - 1; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
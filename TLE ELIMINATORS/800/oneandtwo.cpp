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
            if(arr[i]==2){
                twos++;
            }
        }

        if(twos%2!=0){
            cout << -1 << endl;
            // return 0;
            continue;
        }

        if(twos==0){
            cout << 1 << endl;
            continue;
        }

        int check2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==2){
                check2++;
            }
            if(check2==(twos-check2)){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
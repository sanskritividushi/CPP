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
        int neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin>> arr[i];
            if(arr[i]==-1)
                neg++;
            else
                continue;
        }
       
        if(neg%2==0 && neg<=n-neg){
            cout << 0 << endl;
        }
        else if(neg>n-neg){
            int ops = neg - n / 2;
            if(n/2 % 2==1){
                ops++;
            }
            cout << ops << endl;
        }
        else{
           if(neg%2==1){
            cout << 1 << endl;
           }
        }
    }
    return 0;
}
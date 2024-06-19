// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = 1;
        int count = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                count = 1;
            }
            maxi=max(count, maxi);
        }
        cout << maxi+1 << endl;
    }
}
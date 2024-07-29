// #include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<string>s;
        int size = n / k;
        vector<string> ans;
        for (int i = 0; i < n; i++){
            string str;
            cin >> str;
            s.push_back(str);
        }
        if(k==1){
            for(auto it:s){
                cout << it << endl;
            }
        }
        else if(n==k){
            cout << s[0][1] << endl;
        }
        else{
            for (int i = 0; i < n; i=i+k){
                string temp = "";
                for (int j = 0; j < n; j=j+k){
                    temp+=s[i][j];
                }
                ans.push_back(temp);
            }
            for(auto it:ans){
                cout << it << endl;
            }
        }
    }
    return 0;
}
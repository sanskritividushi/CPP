#include <bits/stdc++.h>
// #include <iostream>
#include <unordered_set>
using namespace std;

int main(){

    long long int n;
    cin>>n;

    unordered_set<long long int> s;
    long long int sum = (n * (n + 1)) / 2;
    if(sum%2!=0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        long long int currsum = 0;
        for (long long int i = n; i >= 1; i--)
        {
            if(currsum+i<=sum/2){
                s.insert(i);
                currsum+=i;
            }
        }
        cout << s.size() << endl;
        for (auto it : s){
            cout << it << " ";
        }
        cout << endl;

        cout << n-s.size() << endl;
        for (long long int i = 1; i <= n; i++)
        {
            if(s.find(i)==s.end()){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    
}


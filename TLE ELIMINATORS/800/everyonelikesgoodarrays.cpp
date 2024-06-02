// #include <iostream>
// #include <math.h>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        int temp;
        for(int i=0; i<n; i++){
            cin >> temp;
            v.push_back(temp);
        }
        int ops = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if((v[i]%2==1 && v[i+1]%2==1)|| v[i]%2==0 && v[i+1]%2==0){
                ops++;
            }
        }
        cout << ops << endl;
    }
    
}
#include <iostream>
// #include <climits>
// #include <algorithm>
// using namespace std;
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n,k;
        cin >> n>>k;
        if(n%2==0) cout << "YES" << endl;
        else{
            if(k%2==1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
}


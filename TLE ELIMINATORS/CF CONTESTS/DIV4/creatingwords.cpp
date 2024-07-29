#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if(a[0]==b[0]){
            cout << a <<" " <<b << endl;
        }
        else{
            swap(a[0], b[0]);
            cout << a <<" " <<b << endl;
        }
    }
    return 0;
}
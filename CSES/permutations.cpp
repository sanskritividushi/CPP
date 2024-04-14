#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    if(n==1){
        cout << "1" << endl;
        return 0;
    }
    if(n==2 || n==3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    if(n==4){
        for (int i = 2; i <=n; i += 2)
        {
            cout << i << " ";
        }
        for (int i=1; i<=n; i+=2){
            cout << i << " ";
        }
    }
    else{
        for(int i=n; i>=1; i-=2){
            cout << i << " ";
        }
        for (int i=n-1; i>=1; i-=2){
            cout << i << " ";
        }
    }
        return 0;
}
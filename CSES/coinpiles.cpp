//  #include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(a>b){
            swap(a, b);
        }
        if(2*a<b){
            cout << "NO" << endl;
        }
        else{
            a %= 3;
            b %= 3;
            if((a==0 && b==0) || (a==1 && b==2) || (a==2 && b==1)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
}
}
return 0;
}
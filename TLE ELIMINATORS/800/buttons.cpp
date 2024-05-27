//#include <iostream>
// #include <vector>
// #include <climits>
// #include <algorithm>
// using namespace std;
#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <numeric> 
using namespace std;

int main(){
    long int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        if(a==b && c%2==0){
            cout << "Second" << endl;
        }
        else if(a==b && c%2==1){
            cout << "First" << endl;
        }
        else if(a>b){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
    return 0;
}

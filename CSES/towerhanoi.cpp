#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
using namespace std;

void tower(int n, int left, int mid, int right){
    if(n==0){
        return;
    }
    tower(n - 1, left, right, mid);
    cout << left << " " << right << endl;
    // ans += 1;
    tower(n - 1, mid, left, right);
    // return ans;
}

int main(){
    int n;
    cin >> n;
    cout << (pow(2, n)-1) << endl;
    tower(n, 1, 2, 3);
    // tower(n, 1, 2, 3);
    return 0;
}

// #include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    unordered_set<long long int> visited;
    cout << n << " ";
    visited.insert(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } 
        else {
            n = n * 3 + 1;
        }
        cout << n << " ";
        // Check if the number is visited before
        if (visited.find(n) != visited.end()) {
            // If yes, break the loop to avoid infinite loop
            break;
        }
        visited.insert(n);
    }
    return 0;
}
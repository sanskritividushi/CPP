// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main(){
//     int n = 3;
//     char a[3][3]={{'a','b','c'},{'c','a','b'},{'b','?','a'}};
//     unordered_map<char,int> m;
//     for(int i=0; i<n; i++){
//         for (int j = 0; j < n; j++){
//             if(a[i][j]=='?'){
//                 continue;
//             }
//             else{
//                 m[a[i][j]]++;
//             }
//         }
//     }
//     char ans; 
//     for(auto it : m){
//         if(it.second == 2){
//             ans= it.first;
//             break; 
//         }
//     }
//     cout << ans;
//     return 0;
// }

// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        // Calculate the cost of buying all yogurts individually
        int costIndividual = n * a;

        // Calculate the cost of buying all yogurts in pairs using the promotion
        // Determine the number of pairs and the remainder
        int pairs = n / 2;
        int remainder = n % 2;
        int costPairs = pairs * b + remainder * a;

        // Choose the minimum cost between the two scenarios
        int minCost = min(costIndividual, costPairs);
        cout << minCost << endl;
    }

    return 0;
}

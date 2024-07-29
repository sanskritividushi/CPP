// //deep dive into dp framework
#include <iostream>
#include <cstring>
using namespace std;
long long int solve(int coins[], int N, int sum, int index){
        if(sum==0)return 1;
        if (sum < 0 || N <= 0 || index>=N) {
            return 0;
        }
        long long int pick=solve(coins,N,sum-coins[index],index);
        long long int notpick=solve(coins,N,sum,index+1);
        return pick+notpick;
}
long long int count(int coins[], int N, int sum) {
        return solve(coins, N,sum, 0);
    }

int main(){
    int N = 4, sum = 10;
    int coins[] = {2, 5, 3, 6};
    cout << count(coins, N, sum);
    return 0;
}

// int n;  // number of elements
// int t;  // target sum
// int x[101];
// int dp[105][10100]; // DP table with appropriate size

// int rec3(int level, int taken) {
//     // pruning
//     if (taken > t)
//         return 0;

//     // base cases
//     if (level == n) {  // correct the base case to 'level == n'
//         if (t == taken)
//             return 1;
//         else
//             return 0;
//     }

//     // cache check
//     if (dp[level][taken] != -1) {
//         return dp[level][taken];
//     }

//     // compute/transition
//     int ans = 0;
//     // don't take
//     if (rec3(level + 1, taken) == 1) {
//         ans = 1;
//     }
//     // take
//     else if (rec3(level + 1, taken + x[level]) == 1) {
//         ans = 1;
//     }

//     // save and return
//     return dp[level][taken] = ans;
// }

// int main() {
//     cin >> n; // Read the actual value of n
//     for (int i = 0; i < n; i++) {
//         cin >> x[i];
//     }
//     cin >> t; // Read the actual value of t
//     memset(dp, -1, sizeof(dp));
//     cout << rec3(0, 0); // Start from level 0 and taken 0
//     return 0;
// }

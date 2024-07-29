#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximizeSum(vector<int>& nums, int P) {
    int n = nums.size();
    // Initialize a 2D DP array
    vector<vector<int>> dp(n + 1, vector<int>(P + 1, 0));
    
    // Fill the DP table
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= P; ++j) {
            if (j <= i) {
                dp[i][j] = max(dp[i-1][j-1] + nums[i-1], dp[i-1][j-1] + nums[n-1-(i-1)]);
            }
        }
    }
    
    // Maximum sum with exactly P elements picked
    return dp[n][P];
}

int main() {
    vector<int> nums = {7, 3, 100, 1, 4, 9};
    int P = 3;
    
    int maxSum = maximizeSum(nums, P);
    
    cout << "Maximum sum achievable by picking exactly " << P << " elements: " << maxSum << endl;
    
    return 0;
}

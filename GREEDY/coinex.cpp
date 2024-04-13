#include <iostream>
using namespace std;

int change( int *coins, int n, int money){
    int ans = 0;
    while (money > 0)
    {
        int idx = upper_bound(coins, coins + n, money)-1 -coins;
        // cout << coins[idx] << " ";
        money-=coins[idx];
        ans++;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    // cout << sizeof(coins);
    int t = sizeof(coins) / sizeof(int);
    //cout << upper_bound(coins, coins + n, n) << endl;
    cout << change(coins, t, n) << endl;
    return 0;
}
//framework of dp problems
#include<iostream>
using namespace std;
    
//time skill problem
int n=5;
int t[1001];
int s[1001];
int x, k;
// int taken[1001];
//compress into fucntion to optimize
int dp[101][1001][101];

int rec3(int level, int timetaken, int itemtaken)
{ // max skill i can make from level->n-1
    // level=curr item in 0->n-1
    //pruning

    //basecases
    if(level==n)
        return 0;

    //cache check
    if(dp[level][timetaken][itemtaken]!=-1){
        return dp[level][timetaken][itemtaken];}

    //compute/transition
    //dont take
    int ans = rec3(level + 1, timetaken, itemtaken);
    //check and take
    if(timetaken+t[level]<=x && itemtaken+1<=k){
        ans = max(ans, s[level] + rec3(level + 1, timetaken + t[level], itemtaken + 1));
    }

    // save and return
    return dp[level][timetaken][itemtaken]=ans;
    //ans is first assigned to dp[][][] then dp[][][] is returned.
    
}
int main(){
    int n = 5;
    for (int i = 0; i < n; i++){
        cin >> t[i];
    }
    for (int i = 0; i < n; i++){
        cin >>s[i];
    }
    cin >> x >> k;
    memset(dp, -1, sizeof(dp));
    cout << rec3(0,0,0);
}
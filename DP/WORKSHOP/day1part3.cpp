//moving from recursion to DP
#include<iostream>
using namespace std;

//stairs
// int n=4;
// int rec(int level)
// {
//     //pruning
//     if(level>n)
//         return 0;
//     //base case
//     if(level==n)
//         return 1;
//     int ans = 0;
//     //choice loop
//     for (int step = 1; step <= 3; step++){
//         if(level+step<=n){
//             //check if cjoice valid
//             int ways = rec(level + step);
//             ans += ways;
//         }
//     }
//     return ans;
// }

// n queens
// int n = 4;
// int queen[20];
// bool check(int row,int col) {
//     for (int i = 0; i < row; i++){
//         int prow = i;
//         int pcol = queen[i];
//         if(pcol==col||abs(col-pcol)==abs(row-prow))
//             return 0; 
//     }
//     return 1;
// }
// int rec2(int level){
//     //level=row at which we are placing queen

//     //pruning

//     //basecase
//     if(level==n){
//         return 1;
//     }
//     //compute
//     int ans = 0;
//     //loop choices
//     for (int i = 0; i < n; i++){
//         //check choice validity
//         if(check(level, i)){
//             //place q
//             queen[level] = i;
//             //explore option
//             ans+=rec2(level + 1);
//             //backtrack
//             queen[level] = -1;
//         }
//     }
//     return ans;
// }

//time skill problem
int n=5;
int t[1001];
int s[1001];
int x, k;
int taken[1001];
bool check(int level){
    int timetaken = 0;
    int itemtaken = 0;
    for (int i = 0; i < level; i++){
        if(taken[i]){
            timetaken += t[i];
            itemtaken++;
        }
    }
    timetaken += t[level];
    itemtaken++;
    if(itemtaken<=x && itemtaken<=k){
        return 1;
    }
    else
        return 0;
}
int rec3(int level)
{ // max skill i can make from level->n-1
    // level=curr item in 0->n-1
    //pruning

    //basecase
    if(level==n)
        return 0;
    
    //compute
    //loop over choice
    //c1- dont take
    int ans = rec3(level + 1);
    //c2- take
    if(check(level)){
        //place change
        taken[level] = 1;
        //move
        ans=max(ans,s[level]+rec3(level + 1));
        //backtrack by reverting
        taken[level] = 0;
    }
    // return
    return ans;
}

int main()
{
    // cout << rec(0);

    // memset(queen, -1, sizeof(queen));
    // cout << rec2(0);

    int n = 5;
    for (int i = 0; i < n; i++){
        cin >> t[i] >> s[i];
    }
    cin >> x >> k;
    cout << rec3(0);
}
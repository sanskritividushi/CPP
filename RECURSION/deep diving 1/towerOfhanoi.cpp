#include<iostream>
using namespace std;

  
int towerOfHanoi(int n, char src, char dest, char help)
{
    if (n == 0) {
        return 0;
    }
    int ans = 0;
    ans += towerOfHanoi(n - 1, src, help, dest);
    cout << "Move " << n << " from " << src << " to " << dest << endl;
    ans += 1;
    ans+=towerOfHanoi(n - 1, help, dest, src);
    return ans;
}

int main()
{
    int N = 2;
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}
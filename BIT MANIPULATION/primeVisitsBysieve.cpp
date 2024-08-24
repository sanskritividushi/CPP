//to check prime from 1 to n
#include <iostream>
using namespace std;
#define ll long long

void sieve(int *p)
{
    for (int i = 3; i <= 1000000; i=i+2){
        p[i] = 1;
    }
    for (ll i = 3; i<= 1000000; i=i+2){
        if(p[i]==1){
            for (ll j = i*i; j <= 1000000; j=j+i){
                p[j]=0;
            } 
        }
    }
    p[2] = 1;
    p[0] = p[1] = 0;
}
int main(){

    // int n;
    // cin>>n;
    int p[1000005]={0};
    int csum[1000005]={0};
    sieve(p);
    for (int i = 1; i <= 1000000; i++){
        csum[i]=csum[i-1]+p[i];
    }
    int a, b;
    cin >> a >> b;
    cout << csum[b] - csum[a-1]<<endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     if (p[i] == 1)
    //     {
    //         cout << i << " ";
    //     }
    //     }
    return 0;
}

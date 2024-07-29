#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    if(a == 1 || b == 1){
        return 1;
    }
    if(b == 0){
        return a;
    }
    if(a == 0){
        return b;
    }
    return gcd(max(a, b) - min(a, b), min(a, b));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> ans;
        for (int i = 0; i < n - 1; i++){
            ans.push_back(gcd(a[i], a[i + 1]));
        }

        int ones = 0;
        int revones = 0;
        for (int i = 0; i < ans.size() - 1; i++)
        {
            if(ans[i]>=ans[i+1] && ans[i]>=ans[i-1]){
                ones++;
            }
            else if(ans[i]<=ans[i+1] && ans[i]<=ans[i-1]){
                revones++;
            }
        }
        if(ones>1 || revones>1){
            cout << "NO" << endl;
            break;
        }

        // int cts1s=0;
        // for (int i = 0; i < ans.size() - 1; i++){
        //     if(ans[i] > ans[i + 1] &&){
        //         flag = true;
        //         continue;
        //     }
        //     else{
        //         flag = false;
        //         break;
        //     }
        // }
        // if (flag && ans[0] == ans[ans.size() - 1])
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else if (flag)
        //     {
        //         cout << "NO" << endl;
        //     }
        //     else
        //     {
                int ctsnum = 0;
                for (int i = 0; i < ans.size() - 1; i++)
                {
                    if (ans[i] < ans[i - 1] && ans[i] == ans[i + 1])
                    {
                          ctsnum++;
                    }
                        if (ctsnum > 1)
                        {
                            cout << "NO" << endl;
                            break;
                        }
                    }
                }
                if (ctsnum <= 1)
                {
                    cout << "YES" << endl;
                }
                    return 0;
    }

#include <iostream>
#include <vector>
using namespace std;

int ksumsubseq(int i, vector<int>& ds, int s, int sum, int arr[], int n){
    if(i==n){
        if(s==sum){
            // for (int j=0; j<ds.size(); j++){
            //     cout << ds[j] <<" ";
            // }
            // cout << endl;
            return 1;
        }
        else return 0;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    int l=ksumsubseq(i+1, ds, s, sum, arr, n);

    s-=arr[i];
    ds.pop_back();
    int r=ksumsubseq(i+1, ds, s, sum, arr, n);
    return l+r;
}

int main(){
    int arr[] = {40,30,50, 20};
    int n = 4;
    int sum = 70;
    vector<int> ds;
    cout << ksumsubseq(0, ds, 0, sum, arr, n) << endl;
    return 0;
}
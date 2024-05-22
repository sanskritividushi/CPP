#include <iostream>
#include <vector>
using namespace std;

bool ksumsubseq(int i, vector<int>& ds, int s, int sum, int arr[], int n){
    if(i==n){
        if(s==sum){
            for (int j=0; j<ds.size(); j++){
                cout << ds[j] <<" ";
            }
            cout << endl;
            return true;
        }
        else return false;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    if(ksumsubseq(i+1, ds, s, sum, arr, n)==true) return true;

    s-=arr[i];
    ds.pop_back();
    if(ksumsubseq(i+1, ds, s, sum, arr, n)==true) return true;
    return false;
}

int main(){
    int arr[] = {40,30,50, 20};
    int n = 4;
    int sum = 70;
    vector<int> ds;
    ksumsubseq(0, ds, 0, sum, arr, n);
    return 0;
}
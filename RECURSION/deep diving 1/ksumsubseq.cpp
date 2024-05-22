#include <iostream>
#include <vector>
using namespace std;

void ksumsubseq(int i, vector<int>& ds, int s, int sum, int arr[], int n){
    if(i==n){
        if(s==sum){
            for (int j=0; j<ds.size(); j++){
                cout << ds[j] <<" ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    ksumsubseq(i+1, ds, s, sum, arr, n);

    s-=arr[i];
    ds.pop_back();
    ksumsubseq(i+1, ds, s, sum, arr, n);
    
}

int main(){
    int arr[] = {40,30,50, 20};
    int n = 4;
    int sum = 70;
    vector<int> ds;
    ksumsubseq(0, ds, 0, sum, arr, n);
    return 0;
}
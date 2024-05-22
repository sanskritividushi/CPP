#include <iostream>
#include <vector>
using namespace std;

void numsubseq(int i, vector<int> &ans, int arr[], int n){
    if(i==n){
        for(auto it:ans){
            cout << it << " ";
        }
        if(ans.size()==0){
            cout << "{}";
        }
        cout << endl;
        return;
    } 
    // Recursively call numsubseq for both choices
    ans.push_back(arr[i]);
    numsubseq(i + 1, ans, arr, n); // Don't take the index
    ans.pop_back();
    numsubseq(i + 1, ans, arr, n); // Take the index
}

int main(){
    int arr[]={3,1,2};
    int n = 3;
    vector<int> ans;
    numsubseq(0, ans, arr, n);
    return 0;
}

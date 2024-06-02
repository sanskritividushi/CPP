#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr, int s, int e){
    if(s>=e){
        return;
    }
    swap(arr[s], arr[e]);
    reverse(arr, s+1, e-1);
}

void reversehelp(vector<int> &arr) {
    reverse(arr, 0, arr.size() - 1);
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    reversehelp(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
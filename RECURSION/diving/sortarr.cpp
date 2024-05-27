#include <iostream>
#include <vector>
using namespace std;

void insertarr(vector<int> &arr, int temp) {
    if (arr.size() == 0 || arr[arr.size() - 1] <= temp) {
        arr.push_back(temp);
        return;
    }
    int val = arr[arr.size() - 1];
    arr.pop_back();
    insertarr(arr, temp);
    arr.push_back(val);
}

void sortarr(vector<int> &arr) {
    if (arr.size() <= 1) return;
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sortarr(arr);
    insertarr(arr, temp);
}

int main() {
    vector<int> arr = {4, 3, 5, 2, 1, 0};
    sortarr(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

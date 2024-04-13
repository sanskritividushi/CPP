#include <iostream>
#include <vector>
using namespace std;

void subsequences(int i, vector <int> &d, int in[], int n){
    if (i >= n)
    {
        for (auto it:d){
            cout << it << " ";
        }
        if(d.size()==0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    //rec cases
    //ignore i
    d.push_back(in[i]);
    subsequences(i+1, d, in, n);
    // take i
    d.pop_back();
    // subsequences(in, out, i + 1, j + 1, n);
    subsequences(i+1, d, in, n);
}
int main(){
    int in[] = {1, 2, 3, 4};
    int n = 4;
    vector<int> d;
    subsequences(0, d, in, 4);
    return 0;
}
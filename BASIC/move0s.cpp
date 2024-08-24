#include<iostream>
#include<vector>
using namespace std;

int solver(vector<int> &tasks){
    sort(tasks.begin(), tasks.end());
    int eff = INT_MIN;
    int t = 0;
    // int eff = n-(tasks[n-1]-tasks[0]);
    int i = 1, j = tasks.size() - 2;
    while(j-i>=1){
        int mindif = tasks[j] - tasks[i];
        if(mindif<eff){
            if(tasks[j-1]-tasks[i]>eff){
                j--;
            }
            else
                j++;
        }
        else{
            eff = max(eff, mindif);
            t = j - i + 1;
        }
            // int cases = j - i + 1;
            // if(cases - (tasks[j] - tasks[i])<eff){
            //     if(i-j+1>=2 && (cases-1 - (tasks[j] - tasks[i])))
            // }
            // eff = max(eff, cases - (tasks[j] - tasks[i]));
    }

    return eff-t;
}

int main() {
    vector<int> tasks = {9, 1,3,5,6}; // example input
    cout << solver(tasks) << endl;
    return 0;
}
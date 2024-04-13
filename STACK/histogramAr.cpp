#include <iostream> 
#include <vector>
#include <stack>
using namespace std;

class hist{

    private:
    vector <int> nextSmallerEl(vector<int> & arr1, int n){
    stack <int> s;
    s.push(-1);
    vector <int> ans(n);

    for (int i = n - 1; i >= 0; i--){
        int curr = arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop;
        }
        //ans is top of stack 
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
    vector <int> prevSmallerEl(vector<int> & arr1, int n){
        stack <int> s;
    s.push(-1);
    vector <int> ans(n);

    for (int i = 0; i < n; i++){
        int curr = arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop;
        }
        //ans is top of stack 
        ans[i]=s.top();
        s.push(i);
    }
    return ans;

    }
    public:
    int largestRectArea(vector <int> &heights){
        int n = heights.size();
        vector <int> next(n);
        next=nextSmallerEl(heights, n);

        vector <int> prev(n);
        prev= prevSmallerEl(heights, n);

        int area = INT_MIN;
        for (int i = 0; i < n; i++){
            int l = heights[i];
            if (next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area, newArea);
        }

        return area;
    }
};
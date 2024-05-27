#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve(stack <int>& s, int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s, k-1);
    s.push(temp);
    return;
}

void sortstack(stack <int>& s, int n){
    if(s.size()==0){
        return;
    }
    int k=n/2+1;
    solve(s, k);
    return;
}
int main(){
    stack <int>s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    int n = s.size();
    int k=n/2+1;

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    sortstack(s,n);

    while(!s.empty()){
        cout << s.top() << endl; 
        s.pop();
    }
    return 0;
}
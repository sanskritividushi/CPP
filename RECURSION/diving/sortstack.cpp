#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void insertst(stack <int>& s, int val){
    if(s.size()==0 || val > s.top()){
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    insertst(s, val);
    s.push(temp);
}

void sortstack(stack <int>& s){
    if(s.size()==1){
        return;
    }
    int val = s.top();
    s.pop();
    sortstack(s);
    insertst(s, val);
    return;
}
int main(){
    stack <int>s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    int n = s.size();
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    sortstack(s);

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
#include <iostream>
using namespace std;

void balanced(char *a, int i, int open, int close, int n){
    if(i==2*n){
        a[i] = '\0';
        cout << a << endl;
        return 0;
    }
    if(open<n){
        a[i] = '(';
        balanced(a, i+1, open+1, close, n);
    }
    if(open>close){
        a[i] = ')';
        balanced(a, i+1, open, close+1, n);
    }
}

int main(){
    int n;
    cin >> n;
    char a[1000];
    balanced(a, 0, 0, 0, n);
    return 0;

}
#include <iostream> 
using namespace std;

string reverseStr(string s, int n){
    if(n == 0){
        return "";
    }
    // char smallans = s[n - 1];
    return s[n-1]+reverseStr(s, n - 1);
}
int main(){
    string s = "hello";
    int n = 5;
    cout << reverseStr(s, n) << endl;
}
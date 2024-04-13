#include <iostream> 
using namespace std;

int dectobin(int n){
    if(n==0){
        return 0;
    }
    int res = n % 2;
    return res + 10 * dectobin(n / 2);
}
int main(){
    int n = 99;
    // string res = "";
    cout << dectobin(n) << endl;
}

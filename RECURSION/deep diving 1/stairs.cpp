#include <iostream>
using namespace std;

int noofstairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return noofstairs(n-1) + noofstairs(n-2) + noofstairs(n-3);
}

int main(){
    int n = 5;
    cout << noofstairs(n) << endl;
    return 0;
}
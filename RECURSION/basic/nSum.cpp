#include <iostream> 
using namespace std;

int sumn(int n){
    if(n==0){
        return 0;
    }
    return n+sumn(n-1);
}
int main(){
    int n = 5;
    cout << sumn(n);
}

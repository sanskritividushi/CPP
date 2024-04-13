#include <iostream>
using namespace std;

int stringtoint(char a[], int n){
    if(n==0){
        return 0;   
    }
    int dig = a[n - 1] - '0';
    //int smallerans= stringtoint(a, n-1);
    int biggerans = stringtoint(a, n-1) * 10 + dig;
    return biggerans;
}
int main(){
    char a[] = "4321";
    int n = strlen(a);
    int ans = stringtoint(a,n);
    cout << ans << endl;
    cout << ans + 1 << endl;
}
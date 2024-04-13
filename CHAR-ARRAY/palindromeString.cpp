#include <iostream> 
using namespace std;

bool ispalin(char a[]){
    int i=0;
    int j= strlen(a)- 1;
    while (i<j){
        if (a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    char a[1000];
    cin >>a;

    if (ispalin(a)== true){
        cout <<"Is a palindrome"<<endl;
    }
    else{
        cout <<"is not a palindrome"<<endl;
    }
    return 0;
}
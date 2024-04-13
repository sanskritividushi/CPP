//string in binary eithout consecutive ones
#include<iostream>
using namespace std;

int count(int n, int lastdigit){
    if(n==0){
        return 0;
    }
    if(n==1){
        if(lastdigit==0){
            return 2;
        }
        else{
            return 1;
        }
    }

    //rec code
    if(lastdigit==0){
        return count(n-1, 0) + count(n-1, 1);
    }
    else{
        return count(n-1, 0); 
    }
}
int main(){
    int n;
    cin >> n;

    cout << count(n, 0) << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a = 13;
    int i = 2;
    if ((a & (1 << i)) != 0)
    {
        cout << "true";
    }
    else{
        cout << "false";
    }
    
}
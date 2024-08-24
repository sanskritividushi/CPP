#include<iostream>
using namespace std;

int main(){
    // XOR 5^5=0
    // a=a^b;
    // b = a ^ b; = (a ^ b) ^ b = a^0 = a;
    // a = a ^ b; = (a ^ b) ^ b(this b is a because of prevous statement) = (a^b)^a= a^b^a(a and a get cancelled)=b
    int a = 20, b = 30;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b;
}
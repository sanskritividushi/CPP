#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main(){

    long long int n;
    cin>>n;

    long long int count = 0;
    long long int check = n;
    while (check>=1){
        check = check / 5;
        count = count + check;
    }
// for (long long int i = 5; n / i >= 1; i = i * 5)
// {
//     count += n / i;
// }
    cout << count;
}


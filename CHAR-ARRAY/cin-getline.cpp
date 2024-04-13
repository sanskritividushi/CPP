#include <iostream>
using namespace std;

// instead of using readline function, we can use alternative of getline. 
// this takes cin.getline(a,1000, '$') where a is the array, 1000 is the size of the array and '$' is the delimiter.


    // void readline(char a[], char delimiter){
    //     int i=0; 
    //     char ch=cin.get();

    //     while (ch!= delimiter){
    //         a[i]= ch; 
    //         i++;
    //         ch=cin.get();
    //     }
    //     a[i]='\0';
    // }
    int main(){
        char a[100];
        // readline(a, '#');

        cin.getline(a,100,'$');
        cout << a <<endl;

        return 0;
}


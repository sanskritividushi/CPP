#include <iostream> 
using namespace std;

int main(){
    char a[]={'a', 'b', 'c', 'd', '\0'};
    cout << a <<endl; 

    char b[16];
    b[0]='a';
    b[1]='e';
    b[2]='\0';
    cout << b <<endl;

    char c[]="welcome here!";
    cout << c <<endl;

    //ITERATE OVER ARRAY 
    char d[]="welcome here yall";
    for (int i=0; d[i]!='\0'; i++ ){
        cout << d[i] << " ";
    }


}
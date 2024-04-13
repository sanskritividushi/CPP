#include <iostream>
using namespace std;

int length(char a[]){
    int i;
    for (i=0; a[i]!='\0'; i++){
    }
    return i;
}
int main(){
    char a[1000];
    cin.getline(a,1000,'$');
    //method 1, using function
    int ans= length(a);
    cout << ans <<endl;
    
    //method 2, using inbuilt fucntion 
    cout << strlen(a) <<endl;

    return 0;
}

#include <iostream> 
using namespace std;

void rotatestr(char a[], int n){
    int len= strlen(a);
    int i= len-1; 
    cout << a<< endl;
    while(i>=0){
        a[i+n]= a[i];
        i--;
    }
    // cout << a<< endl;

    i=0; 
    int j=len; 
    while (i<n){
        a[i]= a[j];
        i++;
        j++;
    }
    // cout << a<< endl;
    a[len]='\0';
    
}

int main(){
    char a[]= "hello";
    int n=3; 

    rotatestr(a,n);
    cout << a<< endl;
    return 0;
}
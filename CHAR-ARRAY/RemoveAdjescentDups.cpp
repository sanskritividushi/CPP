#include <iostream> 
using namespace std;

void removedups(char a[]){
    int len= strlen(a);
    int i=0;
    int j=1;
    while(j<len){
        if(a[i]!= a[j]){
            i++;
            a[i]= a[j];
        }
        j++;
    }
    a[i+1]='\0';
    return;
}
int main(){
    char a[1000];
    cin.getline(a, 1000);
    cout << a << endl;
    removedups(a);
    cout << a <<endl;
}
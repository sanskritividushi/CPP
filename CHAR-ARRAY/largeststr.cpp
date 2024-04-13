#include <iostream> 
using namespace std;

void copy(char largest [], char a[]){
    //largest = largest arr, a= array we want to copy
    int len =strlen(a);
    for (int i=0; i<=len; i++){
        largest [i]= a[i];
    }
    return;
}
int main(){
    char a[1000];
    char largest [1000];
    int larg_len= 0;

    int n;
    cin >> n; //no of input strings 
    cin.get();
    
    for (int i=0; i<n; i++){
        cin.getline(a,1000);
        int len=strlen(a);

        if(larg_len < len){
            larg_len= len;
            copy(largest, a);
        }
    }
    cout << largest << endl; 
    cout << "len: " << larg_len <<endl;
    return 0;
}
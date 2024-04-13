#include <iostream> 
using namespace std;

bool palin(string a, int s, int e){
   if(s>e){
       return false;
   }
    if(a[s]==a[e]){
        palin(a, s + 1, e - 1);
    }
    if(a[s]!=a[e]){
        return false;
    }
    return true;
}
int main(){
    string a = "nitin";
    int n = 5;
    int s=0, e= n-1;
    if(palin(a,s,e)){
        cout << "is a palindrome" << endl;
    }
    else{
        cout << "not a palindrome" << endl;
    }
    return 0;
}
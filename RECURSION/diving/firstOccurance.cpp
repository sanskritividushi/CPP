#include <iostream> 
using namespace std;
int firstoccur(int *a, int n, int key){
    //base 
    if(n==0){
        return -1;
    }
    //recursive case
    if(a[0]==key){
        return 0;
    }
    int i=firstoccur(a+1, n-1, key);
    if(i==-1){
        //key not found
        return -1;
    }
    return i+1;
}

int firstocci(int *a,int n, int i, int k){
    if(i==n){
        return -1;
    }
    if(a[i]==k){
        return i;
    }
    return firstocci(a,n,i+1,k);
}
int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int n= sizeof(a)/sizeof(int);
    cout << firstoccur(a,n,5)<<endl;
    cout <<firstocci(a,n,0,5) << endl;
}
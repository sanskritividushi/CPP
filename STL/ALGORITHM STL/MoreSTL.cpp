#include <iostream> 
#include <algorithm> 
using namespace std;

int main(){
    int a[]={10,20,40,40,40,50,60};
    int n= sizeof(a)/sizeof(int);

    rotate(a, a+3, a+n);

    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout <<endl;

    rotate(a, a+1, a+n);
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }   
    cout <<endl;

    reverse (a, a+n);
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
 
    //swap(a,b), min(a,b), max(a,b) can also be used. 
    
}

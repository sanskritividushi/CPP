#include <iostream>
using namespace std;

int main(){
    int a[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {2,4,6,8}
    };

    int n=3; int m=4;
    for(int j=0; j<m; j++){
        if(j%2==0){
            for(int i=0; i<n; i++){
                cout<< a[i][j] <<" ";
            }
        }
        else{
            for(int i=n-1; i>=0;i--){
                cout << a[i][j] <<" ";
            }
        }
    }
    cout <<endl;
}
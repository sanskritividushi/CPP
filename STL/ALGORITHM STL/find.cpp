#include <iostream> 
#include <algorithm> 
using namespace std;
//find (start address, end address, key )
int main(){
int arr[]= {5,4,7,8,10};
int n= sizeof(arr)/ sizeof(int);

int key;
cin>>key; 

int *ans= find(arr, arr+n, key);

int indx= ans-arr;
if (indx ==n){
    cout << "key not found" <<endl;
}
else{
    cout << "key present at " << indx << endl;
}
}

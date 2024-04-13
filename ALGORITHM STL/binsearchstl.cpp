#include <iostream> 
#include <algorithm> 
using namespace std;

int main(){
int arr[]= {5,4,7,8,100};
int n= sizeof(arr)/ sizeof(int);

bool present = binary_search (arr, arr+n, 50);

if (present ==true){
    cout << "key found" <<endl;
}
else{
    cout << "key not found " << endl;
}
}
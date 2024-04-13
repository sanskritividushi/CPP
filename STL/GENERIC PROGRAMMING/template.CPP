#include <iostream> 
using namespace std;

template <typename T> 
int search(T arr[], int n, T key){
    for (int p = 0; p < n; p++){
        if(arr[p]==key){
            return p;
        }
    }
    return n;
}

int main(){
    float arr[] = {1, 2, 3, 4, 5.1};
    float k = 5.1;
    cout << search(arr, 5, k) << endl;
}
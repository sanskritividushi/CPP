#include <iostream>
using namespace std;

int main(){
    int arr[5]={3,1,5,6,2};
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int l1 = INT_MIN;
    int l2 = INT_MIN;
    int s1 = INT_MAX;
    int s2 = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>l1){
            l2 = l1;
            l1 = arr[i];
        }
        else if(arr[i]>l2 && arr[i]<l1){
            l2 = arr[i];
        }
        if(arr[i]<s1){
            s1 = s2;
            s1 = arr[i];
        }
        else if(arr[i]<s2 && arr[i]>s1){
            s2 = arr[i];
        }
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] == s2)
            arr[i] = l2;
        else if (arr[i] == l2)
            arr[i] = s2;
    }

    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


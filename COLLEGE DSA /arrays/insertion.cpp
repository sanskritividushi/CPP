#include <iostream>
using namespace std;
// #=free processor directive 
//insert at beginning 
#define size 10
int insertatstart(int arr[], int value, int noe){
    if(noe>=size){
        cout << "array full" <<endl;
        return noe;
    }
    for(int i=noe-1; i>=0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=value;
    noe=noe+1;
    return noe;
}

// int insertatend(int arr[], int value, int noe){
//     if(noe>=size){
//         cout << "array full" ;
//         return noe;
//     }
//     arr[noe-1]=value;
//     noe=noe+1;
//     return noe;
// }
int insertafterpos(int arr[], int value, int pos, int noe){
    if(noe>=size){
        cout << "full" <<endl;
        return noe;
    }
    for(int i=0; i<noe; i++){
        if(i==pos-1){
            for(int j=noe; j>=i; j--){
                arr[j]=arr[j-1]; 
            }
            arr[i]=value;
            noe=noe+1;
            return noe;
        }
    if(i==noe){
        cout << "not found" <<endl;
    }
    }
    return noe;
}


int endinsert(int arr[], int value, int noe){
    if(noe>=size){
        cout << "array overflow" <<endl;
        return noe;
    }
    arr[noe-1]=value;
    noe=noe+1;
    return noe;
}

int insertafterEL(int arr[], int value, int el, int noe){
    if(noe>=size){
        cout << "full" <<endl;
        return noe;
    }
    for(int i=0; i<noe; i++){
        if(arr[i]==el){
            for(int j=noe; j>i+1; j--){
                arr[j]=arr[j-1]; 
            }
            arr[i+1]=value;
            noe=noe+1;
            return noe;
        }
    if(i==noe){
        cout << "not found" <<endl;
    }
    }
    return noe;
}
int main(){
    int arr[size]={10,20,30,49};
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
    insertatstart(arr,3,5);
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
    endinsert(arr,55,6);
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
    insertafterpos(arr,7,2,7);
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
    insertafterpos(arr,71,4,8);
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
    // cout <<endl;
    // insertatend(arr,5,7);
    // for(int i=0; i<size; i++){
    //     cout << arr[i] <<" ";
    // }
    cout <<endl;
    
}
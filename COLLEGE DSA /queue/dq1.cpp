#include<iostream>
using namespace std;
//array implementation
#define max 10
int arr[max];
int front = -1, rear = -1;

void insertfront(int val){
    if((front==0) && (rear=max-1)){
        return;
    }
    else{
        for (int i = max; i >= 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = val;
        front = 0;
        rear = max-1;
    }
    
}
void display(){
    if (front==-1){
        cout << "queue is empty";
    }
    else{
        for(int i=front; i<=rear; i++){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    insertfront(1);
    insertfront(2);
    insertfront(3);
    insertfront(4);
    insertfront(5);
    cout << endl;
    display();
    // cout << endl;
    // deletefront();
    // deletefront();
    // display();
    // cout << endl;
    // isfull();
    // cout << endl;
    // isempty();
}
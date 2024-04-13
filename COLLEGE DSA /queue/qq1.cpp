#include<iostream>
using namespace std;
//array implementation
#define max 10
int q[max];
int front = -1, rear = -1;
void insertq(int val){
    if(rear==max-1){
        return;
    }
    else{
        if(front==-1){
            front = 0;
            rear = rear + 1;
            q[rear] = val;
        }
        else{
            rear = rear + 1;
            q[rear] = val;
        }
    }
}
void deleteq(){
    if(front==-1 || front>rear){
        return;
    }
    else{
        cout << q[front] << endl;
        front++;
    }
}
void isfull(){
    if(rear==max-1 && front==0){
       cout << "queue is full";
    }
    else{
        cout << "queue is not full";
    }
}

void isempty(){
    if(front==-1){
        cout << "queue is empty";
    }
    else{
        cout << "queue is not empty";
    }
}

void display(){
    if (front==-1){
        cout << "queue is empty";
    }
    else{
        for(int i=front; i<=rear; i++){
            cout << q[i] << " ";
        }
    }
}

int main(){
    insertq(1);
    insertq(2);
    insertq(3);
    insertq(4);
    insertq(5);
    cout << endl;
    display();
    cout << endl;
    deleteq();
    deleteq();
    display();
    cout << endl;
    isfull();
    cout << endl;
    isempty();
}


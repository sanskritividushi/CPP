#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;
    }
};

class qq{
    public:
    node *front;
    node *rear;
    int size;
    qq(){
        front = rear = NULL;
        size = 0;
    }

bool isempty(){
    return (front == NULL);
}

int getsize(){
    return size;
}
void enqueue(int d){
    if(front==NULL){
        front = rear = new node(d);
    }
    else{
        node *nn = new node(d);
        rear = front;
        while (rear->next != NULL)
        {
            rear = rear->next;
        }
        rear->next = nn;
        rear = nn;
    }
}

void dequeue(){
    if(front==NULL){
        return;
    }
    else{
        node *temp = front;
        cout << temp->data << " deleted " << endl;
        front = front->next;
        delete temp;
    }
}

void displayqueue(){
    if(front==NULL){
        return;
    }
    else{
        node *temp = front;
        while(temp->next!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
};

int main(){
    qq q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.displayqueue();
    q.dequeue();
    q.displayqueue();
    return 0;
}




#include<iostream>
using namespace std;

//array implementation
#define max 10
int q[max];
int front = -1, rear = -1;

void insertcq(int val){
    if(front==0 &&  rear==max-1){
        return;
    }
    if(front==-1){
        front = 0;
    }
    if(rear==max-1){
        rear = 0;
    }
    else{
        rear = rear + 1;
        q[rear]=val;
    }
}

void deletecq(){
    if(front==-1 || front>rear){
        cout << "queue is empty" << endl;
    }
    else{
        cout<<q[front]<<endl;
        front++;
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
    insertcq(1);
    insertcq(2);
    insertcq(3);
    display();
    cout << endl;
    deletecq();
    display();
}



// // //linked list implementation of queues
// class node{
//     public:
//     int data; 
//     node*next;

//     node(int d){
//         data=d;
//         next= NULL;
//     }
// };

// class cq{
//     public:
//     node* front;
//     node* rear;


//     cq(){
//         front = rear = NULL;
//     }


// void insertq(int d){
//     if(front==NULL){
//         rear = front = new node(d);
//         return;
//     }
//     rear = front;
//     node *temp = new node(d);
//     while(rear->next!=NULL){
//         rear=rear->next;
//     }
//     rear->next=temp;
//     rear=temp;
// }

//   void deleteq (){
//     if (front == NULL){
// 	    cout << "Queue is empty." << endl;
//     }
//     else if (front == rear){
//         node *temp = front;
//         front = rear = NULL;
//         delete temp;
//     }
//     else{
//         node *temp = front;
//         front = front->next;
//         rear->next = front;
//         delete temp;
//     }
//   }


// void displayqueue(){
//     if(front==NULL){
//         return;
//     }
//     else{
//         node *temp = front;
//         while(temp!=rear->next){
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// }

// //   void display (){
// //     if (front == nullptr){
// // 	    cout << "Queue is empty." << endl;
// //     }
// //     else{
// //         node *temp = front;
// //         cout << "Circular Queue: ";
// // 	do{
// // 	    cout << temp->data << " ";
// // 	    temp = temp->next;
// // 	}
// // 	while (temp != front);
// // 	cout << endl;
// //       }
// //   }
// };

// int main(){
//     cq q;
//     q.insertq(10);
//     q.insertq(20);
//     q.insertq(30);
//     q.displayqueue();
//     q.deleteq();
//     q.displayqueue();
// }



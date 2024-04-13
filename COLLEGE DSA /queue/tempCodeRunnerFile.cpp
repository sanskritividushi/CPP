


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



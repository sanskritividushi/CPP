#include <iostream> 
using namespace std;
//circular linked lists
class node{
    public:
    int data; 
    node* next;
    
    node(int d){
        this->data=d;
        this->next=NULL;

    }
};

void insertAtHead(node*&head , int d){
    if(head==NULL){
        head = new node(d);
        head->next = head;
    }

    node *temp = new node(d);
    node*tail=head;
    temp->next = head;
    if(tail!=NULL){
    while(tail->next!=head){
        tail= tail->next;
    }
    tail->next = temp;
    }
    head=temp;
}

for (int i = 0; i<n; i++){
    head = curr->next;
    tail->next = curr;
    curr->next = NULL;
    tail = curr;
    curr = head;
}
    void insertAtTail(node *&head, int d)
    {
        if (head == NULL)
        {
            head = new node(d);
            head->next = head;
        }
        node *temp = new node(d);
        temp->next = head;

        node *tail = head;
        while(tail->next!=head){
            tail= tail->next;
        }
    tail->next = temp;
}
void reverse(node*&head){
    if(head==NULL || head->next==NULL){
        return;
    }
    node* c=head;
    node* p=NULL;
    node*N;
    while(c!=head){
        N=c->next;
        c->next=p;
        p=c; 
        c=N;
    }
    head->next=p;
}
// node*reverse(node*&head){
//     if (head==NULL|| head->next==NULL){
//         return head;
//     }
//     node*rest=reverse(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return rest;
// }
//     node *curr = head;
//     node *prev = NULL;
//     node *next = curr->next;
//     curr ->next = prev;
//     if(next->next==NULL){
//         next ->next = curr;
//     }
//     return reverse(head->next);
// }

void print(node*head){ //passing by value 
    node*temp=head;
    while(temp->next!=head){
        cout <<temp->data << "->" ;
        temp= temp-> next;
    }
    return;
}

int main(){
    node *head = NULL;
    // node *tail = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtTail(head, 5);
    print(head);
    cout << endl;
    reverse(head);
    print(head);
    return 0;
}
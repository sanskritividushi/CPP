#include <iostream> 
using namespace std;
//Method1: find l and iterative from n-k times from beginning 
//2 traverse using fast and slow ptrs . fast ptr jumps at k interval 

class node{
    public:
    int data; 
    node*next;

    node(int d){
        data=d;
        next= NULL;
    }
};

void insertHead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}

node* takeinput(){
    int d; 
    cin>>d;
    node*head= NULL;

    while(d!=-1){
        insertHead(head,d);
        cin>>d;
    }
    return head;
}


void print(node*head){ //passing by value 
    while(head!=NULL){
        cout << head-> data << "->" ; 
        head= head-> next;
    }
    cout <<endl;
}

void operator<<(ostream &os, node*head){ 
    print(head);
    return;
}
void operator>>(istream &is, node*&head){
    head=takeinput();
    return;
}
void kthFromEnd(node*head, int k){
    node*slow=head;
    node*fast=head;
    for(int i=0; i<k; i++){
        fast=fast->next;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    cout << slow->data <<" ";
}


int main(){
    node*head;
    cin>> head;
    cout << head; 

    kthFromEnd(head,4);
    // cout << mid->data <<endl;
}
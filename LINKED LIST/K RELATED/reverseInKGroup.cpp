#include <iostream> 
using namespace std;

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

void operator<<(ostream &os, node*head){ //os is another name for cout
    print(head);
    return;
}
void operator>>(istream &is, node*&head){
    head=takeinput();
    return;
}

node* Kreverse(node*head, int k){
    //base call
    if(head==NULL){
        return NULL;
    }
    //step 1:reverse forst k nodes
    node*next=NULL;
    node*curr=head;
    node*prev=NULL;
    int count=0;

    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next; 
        count++;
    }

    //recursion 
    if(next!=NULL){
        head->next=Kreverse(next,k);
    }
    //return head of reversed LL
    return prev;
}

int main(){
    node*head;
    cin>> head;
    cout << head;
    node*newhead= Kreverse(head,3);
    cout << newhead;
} 
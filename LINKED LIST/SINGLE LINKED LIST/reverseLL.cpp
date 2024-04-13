#include <iostream> 
using namespace std;

//swapping data is exensive op so dont try to swap in reversing a LL
//we want current node to point to previous node
//store the address of current node 
//n= c->next, c->next=prev
//prev=curr, curr=next

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

void reverse(node*&head){
    node* c=head;
    node* p=NULL;
    node*N;
    while(c!=NULL){
        //save the address of next node
        N=c->next;
        //make curr node point to prev node
        c->next=p;
        //update prev and curr, take them 1 step forward 
        p=c; 
        c=N;
    }
    head=p;
}

int main(){
    node*head;
    cin>> head;
    cout << head;
    reverse(head);
    cout <<head;
}
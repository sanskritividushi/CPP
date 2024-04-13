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

node* merge(node*a, node*b){
    //bqse cqase
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    //take head pointer 
    node*c;
    if(a->data < b->data){
        c=a;
        c->next= merge(a->next, b);
    }
    else{
        c=b;
        c->next= merge(a ,b->next);
    }
    return c;
}

int main(){
    node*head;
    cin>> head;
   
    node*head2;
    cin>> head2;

    cout << head;
    cout << head2;
    
    node* newhead=merge(head,head2);
    cout <<newhead;
}
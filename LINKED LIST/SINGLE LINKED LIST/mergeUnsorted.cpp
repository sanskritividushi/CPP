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
node*midpoint(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node*slow=head;
    node*fast=head;
    //fast!=null and fast->next != null is the condition for while 
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
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

//take midpoint and divide LL
//recursive sort left and right 
//merge

node* mergeSort(node*head){
    //bqse cqase
    if(head==NULL or head->next==NULL){
        return head;
    }
    //rec case 
    //1. break
    node* mid= midpoint(head);
    node* a=head;
    node* b=mid->next;
    
    mid->next=NULL;
    //rec sort of the two left n right parts 
    a=mergeSort(a);
    b=mergeSort(b);
    //merge both
    node*c=merge(a,b);
    return c;
}

int main(){
    node*head;
    cin>> head;
    // node*head2;
    // cin>> head2;

    cout << head;
    // cout << head2;

    node* newhead=mergeSort(head);
    cout <<newhead;


}
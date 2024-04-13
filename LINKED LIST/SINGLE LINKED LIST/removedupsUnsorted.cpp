#include <iostream> 
using namespace std;
//traverse list, curr and head ptr at head. increase head. check el at head and curr pos. if head==curr, remove curr data, connect next of curr to next of next 

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

node* removefromUnsorted(node*head){
    //empty list 
    if(head==NULL){
        return NULL;
    }
    //non empty list 
    node*curr=head;
 
    while(curr!=NULL){
        if((curr->next!=NULL) && curr->data==curr->next->data){
            node* nextnext= curr->next->next;
            node* nodetodelete=curr->next;
            delete(nodetodelete);
            curr->next= nextnext;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

int main(){
    node*head;
    cin>> head;
    cout << head;
    removefromSorted(head);
    cout << head;
} 
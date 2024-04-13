#include <iostream>
#include <queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* build_tree(){
    int d;
    cin >> d;

    if(d==-1){
        return NULL;
    }
    node*root = new node(d);
    root->left = build_tree();
    root->right = build_tree();
    return root;
}

void print(node*root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
int count(node*root){
    if(root==NULL){
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

void bfss(node*root){
    queue<node*> q; 
    //datatype of queue isnt int because we need the address of the node or the node datatype to identify with node gets push, the data of node doesnt benefit us here
    q.push(root);
    q.push(NULL); //acts as a separator, lets us know that the level ends here. when we see null we endl and change the line foir thenext level


    while(!q.empty()){
        node *f = q.front();

        if(f==NULL){
            cout << endl; //null spotted so line changed 
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << f->data << " ";
            q.pop();

            if (f->left)
            {
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }

    return;
}

int main(){
    node *root = build_tree();
    bfss(root);
    return 0;
}
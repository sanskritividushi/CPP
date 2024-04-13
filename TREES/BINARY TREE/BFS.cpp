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

void printInorder(node*root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void printPostorder(node*root){
    if(root==NULL){
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

int ht(node*root){
    if(root==NULL){
        return 0;
    }
    int ls= ht(root->left);
    int rs= ht(root->right);
    return max(ls, rs) + 1;
}

void printKthlevel(node*root, int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout << root->data << " ";
        return;
    }
    printKthlevel(root->left, k-1);
    printKthlevel(root->right, k-1);
    return;
}

void printAlllevel(node*root){
    int h = ht(root);
    for (int i=1; i<=h; i++){
        printKthlevel(root, i);
        cout << endl;
    }
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
 
    while(!q.empty()){
        node *f = q.front();
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

    return;
}

int main(){
    node *root = build_tree();
    bfss(root);
    return 0;
}
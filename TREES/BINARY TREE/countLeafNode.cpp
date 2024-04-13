#include <iostream>
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

void inorder(node*root, int &count){
    if(root==NULL){
        return;
    }
    inorder(root->left, count);
    if(root->left==NULL && root->right==NULL){
        count++;
    }
    inorder(root->right, count);
}
int noofleafnodes(node*root){
    int count=0;
    inorder(root, count);
    return count;
}

int main(){
    node *root = build_tree();
    print(root);
    cout << endl;
    cout <<noofleafnodes(root) <<endl;

    return 0;
}
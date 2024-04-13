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

node *lca(node *root, int a, int b){
    if(root==NULL){
        return NULL;
    }
    if(root->data==a || root->data==b){
        return root;
    }
    //search in L and R subtree
    node *left = lca(root->left, a, b);
    node *right = lca(root->right, a, b);
    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left!=NULL){
        return left;
    }
    return right;
}
//finidng level of given node from curr node 
int search(node *root, int k, int level){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return level;
    }
    int ls= search(root->left, k, level+1);
    if(ls!=-1){
        return ls;
    }
    return search(root->right, k, level+1);
}
//fn to find shortest distance between 2 nodes
int shortest(node *root, int a, int b){
    node*lca_node= lca(root, a, b);
    int level_a= search(lca_node, a, 0);
    int level_b= search(lca_node, b, 0);

    return level_a+level_b;
}
int main(){
    node *root = build_tree();
    printAlllevel(root);
    cout << endl;

    cout << shortest(root, 7, 8) <<endl;
    return 0;
}

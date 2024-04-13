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
int dia(node*root){
    if(root==NULL){
        return 0;
    }
    int ls= ht(root->left); //h1 
    int rs= ht(root->right); //h2
    int op1 = ls + rs;
    int op2 = dia(root->left);
    int op3= dia(root->right);

    return max(op1,max(op2, op3));
}

void rightview(node*root, int level, int &max_level){
    if(root==NULL){
        return;
    }
    if(max_level<level){
        cout << root->data << " ";
        max_level = level;
    }
    rightview(root->right, level+1, max_level);
    rightview(root->left, level+1, max_level);
    
}

int main(){
    node *root = build_tree();
    printAlllevel(root);
    int max_level = -1;
    rightview(root, 1, max_level);

    return 0;
}

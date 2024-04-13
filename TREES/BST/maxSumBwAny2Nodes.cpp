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
class Pair{
public:
    int branchSum;     // sum starting from root to any node
    int maxsum; // sum passing thru root across L and R subtree
    Pair(){
        branchSum=0;
        maxsum=0;
    }
};

Pair maxsumpath(node *root) //optimised 
{
    Pair p;
    if(root==NULL){
        return p;
    }
    Pair left = maxsumpath(root->left);
    Pair right = maxsumpath(root->right);

    //construct values
    int op1 = root->data;
    int op2 = left.branchSum + root->data;
    int op3 = right.branchSum + root->data;
    int op4 = left.branchSum + right.branchSum + root->data;

    int currentAnsThruRoot= max(op1,max(op2, max(op3, op4)));

    //branchsumn for curr root node
    p.branchSum = max(left.branchSum, max(right.branchSum,0)) + root->data;
    p.maxsum = max(left.maxsum, max(right.maxsum, currentAnsThruRoot));

    return p;
}

int main(){
    node*root= build_tree();
    printAlllevel(root);
    cout << maxsumpath(root).maxsum << endl;
}
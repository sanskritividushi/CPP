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
    int height;
    int diameter;
};

Pair diameter1(node *root) //optimised 
{
    Pair p;
    if(root==NULL){
        p.diameter = p.height=0;
        return p;
    }
    Pair left = diameter1(root->left);
    Pair right = diameter1(root->right);

    p.height = max(left.height, right.height) + 1;
    p.diameter =max(left.height + right.height , max(left.diameter, right.diameter));
    return p;
}

int main(){
    node*root= build_tree();
    printAlllevel(root);
    // cout << dia(root); 
    Pair p= diameter1(root);
    cout << p.height << endl;
    cout << p.diameter << endl;
}



//GFG
class Solution {
  public:
    
    pair <int, int> diam(Node*root){
        if(root==NULL){
            pair <int,int> p= make_pair(0,0);
            return p;
        }
        pair <int, int> left= diam(root->left);
        pair <int, int> right= diam(root->right);
        
        int op1= left.first;
        int op2= right.first;
        int op3= left.second+right.second +1;
        
        pair <int,int> ans;
        ans.first= max(op1, max(op2, op3));
        ans.second= max(left.second , right.second) +1;
        return ans;
    }
    
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        return diam(root).first;
    }
};
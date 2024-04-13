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

int main(){
    node *root = build_tree();
    // // print(root);
    // printInorder(root);
    // cout << endl;
    // printPostorder(root);
    // cout << endl;
    // cout << ht(root) << endl;
    printAlllevel(root);
    return 0;
}

//USING QUEUE, BFS LOGIC

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
    
    vector <int> result;
    if(node==NULL){return result;}
    
    queue <Node*> q;
    q.push(node);
    
    while(!q.empty()){
        Node*node=q.front();
        result.push_back(node->data);
        q.pop();
    
    if(node->left!=NULL){
        q.push(node->left);
    }
    if(node->right!=NULL){
        q.push(node->right);
    }
    }
    return result;
      
    }
};
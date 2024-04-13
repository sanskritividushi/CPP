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


node* inprebuild(int *in,int *pre, int s, int e){
    static int i = 0;
    //base
    if(s>e){
        return NULL;
    }
    //rec
    node*root= new node(pre[i]);

    int index = -1;
    for (int j = s; s <= e; j++){
        if(in[j]==pre[i]){
            index = j; 
            break;
        }
    }

    i++;
    root->left = inprebuild(in, pre, s, index - 1);
    root->right=inprebuild(in, pre, index+1, e);
    return root;
}

void printAtDistKBelowtarget(node*root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout << root->data << " ";
        return;
    }
    printAtDistKBelowtarget(root->left, k-1);
    printAtDistKBelowtarget(root->right, k-1);
    return;
}

int AllNOdesatDistK(node*root,node*target, int k){
    //base case
    if(root==NULL){
        return -1;
    }
    //reach target node
    if(root==target){
        printAtDistKBelowtarget(target, k);
        return 0; 
    }

    //back to check fron ancestirs
    int distleft= AllNOdesatDistK(root->left,target, k);
    
    if(distleft!=-1){
        //again 2 cases
        //ancestor itself or move to right of ancestor

        if(distleft+1==k){
            cout << root->data << " ";
        }
        else{
            printAtDistKBelowtarget(root->right, k-distleft-2);
        }
        return distleft+1;
    }

    int distright= AllNOdesatDistK(root->right,target, k);
    if(distright!=-1){
        if(distright+1==k){
            cout << root->data << " ";
        }
        else{
            printAtDistKBelowtarget(root->left, k-distright-2);
        }
        return distright+1;
    }
    //node wasnt present at left or right
    return -1;
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
int main(){
    node *root = build_tree();
    printAlllevel(root);
    cout << endl;

    cout << lca(root, 10, 8)->data << endl; //->data is used isnce function is returning address of the node

    return 0;
}

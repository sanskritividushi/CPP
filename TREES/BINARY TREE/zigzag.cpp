#include <iostream>
using namespace std;

class solution{
    public:
    vector <int> zigzag(node*root){
        vector<int> result; 
        if(root==NULL){
            return result;
        }
        queue < node *> q;
        q.push(root);

        bool LtoR = true;
        while(!q.empty()){
            int size = q.size();
            vector<int> ans(size);

            for (int i = 0; i < size; i++){
                node *f = q.front();
                q.pop();

                int index= LtoR ? i : size-i-1;
                ans[index] = f->data;

                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }
            }
            LtoR = !LtoR;
            for(auto i:ans){
                result.push_back(i);
            }
        }
        return result;
    }
}
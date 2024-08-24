#include <iostream>
#include <math.h>
using namespace std;

class node{
    public:
    int val;
    node *left;
    node *right;
    node(int val){
        this->val = val;
        node *left = NULL;
        node *right = NULL;
    }
};

int height(node*root){
    if(!root)
        return 0;
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs) + 1;
}

int diam(node*root){
if(!root)
    return 0;
int ls = height(root->left);
int rs = height(root->right);
int op1 = diam(root->left);
int op2 = diam(root->right);
int op3 = ls + rs + 1;
return max(op1, max(op2, op3));
}

void printRLE(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++) {
 
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        cout << str[i] << count;
    }
}

int main()
{
    string str = "3";
    int ans = 0;
    for (int i = 0; i < str.size(); i++)
    {
        ans = ans * 10 + (str[i] - '0');
    }
    string str2 = "4";
    int ans2 = 0;
    for (int i = 0; i < str2.size(); i++)
    {
        ans2 = ans2 * 10 + (str2[i] - '0');
    }

    cout << ans << " " << ans2 << endl;
    int sum = ans + ans2;
    string bin = "";
    while (sum != 0)
    {
        int bit = sum & 1;
        bin += to_string(bit);
        sum = ans >> 1;
    }
    return 0;
}
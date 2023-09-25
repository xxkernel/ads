#include<bits/stdc++.h> //INCORRECT
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    // TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* newNode(int x){
    TreeNode* root = new TreeNode();
    root->val = x;
    root->left, root->right = NULL;
    return root;
}

TreeNode* insert(TreeNode *root, int x){
    if(!root){
        root = newNode(x);
    }
    else if((root->val)>x){
        root->left = insert(root->left,x);
    }
    else{
        root->right = insert(root->right, x);
    }
    return root;
}

int maxHeight(TreeNode *root){
    if(root==NULL){
        return 0;
    }
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int res = max(l, r)+1;
    return res;
}

int main(){
    TreeNode* root = NULL;
    vector<int>v{3,9,20,NULL,NULL,15,7};
    for(int i = 0;i<v.size();i++){
        root = insert(root, v[i]);
    }
    int max_height = maxHeight(root);
    cout<<max_height;
}
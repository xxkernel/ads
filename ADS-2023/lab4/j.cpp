#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x=0){
        this->val = x;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* insertNode(TreeNode* root, int x){
    if(root==NULL){
        return new TreeNode(x);
    }
    if(x<=root->val){
        root->left = insertNode(root->left, x);
    }
    else{
        root->right = insertNode(root->right, x);
    }
    return root;
}

int heightOfNode(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int l = heightOfNode(root->left);
    int r = heightOfNode(root->right);
    return max(r,l)+1;
}
void pushIn(TreeNode* root, vector<TreeNode*> &v){
    if(root==NULL){
        return;
    }
    pushIn(root->left, v);
    v.push_back(root);
    pushIn(root->right, v);
}

bool whetherBalanced(TreeNode* root){
    if(root==NULL){
        return true;
    }
    int l = heightOfNode(root->left);
    int r = heightOfNode(root->right);
    int res = abs(l-r);
    return res<=1;
}

void printNode(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    printNode(root->left);
    printNode(root->right);
}

TreeNode* buildTree(vector<TreeNode*>&v, int l, int r){
    if (l > r){
        return NULL;
    }
    int mid = (r + l)/2;
    TreeNode* root = v[mid];
    root -> left = buildTree(v, l, mid - 1);
    root -> right = buildTree(v, mid + 1, r);
    return root;
}
TreeNode* tree(TreeNode* root){
    vector<TreeNode*>v;
    pushIn(root, v);
    int n = v.size();
    return buildTree(v, 0, n-1);
}
int main(){
    TreeNode* root = NULL;
    int n;cin>>n;
    int sz = 1;
    for(int i = 0;i<n;i++){
        sz*=2;
    }
    for(int i = 0;i<sz-1;i++){
        int num;cin>>num;
        root = insertNode(root, num);
    }
    root = tree(root);
    printNode(root);
}
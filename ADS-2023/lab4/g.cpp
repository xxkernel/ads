#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x = 0){
        this->val = x;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* insertNode(TreeNode* root, int x){
    if(root==NULL){
        return new TreeNode(x);
    }
    if(root->val==x){
        return root;
    }
    // if(root->val>=x){
    //     root->left = insertNode(root->left, x);
    // }
    // else{
    //     root->right = insertNode(root->right, x);
    // }
    if(root->val<x){
        root->right = insertNode(root->right, x);
    }
    else{
        root->left = insertNode(root->left, x);
    }
    return root;
}

int getHeight(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int l = getHeight(root->left);
    int h = getHeight(root->right);
    int res = max(l,h)+1;
    return res;
}

int getWidth(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int heights = getHeight(root->left)+getHeight(root->right)+1;
    int width = max(getWidth(root->left), getWidth(root->right));
    return max(heights, width);
}

int main(){
    TreeNode* root = NULL;
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        root = insertNode(root, num);
    }
    cout<<getWidth(root);
}
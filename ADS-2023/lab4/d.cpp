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

void sumOfLevels(TreeNode* root, int level, vector<int>&v){
    if(root==NULL){
        return;
    }
    v[level]+=root->val;
    sumOfLevels(root->left, level+1, v);
    sumOfLevels(root->right, level+1, v);
}

void printNode(TreeNode* root){
    if(root==NULL){
        return;
    }
    printNode(root->left);
    cout<<root->val<<" ";
    printNode(root->right);
}

int main(){
    TreeNode* root = NULL;
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        root = insertNode(root, num);
    }
    vector<int>v(heightOfNode(root));
    cout<<v.size()<<endl;
    sumOfLevels(root, 0, v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
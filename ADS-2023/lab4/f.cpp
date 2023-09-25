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

int countTri(TreeNode* root, int x){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 0;
    }
    x = root->left!=NULL && root->right!=NULL;
    return x+countTri(root->left, x)+countTri(root->right,x);
}

int main(){
    TreeNode* root = NULL;
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        root = insertNode(root, num);
    }
    cout<<countTri(root, 0);
}
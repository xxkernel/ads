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

int main(){
    TreeNode* root = NULL;
    int n;cin>>n;
    int size = pow(2, n)-1;
    vector<int>v;
    for(int i = 0;i<size;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    for(int i = 0;i<v.size();i++){
        root = insertNode(root, v[i]);
        for(int j = 0;j<v.size();j++){
            if(i!=j){
                root = insertNode(root, v[j]);
            }
        }
        if(whetherBalanced(root)){
            printNode(root);
            return 0;
        }
        root = NULL;
    }
}
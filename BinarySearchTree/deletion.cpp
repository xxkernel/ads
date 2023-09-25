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
    if(root->val>=x){
        root->left = insertNode(root->left, x);
    }
    else{
        root->right = insertNode(root->right, x);
    }
    return root;
}
TreeNode* findMin(TreeNode* root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}
TreeNode* deleteNode(TreeNode* root, int x){
    if(root==NULL){
        return root;
    }
    else if(x<root->val){
        root->left = deleteNode(root->left, x);
    }
    else if(x>root->val){
        root->right = deleteNode(root->right, x);
    }
    else{
        // Case 1: No child
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }

        // Case 2: one child
        else if(root->left == NULL){
            TreeNode* temp = root;
            root = root->right;
            delete temp;
        }
        // else if(root->left = NULL){
        //     root->right = root->right->right;
        // }
        else if(root->right == NULL){
            TreeNode* temp = root;
            root = root->left;
            delete temp;
        }
        // else if(root->right == NULL){
        //     root->left = root->left->left;
        // }
        // Case 3: one child
        else{
            TreeNode* temp = findMin(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
    }
}
int main(){
    int n;cin>>n;
    TreeNode* root = NULL;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        root = insertNode(root, num);
    }
}
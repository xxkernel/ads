#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    int counter;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x = 0){
        this->val = x;
        this->counter = 1;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* insertNode(TreeNode* root, int x){
    if(root==NULL){
        return new TreeNode(x);
    }
    if(root->val == x){
        root->counter++;
        return root;
    }
    if(root->val>x){
        root->left = insertNode(root->left, x);
    }
    else if(root->val<x){
        root->right = insertNode(root->right, x);
    }
    return root;
}

TreeNode* deleteNode(TreeNode* root, int x){
    if(root==NULL){
        return root;
    }
    if(root->val == x){
        if(root->counter>=1){
            root->counter--;
        }
        return root;
    }
    else if(root->val>x){
        root->left = deleteNode(root->left, x);
        return root;
    }
    else if(root->val<x){
        root->right = deleteNode(root->right, x);
        return root;
    }
    return root;
}

int cnt(TreeNode* root, int x){
    if(root==NULL){
        return 0;
    }
    else if(root->val == x){
        return root->counter;
    }
    else if(root->val>x){
        return cnt(root->left, x);
    }
    else if(root->val<x){
        return cnt(root->right, x);
    }
    return 0;
}
int main(){
    int n;cin>>n;
    TreeNode* root = NULL;
    for(int i = 0;i<n;i++){
        string s;cin>>s;
        int num;cin>>num;
        if(s=="delete"){
            root = deleteNode(root, num);
        }
        if(s=="insert"){
            root = insertNode(root, num);
        }
        if(s=="cnt"){
            cout<<cnt(root, num)<<endl;
        }
    }
}
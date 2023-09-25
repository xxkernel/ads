#include<bits/stdc++.h>
using namespace std;

int sum = 0;
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

void inOrder(TreeNode* root,vector<int>&v){
    if(root==NULL){
        return;
    }
    inOrder(root->left,v);
    v.push_back(sum-(root->val));
    sum-=root->val;
    inOrder(root->right,v);
}
int main(){
    int n;cin>>n;
    vector<int>v;
    TreeNode* root = NULL;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        sum+=num;
        root = insertNode(root, num);
    }
    v.push_back(sum);
    inOrder(root, v);
    reverse(v.begin(), v.end());
    for(int i = 1;i<v.size();i++){
        cout<<v[i]<<' ';
    }

}
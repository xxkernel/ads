#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int x = 0){
        this->val = x;
        this->left = NULL;
        this->right = NULL;
    }
};

void getWidth(TreeNode* root,int cnt, map<int,int>&mp){
    if(root==NULL){
        return;
    }
    mp[cnt]++;
    getWidth(root->left,cnt+1, mp);
    getWidth(root->right,cnt+1, mp);
}
// TreeNode* search(TreeNode* root, int x){
//     if(root!=NULL && root->val==x){
//         return root;
//     }
//     else{
//         search(root->left, x);
//         search(root->right, x);
//     }
//     return root;
// }
// TreeNode* insertNode(TreeNode* root, int x, int y, int z){
//     TreeNode* temp = search(root, x);
//     if(z==0){
//         TreeNode* newOne = new TreeNode(y);
//         temp->left = newOne;
//     }
//     else{
//         TreeNode* newOne = new TreeNode(y);
//         temp->right = newOne;
//     }
//     return temp;
// }

TreeNode* insertNode(TreeNode* root, int x,int y, int z){
    if(root==NULL){
        return new TreeNode(x);
    }
    queue<TreeNode*>node;
    node.push(root);
    while(!node.empty()){
        TreeNode* temp = node.front();
        node.pop();
        if(temp->val == x){
            if(z==0){
                temp->left = new TreeNode(y);
            }
            else{
                temp->right = new TreeNode(y);
            }
            return root;
        }
        if(temp->left!=NULL){
            node.push(temp->left);
        }
        if(temp->right!=NULL){
            node.push(temp->right);
        }
    }
    return root;
}
int getHeight(TreeNode* root){
    if(!root){
        return 0;
    }
    int l = getHeight(root->left);
    int r = getHeight(root->right);
    return max(l,r)+1;
}
void pushLevels(TreeNode* root, int cnt, vector<int>&v){
    if(root==NULL){
        return;
    }
    v[cnt]++;
    pushLevels(root->left, cnt+1, v);
    pushLevels(root->right, cnt+1, v);
}

int main(){
    TreeNode* root = new TreeNode(1);
    int n;cin>>n;
    map<int, int>mp;
    for(int i = 0;i<n-1;i++){
        int x,y,z;
        cin>>x>>y>>z;
        root = insertNode(root, x,y,z);
    }
    // int sz = getHeight(root);
    // vector<int>v(sz, 0);
    // int max = 0;
    // pushLevels(root, 0, v);
    // for(int i = 0;i<v.size();i++){
    //     if(max<v[i]){
    //         max = v[i];
    //     }
    // }
    // cout<<max;
    getWidth(root, 0, mp);
    int max = 0;
    for(auto x:mp){
        if(x.second>max){
            max = x.second;
        }
    }
    cout<<max;
}
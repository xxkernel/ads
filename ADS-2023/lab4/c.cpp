#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int x = 0){
        this->val = x;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertNode(Node* root, int x){
    if(root==NULL){
        return new Node(x);
    }
    if(x<=root->val){
        root->left = insertNode(root->left, x);
    }
    else{
        root->right = insertNode(root->right, x);
    }
    return root;
}

Node* findNode(Node* root, int x){
    while(root!=NULL && root->val!=x){
        if(x<=root->val){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return root;
}

void printPreOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main(){
    Node* root = NULL;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int num;cin>>num;
        root = insertNode(root, num);
    }
    int m;cin>>m;
    root = findNode(root,m);
    printPreOrder(root);
}
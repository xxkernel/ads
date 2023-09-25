#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int x=0){
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

void printNode(Node* root){
    if(root==NULL){
        return;
    }
    printNode(root->left);
    cout<<root->val<<" ";
    printNode(root->right);
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

int sizeOfSubTree(Node* root){
    if(root==NULL){
        return 0;
    }
    return sizeOfSubTree(root->left) + 1 + sizeOfSubTree(root->right);
}
int main(){
    Node *root = NULL;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        root = insertNode(root,num);
    }
    int m;cin>>m;
    root = findNode(root,m);
    cout<<sizeOfSubTree(root);
}
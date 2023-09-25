#include<iostream>
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

struct BSTNode{
    Node* root = NULL;
    void insertNode(int x){
        if(root==NULL){
            Node* newOne = new Node(x);
            root = newOne;
            root->left = NULL;
            root->right = NULL;
            return;
        }
        while(root!=NULL){
            if(x>=root->val){
                if(root->left==NULL){
                    root->left = new Node(x);
                    return;
                }
            root = root->left;
            }
            else{
                if(root->right==NULL){
                    root->right = new Node(x);
                    return;
                }
                root = root->right;
            }
        }
    }

    void InorderNode(){
        while(root!=NULL){
            InorderNode(root->left);
            cout<<root->val<<" ";
            InorderNode(root->right);
        }
    }
};

int main(){
    BSTNode bst;
    bst.insertNode(10);
    bst.insertNode(1);
    bst.insertNode(15);
    bst.insertNode(18);
    bst.insertNode(17);
    bst.InorderNode();
}
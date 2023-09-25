#include<iostream>
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

bool checkPath(Node* root, string s){
    for (int i = 0; i < s.size(); i++)
    {
        if(root==NULL){
            return false;
        }
        if(s[i]=='L'){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return root!=NULL;
    
}
int main(){
    Node *root = NULL;
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        int num;cin>>num;
        root = insertNode(root,num);
    }
    for(int i = 0;i<m;i++){
        string s;
        cin>>s;
        if(!checkPath(root,s)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
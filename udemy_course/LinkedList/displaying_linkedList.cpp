#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void Initial(int a[], int n, Node *p){
    Node* temp, *last;
    last = p;
    for(int i = 0;i<n;i++){
        Node* temp;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void Display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main(){
    int a[] = {1,2,3,4,5};
    Node *p = new Node();
    Initial(a, 5, p);
    Display(p);
}
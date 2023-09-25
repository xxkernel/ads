#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void PrintLinkedList(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

void InsertAtTail(Node*& head, int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* current = head;
        while(current->next!=NULL){
            current = current->next;
        }
        current->next = newNode;
    }
}


void InsertAtPosition(Node* &head, int position, int d){
    if(position<0){
        cout<<"Invalid position."<<endl;
        return;
    }
    
    Node* newNode = new Node(d);
    if (position==0)
    {
        newNode->next = head;
        head = newNode;
    }
    else{
        Node* current = head;
        int cnt = 0;
        while (current!=NULL && cnt<position-1)
        {
            current = current->next;
            cnt++;
        }
        
        if (current==NULL)
        {
            cout<<"Invalid position"<<endl;
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    
}


int main(){
    Node* head = new Node(1);
    Node* two = new Node(2);
    head->next = two;
    PrintLinkedList(head);
    InsertAtHead(head,12);
    PrintLinkedList(head);
    InsertAtTail(head,20);
    PrintLinkedList(head);
}
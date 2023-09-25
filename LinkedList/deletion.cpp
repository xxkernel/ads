#include<iostream>
using namespace std;


class Node{ 
    public: 
        int data;
        Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void printLinkedList(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}



void deleteAtBeginning(Node* &head){
    if (head==NULL)
    {
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}


void deleteAtEnd(Node* &head){
    if (head==NULL)
    {
        return;
    }
    if (head->next==NULL)
    {
        delete head;
        return;
    }
    
    Node* current = head;
    Node* previous = NULL;
    while (current->next!=NULL)
    {
        previous = current;
        current = current->next;
    }
    previous->next = NULL;
    delete current;
}

void deleteAtPosition(Node* &head, int position){
    if (head==NULL)
    {
        return;
    }
    if (position==0)
    {
        head = head->next;
        return;
    }
    
    Node* current = head;
    int cnt=0;
    while (current!=NULL && cnt<position-1){
        current = current->next;
        cnt++;
    }
    if (current==NULL || current->next==NULL){
        return;
    }

    current->next = current->next->next;
}

void deleteGivenValue(Node* head, int value){
    Node* current = head;
    Node* temp = NULL;
    while(current){
        if (current->data!=value)
        {
            temp = current;
            current = current->next;
        }
        else{
            temp->next = current->next;
            delete current;
            return;
        }
    }

}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* three = new Node(30);
    Node* four = new Node(40);
    head->next = second;
    head->next->next = three;
    head->next->next->next = four;
    printLinkedList(head);
    // deleteAtBeginning(head);
    // deleteAtPosition(head,1);
    deleteGivenValue(head,30);
    printLinkedList(head);
}
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void printLinkedList(Node* head){
    while (head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void reverseLinkedList(Node* &head){
    Node* temp = NULL;
    Node* end = NULL;
    Node* current = head;
    while (current)
    {
        end = current->next;
        current->next = temp;
        temp = current;
        current = end;
    }
    head = temp;
}


int main(){
    Node* head = new Node();
    Node* two = new Node();
    Node* three = new Node();
    Node* four = new Node();
    head->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;
    head->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    printLinkedList(head);
    reverseLinkedList(head);
    printLinkedList(head);
}
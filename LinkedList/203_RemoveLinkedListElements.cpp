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

void printLinkedList(Node* head){
    while (head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

void RemoveLinkedListElements(Node* &head, int elem){
    if (head->data==elem && head!=NULL)
    {
        head = head->next;
    }
    Node* current = head;
    while (current->next!=NULL&& current)
    {
        if (current->next->data==elem)
        {
            current->next = current->next->next;
        }
        else{
            current = current->next;
        }
    }
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* four = new Node(2);
    head->next = second;
    second->next = third;
    third->next = four;
    printLinkedList(head);
    RemoveLinkedListElements(head,2);
    printLinkedList(head);
}
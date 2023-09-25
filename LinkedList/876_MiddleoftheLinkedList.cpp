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

void MiddleOftheLinkedList(Node* &head){
    Node* list1 = head, *list2 = head->next;
    while (list2)
    {
        list1 = list1->next;
        list2 = list2->next;
        if (list2)
        {
            list2 = list2->next;
        }
        
    }
    head = list1;
}


int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* four = new Node(4);
    head->next = second;
    second->next = third;
    third->next = four;
    printLinkedList(head);
    MiddleOftheLinkedList(head);
    printLinkedList(head);
}
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

int ConvertBinaryNumberinaLinkedListtoInteger(Node* head){
    Node* current = head;
    int conv = 0;
    while (current)
    {
        conv = conv*2+current->data;
        current = current->next;
    }
    return conv;
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(0);
    Node* third = new Node(1);
    head->next = second;
    second->next = third;
    cout<<ConvertBinaryNumberinaLinkedListtoInteger(head);
}
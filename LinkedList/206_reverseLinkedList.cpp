#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x = 0){
        this->val = x;
        this->next = NULL;
    }
};
void insertNode(ListNode* &head, ListNode* &tail, int x){
    if(!head && !tail){
        ListNode* newOne = new ListNode(x);
        head = tail = newOne;
    }
    else{
        ListNode* newOne = new ListNode(x);
        tail->next = newOne;
        tail = tail->next;
    }
}
void printNode(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
ListNode* reverseNode(ListNode* head){
    ListNode* start = head;
    ListNode* temp = NULL;
    ListNode* end = NULL;
    while(start){
        temp = start->next;
        start->next = end;
        end = start;
        start = temp;
    }
    return end;
}
int main(){
    ListNode* head = NULL, *tail = NULL;
    int n;cin>>n;
    while(n--){
        int num;cin>>num;
        insertNode(head, tail, num);
    }
    printNode(head);
    ListNode* reversed = reverseNode(head);
    printNode(reversed);
}
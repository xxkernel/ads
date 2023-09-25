#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x = 0){
        this->val = x;
        this->next = NULL;
    }
};

ListNode* insertNode(ListNode* head, int x){
    if(head==NULL){
        return new ListNode(x);
    }
    while(head->next){
        head = head->next;
    }
    ListNode* newOne = new ListNode(x);
    head->next = newOne;
    return head;
}



int main(){
    int n;cin>>n;
    ListNode* head;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        head = insertNode(head, num);
    }
}
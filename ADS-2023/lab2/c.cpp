#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    struct ListNode* next;
    ListNode(int x){
        this->val = x;
        this->next = NULL;
    }
    ListNode(){
        this->val = 0;
        this->next = NULL;
    }
};
struct LinkedList{
    ListNode* head;
    int len;
    LinkedList(){
        head = NULL;
        len = 0;
    }
    void insertNode(int val){
        ListNode* newOne = new ListNode(val);
        if(!head){
            head = newOne;
        }
        else{
            ListNode* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newOne;
        }            
        len++;
    }

    void DelSec(){
        ListNode* res = new ListNode();
        ListNode* ans = res;
        int i = 0;
        while(head){
            if(i%2==0){
                ListNode* newOne = new ListNode(head->val);
                res->next = newOne;
                res = res->next;
                head = head->next;
            }else{
                head = head->next;
            }
            i++;
        }
        head = ans->next;
    }

    void printNode(){
        while(head){
            cout<<head->val<<" ";
            head = head->next;
        }
    }
};

int main(){
    LinkedList ll;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        ll.insertNode(val);
    }
    ll.DelSec();
    ll.printNode();
}
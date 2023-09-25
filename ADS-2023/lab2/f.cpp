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

    void insertNth(int val, int pos){
        int cnt = 0;
        ListNode* res = new ListNode();
        ListNode *ans = res;
        while(head){
            if(cnt!=pos){
                ListNode* newOne = new ListNode(head->val);
                res->next = newOne;
                res = res->next;
            }
            else{
                ListNode* newOne = new ListNode(val);
                ListNode* newTwo = new ListNode(head->val);
                newOne->next = newTwo;
                res->next = newOne;
                res = res->next->next;
            }
            head = head->next;
            cnt++;
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
    int needInsert;cin>>needInsert;
    int pos;cin>>pos;
    ll.insertNth(needInsert, pos);
    ll.printNode();
}
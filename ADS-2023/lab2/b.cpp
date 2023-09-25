#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    string val;
    ListNode* next;
    ListNode* tail;
    ListNode(string x){
        this->val = x;
        this->next = NULL;
        this->tail = NULL;
    }
    ListNode(){
        this->val = "";
        this->next = NULL;
        this->tail = NULL;
    }
};
struct LinkedList{
    ListNode *head;
    ListNode *tail;
    int len;
    LinkedList(){
        head = NULL;
        tail = NULL;
    };
    void InsertNode(string val){
        ListNode* newOne = new ListNode(val);
        if(!head){
            head = tail = newOne;
        }
        else{
            tail->next = newOne;
            tail = tail->next;
        }
    
    }

    void changeNode(int m){
        ListNode *temp = head;
        ListNode *res = new ListNode();
        ListNode *ans = res;
        ListNode *res_1 = new ListNode();
        ListNode *ans_1 = res_1;
        int cnt = 0;
        while(temp){
            if(cnt!=m){
                ListNode* newOne = new ListNode(temp->val);
                res->next = newOne;
                res = res->next;
                cnt++;
            }
            else{
                ListNode* newOne = new ListNode(temp->val);
                res_1->next = newOne;
                res_1 = res_1->next;
            }
            temp = temp->next;
        }
        res_1->next = ans->next;
        head = ans_1->next;

        // int cnt = 1;
        // ListNode* temp = head;
        // while(cnt!=m && temp){
        //     cnt++;
        //     temp = temp->next;
        // }
        // ListNode* res = temp;
        // while(temp->next!=NULL){
        //     temp = temp->next;
        // }
        // temp->next = head;
        // head = res->next;
        // res->next = NULL;
    }
    
    void printNode(){
        while(head){
            cout<<head->val<<" ";
            head= head->next;
        }
    }
};
int main(){
    LinkedList ll;
    int n, m;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        string s;cin>>s;
        ll.InsertNode(s);
    }
    ll.changeNode(m);
    ll.printNode();
}
#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    string val;
    struct ListNode* next;
    ListNode(string x){
        this->val = x;
        this->next = NULL;
    }
    ListNode(){
        this->val = "";
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
    void insertNode(string val){
        ListNode* newOne = new ListNode(val);
        if(!head){
            head = newOne;
            len++;
        }
        else{
            ListNode* temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            if(temp->val!=val){
                temp->next = newOne;
                len++;
            }
        }            
    }

    void reverseNode(){
        ListNode* start = head;
        ListNode* end = NULL;
        ListNode* temp;
        while(start){
            temp = start->next;
            start->next = end;
            end = start;
            start = temp;
        }
        head = end;
    }
    void printNode(){
        while(head){
            cout<<head->val<<endl;
            head = head->next;
        }
    }
};

int main(){
    LinkedList ll;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        string val;cin>>val;
        ll.insertNode(val);
    }
    ll.reverseNode();
    cout<<"All in all: "<<ll.len<<endl;
    cout<<"Students:"<<endl;
    ll.printNode();
}
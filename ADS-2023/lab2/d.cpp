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

    void findMode(){
        ListNode* temp = head;
        ListNode *res = new ListNode();
        ListNode* ans = res;
        int high = 0;
        map<int,int>mp;
        vector<int>v;
        while(temp){
            mp[temp->val]++;
            if(high<mp[temp->val]){
                high = mp[temp->val];
            }
            temp = temp->next;
        }
        for(map<int,int>::iterator it = mp.begin(); it!=mp.end();it++){
            if(it->second==high){
                v.push_back(it->first);
            }
        }
        sort(v.rbegin(), v.rend());
        
        for(int i = 0;i<v.size();i++){
            ListNode* newOne = new ListNode(v[i]);
            res->next = newOne;
            res = res->next;
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
    for(int i = 0;i<n;i++){
        int val;cin>>val;
        ll.insertNode(val);
    }
    ll.findMode();
    ll.printNode();
}
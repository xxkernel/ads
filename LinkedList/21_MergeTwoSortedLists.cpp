/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list_1 = list1;
        ListNode* list_2 = list2;
        ListNode main(0);
        ListNode* temp = &main;
        if(list_1==NULL){
            return list_2;
        }
        if(list_2==NULL){
            return list_1;
        }
        while(list_1 && list_2){
            if(list_1->val>=list_2->val){
                temp->next = list_2;
                list_2 = list_2->next;
            }
            else{
                temp->next = list_1;
                list_1 = list_1->next;
            }
            temp = temp->next;
        }
        if(list_1!=NULL){
            temp->next = list_1;
        }
        else{
            temp->next = list_2;
        }
        return main.next;
    }
};
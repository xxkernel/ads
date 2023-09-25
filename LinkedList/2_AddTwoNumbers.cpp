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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = l1;
        ListNode* list2 = l2;
        ListNode result(0);
        ListNode* temp = &result;
        int main = 0;
        while(list1 || list2 || main){
            int sum = 0;
            if(list1){
                sum+=list1->val;
                list1 = list1->next;
            }
            if(list2){
                sum+=list2->val;
                list2 = list2->next;
            }
            sum+=main;
            main = sum/10;
            ListNode* node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;
        }
        return result.next;
    }
};
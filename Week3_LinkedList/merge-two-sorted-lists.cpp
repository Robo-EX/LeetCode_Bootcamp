// https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        while(l1 && l2){
           if(l1 -> val < l2 -> val){
               temp -> next = l1;
               l1  = l1 -> next;
           } 
            else {
                temp ->next = l2;
                l2 = l2 -> next;
            }
            temp = temp -> next;
        }
        if(l1)
            temp->next = l1;
        if(l2)
            temp->next = l2;
        return ans -> next;
    }
};

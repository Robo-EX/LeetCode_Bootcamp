// https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return NULL;
        ListNode* prevptr = NULL;
        ListNode* current = head;
        ListNode* nextptr;
        
        while(current != NULL){
            nextptr = current->next;
            current->next = prevptr;
            prevptr = current;
            current = nextptr;
        }
        
        return prevptr;
    
    }
};

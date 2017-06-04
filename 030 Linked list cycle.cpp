# Description
===================================================================================================================
Given a linked list, determine if it has a cycle in it.
Follow up:
Can you solve it without using extra space?
-------------------------------------------------------------------------------------------------------------------
# Solution
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode *slow=head;
        ListNode *quick=head;
        while(quick->next!=NULL && quick->next->next!=NULL)
        {
            slow=slow->next;
            quick=quick->next->next;
            if(slow==quick)
            {
                return true;
            }
        }
        return false;
    }
};